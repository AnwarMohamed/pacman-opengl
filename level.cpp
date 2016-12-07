#include "level.h"
#include <cstdlib>

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

    shadow = new Shadow(15, maxY - 22);
    shadow->setMap(map, maxX, maxY);

    pokey = new Pokey(14, 23);
    pokey->setMap(map, maxX, maxY);

    bashful = new Bashful(15, 23);
    bashful->setMap(map, maxX, maxY);

    speedy = new Speedy(18, 23);
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

    bashful->draw(pacmanX, pacmanY);
    pokey->draw(pacmanX, pacmanY);
    shadow->draw(pacmanX, pacmanY);
    speedy->draw(pacmanX, pacmanY);

    glPushMatrix();

    drawLives();
    drawScore();

    glPopMatrix();
}

void Level::drawScore()
{
    glColor4f(0.0f, 0.0f, 1.0f, 0.0f);
    glRasterPos2i(5, 5);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)"SCORE");

    glRasterPos2i(8, 5);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)itoa());
}

void Level::drawLives()
{
    glColor4f(0.0f, 0.0f, 1.0f, 0.0f);
    glRasterPos2i(5, 5);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)"LEVEL");

    glRasterPos2i(8, 5);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)"5");
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