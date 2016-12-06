#include "shadow.h"

Shadow::Shadow(int x, int y) : Ghost(x, y)
{
}

Shadow::~Shadow()
{
}

void Shadow::draw(int pacmanX, int pacmanY)
{
    move(pacmanX, pacmanY);

    glPushMatrix();
    glTranslatef(x, y, 0);
    glColor4f(SHADOW_RED, SHADOW_GREEN, SHADOW_BLUE, 0);
    glutSolidSphere(0.4, 20, 20);
    glPopMatrix();
}

void Shadow::move(int pacmanX, int pacmanY)
{
    int deltaX = pacmanX - x;
    int deltaY = pacmanY - y;

    if (deltaY < 0 && canMove(DIRECTION_UP))
        y -= step;

    else if (deltaX >= 0 && canMove(DIRECTION_RIGHT))
        x += step;

    else if (deltaY >= 0 && canMove(DIRECTION_DOWN))
        y += step;

    else if (deltaX < 0 && canMove(DIRECTION_LEFT))
        x -= step;

    else {
        if (canMove(DIRECTION_UP))
            y -= step;
            
        else if (canMove(DIRECTION_RIGHT))
            x += step;

        else if (canMove(DIRECTION_DOWN))
            y += step;

        else if (canMove(DIRECTION_LEFT))
            x -= step;
    }
}