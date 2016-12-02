#include "maze.h"

#include <iostream>
#include <string>

using namespace std;

Maze::Maze()
{
    sounds = new Sounds();
    images = new Images();

    pacman = new Pacman(images, sounds);
    wall = new Wall();
    food = new Food();

    map = new char[MAZE_MAX_X * MAZE_MAX_Y];
    level = new Level();
}

bool Maze::load(string path)
{
    mapPath = path;
    return reset();
}

bool Maze::reset()
{
    mapFile.open(mapPath.c_str());

    if (!mapFile.is_open())
        return false;

    for (int y = 0; y < MAZE_MAX_Y; y++) {
        for (int x = 0; x < MAZE_MAX_X; x++) {
            mapFile >> *(map + (y * MAZE_MAX_X) + x);
            cout << *(map + (y * MAZE_MAX_X) + x);
        }
        cout << endl;
    }

    mapFile.close();

    level.reset();
    return true;
}

Maze::~Maze()
{
    delete pacman;
    delete wall;
    delete food;
    delete map;
}

void Maze::draw()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    for (int y = 0; y < MAZE_MAX_Y; y++) {
        for (int x = 0; x < MAZE_MAX_X; x++) {

            glPushMatrix();

            switch (*(map + (y * MAZE_MAX_X) + x)) {
            case 'w':
                wall->draw(x, y);
                break;
            case 'f':
                food->draw(x, y);
                break;
            }

            glPopMatrix();
        }
    }

    pacman->draw();
}

void Maze::onMove(int key, int x, int y)
{
    pacman->onMove(key, x, y);
}

void Maze::update()
{
    pacman->update(map, MAZE_MAX_X, MAZE_MAX_Y);
}
