#pragma once

#include "glut_header.h"
#include "ghost.h"

#define POKEY_RED       0.9647058823529412
#define POKEY_GREEN     0.6352941176470588
#define POKEY_BLUE      0.11372549019607843

class Pokey: public Ghost
{
public:
    Pokey(int x, int y);
    ~Pokey();

    void draw(int pacmanX, int pacmanY) override;

private:
    void move(int x, int y) override;
};
