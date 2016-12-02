#pragma once

#include "glut_header.h"

class Speedy
{
public:
    Speedy(int x, int y);
    ~Speedy();
    
    void draw();

private:
    int x, y;
};
