#include "food.h"

Food::Food()
{
}

Food::~Food()
{
}

bool Food::isFood(char type)
{
    return type == 'f';
}

void Food::draw(char type, int x, int y)
{
    glPushMatrix();
    glTranslatef(x + 5, y + 5, 0);
    glColor4f(1, 1, 1, 0);
    glutSolidSphere(0.15, 20, 20);
    glPopMatrix();
}