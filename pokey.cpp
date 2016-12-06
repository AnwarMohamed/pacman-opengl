#include "pokey.h"

Pokey::Pokey(int x, int y) : Ghost(x, y)
{
}

Pokey::~Pokey()
{
}

void Pokey::draw(int pacmanX, int pacmanY)
{
    move(pacmanX, pacmanY);

    glPushMatrix();
    glTranslatef(x, y, 0);
    glColor4f(POKEY_RED, POKEY_GREEN, POKEY_BLUE, 0);
    glutSolidSphere(0.4, 20, 20);
    glPopMatrix();
}

void Pokey::move(int pacmanX, int pacmanY)
{
}