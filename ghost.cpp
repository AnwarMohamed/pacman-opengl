#include "ghost.h"

Ghost::Ghost(int x, int y)
{
    this->x = x;
    this->y = y;

    step = 1;
	direction = 0;

}

Ghost::~Ghost()
{
}

bool Ghost::canMove(int direction)
{
	switch (direction) {
    case 1:
        return Wall::isWall(*(map + (maxY -y - step) * maxY + x));
    case 2:
		return Wall::isWall(*(map + (maxY - y) * maxY + x + step));
    case 3:
		return Wall::isWall(*(map + (maxY - y + step) * maxY + x));
    case 0:
		return Wall::isWall(*(map + (maxY - y) * maxY + x - step));
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

int Ghost::getNextX()
{
	switch (direction) {
	case 0:
		return x - 1;
	case 2:
		return x + 1;
	default:
		return x;
	}
}

int Ghost::getNextY()
{
	switch (direction) {
	case 1:
		return y + 1;
	case 3:
		return y - 1;
	default:
		return y;
	}
}