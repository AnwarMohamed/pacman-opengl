#pragma once

#include "glut_header.h"

#define FOOD_A 'A'
#define FOOD_B 'B'

#define FOOD_RED    1.0
#define FOOD_GREEN  0.7254901960784313
#define FOOD_BLUE   0.6862745098039216

class Food
{
public:
    Food(int maxX, int maxY);
    ~Food();

    void draw(char type, int x, int y);
    static bool isFood(char type);
    
private:
    int maxX, maxY;
};
