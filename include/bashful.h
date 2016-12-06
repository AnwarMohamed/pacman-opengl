#pragma once

#include "glut_header.h"
#include "ghost.h"

#define BASHFUL_RED     0.0
#define BASHFUL_GREEN   0.6431372549019608
#define BASHFUL_BLUE    0.8823529411764706

class Bashful: public Ghost
{
public:
    Bashful(int x, int y);
    ~Bashful();

    void draw(int pacmanX, int pacmanY) override;

private:
    void move(int x, int y) override;
};
