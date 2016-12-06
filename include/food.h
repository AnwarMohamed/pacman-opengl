#pragma once

#include "glut_header.h"

class Food
{
public:
    Food();
    ~Food();

    void draw(char type, int x, int y);
    bool isFood(char type);
};
