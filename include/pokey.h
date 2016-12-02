#pragma once

#include "glut_header.h"

class Pokey
{
public:
    Pokey(int x, int y);
    ~Pokey();

    void draw();

private:
    int x, y;
};
