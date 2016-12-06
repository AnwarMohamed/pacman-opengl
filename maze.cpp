#include "maze.h"

#include <iostream>
#include <string>

using namespace std;

Maze::Maze()
{
    sounds = new Sounds();
    images = new Images();

    pacman = new Pacman();
    pacman->setImages(images);
    pacman->setSounds(sounds);

    map = new char[MAZE_MAX_X * MAZE_MAX_Y];

    level = new Level(map, MAZE_MAX_X, MAZE_MAX_Y);
    level->setImages(images);
    level->setSounds(sounds);
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

    for (int y = 0; y < MAZE_MAX_Y; y++)
        for (int x = 0; x < MAZE_MAX_X; x++)
            mapFile >> *(map + (y * MAZE_MAX_X) + x);

    mapFile.close();

    level->reset();
    return true;
}

Maze::~Maze()
{
    delete pacman;
    delete map;
    delete level;
    delete sounds;
    delete images;
}

void Maze::draw()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    level->draw(pacman->x, pacman->y);
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
