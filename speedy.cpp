#include "speedy.h"

Speedy::Speedy(int x, int y) : Ghost(x, y)
{
}

Speedy::~Speedy()
{
}

void Speedy::draw(int pacmanX, int pacmanY)
{
    Ghost::move(pacmanX, pacmanY);

    glPushMatrix();
    glTranslatef(x, y, 0);
    glColor4f(SPEEDY_RED, SPEEDY_GREEN, SPEEDY_BLUE, 0);
    glutSolidSphere(0.7, 20, 20);
    glPopMatrix();
}

void Speedy::move(int pacmanX, int pacmanY)
{
}