#include "wall.h"

Wall::Wall()
{
}

Wall::~Wall()
{
}

void Wall::draw(int x, int y)
{
    glPushMatrix();
    glTranslatef(x + 5, y + 5, 0);
    glColor4f(0.8, 0, 1, 0);
    glutSolidCube(1);
    glPopMatrix();
}
