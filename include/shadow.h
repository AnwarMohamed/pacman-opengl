#pragma once

#include "glut_header.h"

class Shadow
{
public:
    Shadow(int x, int y);
    ~Shadow();

    void draw();

private:
    int x, y;
};
