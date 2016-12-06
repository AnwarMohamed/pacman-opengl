#include "ghost.h"

Ghost::Ghost(int x, int y)
{
    this->x = x;
    this->y = y;

    step = 1;
}

Ghost::~Ghost()
{
}

bool Ghost::canMove(int direction)
{
    switch (direction) {
    case DIRECTION_UP:
        return *(map + (y - step) * maxY + x) != 'w';
    case DIRECTION_RIGHT:
        return *(map + y * maxY + x + step) != 'w';
    case DIRECTION_DOWN:
        return *(map + (y + step) * maxY + x) != 'w';
    case DIRECTION_LEFT:
        return *(map + y * maxY + x - step) != 'w';
    default:
        return false;
    }
}

void Ghost::setMap(char* map, int maxX, int maxY)
{
    this->map = map;
    this->maxX = maxX;
    this->maxY = maxY;
}

void Ghost::draw(int pacmanX, int pacmanY)
{
}

void Ghost::move(int pacmanX, int pacmanY)
{
}