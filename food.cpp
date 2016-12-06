#include "food.h"

Food::Food(int maxX, int maxY)
{
    this->maxX = maxX;
    this->maxY = maxY;
}

Food::~Food()
{
}

bool Food::isFood(char type)
{
    switch (type) {
    case FOOD_A:
    case FOOD_B:
        return true;
    default:
        return false;
    }
}

void Food::draw(char type, int x, int y)
{
    glPushMatrix();
    glTranslatef(x + 5, maxY - y + 4, 0);
    glColor4f(FOOD_RED, FOOD_GREEN, FOOD_BLUE, 0);

    switch (type) {
    case FOOD_A:
        break;
    case FOOD_B:
        break;
    }

    glutSolidSphere(0.15, 20, 20);
    glPopMatrix();
}