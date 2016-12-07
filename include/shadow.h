#pragma once

#include "glut_header.h"
#include "ghost.h"

#define SHADOW_RED      0.9197651663405088
#define SHADOW_GREEN    0.12941176470588237
#define SHADOW_BLUE     0.1450980392156863

class Shadow: public Ghost
{
public:
    Shadow(int x, int y);
    ~Shadow();

    void draw(int pacmanX, int pacmanY) override;

private:
    void move(int x, int y) override;    
};
