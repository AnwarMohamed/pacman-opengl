#pragma once

#include "glut_header.h"

class Bashful
{
public:
    Bashful(int x, int y);
    ~Bashful();

    void draw();

private:
    int x, y;
};
