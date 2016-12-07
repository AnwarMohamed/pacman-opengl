#include "bashful.h"

Bashful::Bashful(int x, int y) : Ghost(x, y)
{
}

Bashful::~Bashful()
{
}

void Bashful::draw(int pacmanX, int pacmanY)
{
    move(pacmanX, pacmanY);

    glPushMatrix();
    glTranslatef(x, y, 0);
    glColor4f(BASHFUL_RED, BASHFUL_GREEN, BASHFUL_BLUE, 0);
    glutSolidSphere(0.7, 20, 20);
    glPopMatrix();
}

void Bashful::move(int pacmanX, int pacmanY)
{
}