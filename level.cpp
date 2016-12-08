#include "level.h"
#include <cstdlib>
#include <fstream>

Level::Level(char* map, int maxX, int maxY)
{
    images = 0;
    sounds = 0;
    level = 0;

    wall = new Wall(maxX, maxY);
    food = new Food(maxX, maxY);

    this->map = map;
    this->maxX = maxX;
    this->maxY = maxY;

    shadow = new Shadow(20, 23);
    shadow->setMap(map, maxX, maxY);

    pokey = new Pokey(19, 23);
    pokey->setMap(map, maxX, maxY);

    bashful = new Bashful(17, 23);
    bashful->setMap(map, maxX, maxY);

    speedy = new Speedy(18, 25);
    speedy->setMap(map, maxX, maxY);
}

void Level::prepare()
{
}

void Level::setImages(Images* images)
{
    this->images = images;
}

void Level::setSounds(Sounds* sounds)
{
    this->sounds = sounds;
}

void Level::setPacman(Pacman* pacman)
{
    this->pacman = pacman;
}

// void Level::setMaze(Maze* maze)
//{
//    this->maze = maze;
//}

void Level::reset2()
{
    ifstream mapFile;
    mapFile.open("../maze.txt");

    if (!mapFile.is_open())
        return;

    for (int y = 0; y < maxY; y++)
        for (int x = 0; x < maxX; x++)
            mapFile >> *(map + (y * maxX) + x);

    mapFile.close();
}

void Level::reset()
{
}

void Level::draw(int pacmanX, int pacmanY)
{
    for (int y = 0; y < maxY; y++) {
        for (int x = 0; x < maxX; x++) {

            glPushMatrix();

            char pixel = *(map + (y * maxX) + x);

            if (Wall::isWall(pixel))
                wall->draw(pixel, x, y);

            else if (Food::isFood(pixel))
                food->draw(pixel, x, y);

            glPopMatrix();
        }
    }
    if (pacman->score == 262) {
        level += 1;        
        pacman->score = 0;
        reset2();
    }

    switch (level) {
    case 0:
        shadow->is_moving = true;
        break;
    case 1:
        speedy->is_moving = true;
        break;
    case 2:
        pokey->is_moving = true;
        break;
    case 3:
        bashful->is_moving = true;
        break;
    }

    bashful->draw(pacmanX, pacmanY);
    pokey->draw(pacmanX, pacmanY);
    shadow->draw(pacmanX, pacmanY);
    speedy->draw(pacmanX, pacmanY);

    glPushMatrix();

    if (speedy->was_hit == 1) {
        pacman->x = 18;
        pacman->y = 14;
        speedy->was_hit = 0;
        pacman->lives--;
    }

    if (shadow->was_hit == 1) {
        pacman->x = 18;
        pacman->y = 14;
        shadow->was_hit = 0;
        pacman->lives--;
    }

    if (pokey->was_hit == 1) {
        pacman->x = 18;
        pacman->y = 14;
        pokey->was_hit = 0;
        pacman->lives--;
    }

    if (bashful->was_hit == 1) {
        pacman->x = 18;
        pacman->y = 14;
        bashful->was_hit = 0;
        pacman->lives--;
    }

    cout << "lives: " << pacman->lives << endl;

    drawLives();
    drawScore();
    drawLevels();
    drawPacman();

    glPopMatrix();
}

#define DRAW_RED 1.0
#define DRAW_GREEN 1.0
#define DRAW_BLUE 0.0

void Level::drawPacman()
{
    glColor4f(DRAW_RED, DRAW_GREEN, DRAW_BLUE, 0.0f);
    glRasterPos2i(5, 39);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)"PACMAN");
}

void Level::drawScore()
{
    glColor4f(DRAW_RED, DRAW_GREEN, DRAW_BLUE, 0.0f);
    glRasterPos2i(5, 5);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)"SCORE");

    glRasterPos2i(9, 5);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)to_string(pacman->score - 1).c_str());
}

void Level::drawLives()
{
    glColor4f(DRAW_RED, DRAW_GREEN, DRAW_BLUE, 0.0f);
    glRasterPos2i(27, 5);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)"LIVES");

    glRasterPos2i(31, 5);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)to_string(pacman->lives).c_str());
}

void Level::drawLevels()
{
    glColor4f(DRAW_RED, DRAW_GREEN, DRAW_BLUE, 0.0f);
    glRasterPos2i(27, 39);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)"LEVEL");

    glRasterPos2i(31, 39);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)to_string(level + 1).c_str());
}

Level::~Level()
{
    delete wall;
    delete food;

    delete bashful;
    delete pokey;
    delete shadow;
    delete speedy;
}