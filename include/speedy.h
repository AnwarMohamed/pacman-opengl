#pragma once

#include "glut_header.h"
#include "ghost.h"

#define SPEEDY_RED      0.9686274509803922
#define SPEEDY_GREEN    0.7215686274509804
#define SPEEDY_BLUE     0.8274509803921568

class Speedy: public Ghost
{
public:
    Speedy(int x, int y);
    ~Speedy();
    
    void draw(int pacmanX, int pacmanY) override;

private:
    void move(int x, int y) override;
};
