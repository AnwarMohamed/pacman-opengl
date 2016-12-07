#include "shadow.h"

Shadow::Shadow(int x, int y) : Ghost(x, y)
{
    loadTexture("../media/images/ghost1.png");
}

Shadow::~Shadow()
{
}

void Shadow::draw(int pacmanX, int pacmanY)
{
    Ghost::move(pacmanX, pacmanY);

    glPushMatrix();
    glTranslatef(x, y, 0);
    glColor4f(SHADOW_RED, SHADOW_GREEN, SHADOW_BLUE, 0);
    glutSolidSphere(0.7, 20, 20);
    glPopMatrix();
}

void Shadow::move(int pacmanX, int pacmanY)
{
}