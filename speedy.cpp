#include "speedy.h"

Speedy::Speedy(int x, int y) : Ghost(x, y)
{

}

Speedy::~Speedy()
{
}

void Speedy::draw(int pacmanX, int pacmanY)
{
    move(pacmanX, pacmanY);

    glPushMatrix();
    glTranslatef(x, y, 0);
    glColor4f(SPEEDY_RED, SPEEDY_GREEN, SPEEDY_BLUE, 0);
    glutSolidSphere(0.9, 20, 20);
    glPopMatrix();
}

void Speedy::move(int pacmanX, int pacmanY)
{
	direction = (rand() % 4);
	int newX = getNextX() - 5;
	int newY = getNextY() - 4;

	move_Ghost = true;
	char type = *(map + (maxY - newY) * maxX + newX);

	if (Wall::isWall(type))
		move_Ghost = false;
	if (x == pacmanX && y == pacmanY)
	{
		// ama yet2ablo
	}

	if (move_Ghost) {
		switch (direction) {
		case 0:
			x -= 1;
			break;
		case 1:
			y += 1;
			break;
		case 2:
			x += 1;
			break;
		case 3:
			y -= 1;
			break;
		}
	}
}