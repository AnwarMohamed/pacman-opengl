#pragma once

#include "glut_header.h"
#include "wall.h"
#include <iostream>
using namespace std;

#define DIRECTION_UP        0
#define DIRECTION_RIGHT     1
#define DIRECTION_DOWN      2
#define DIRECTION_LEFT      3

class Ghost
{
public:
    Ghost(int x, int y);
    virtual ~Ghost();

    virtual void draw( int pacmanX, int pacmanY);
    void setMap(char* map, int maxX, int maxY);

protected:
    int x, y, step;
    int maxX, maxY;
    char* map;
	int direction;
	bool move_Ghost;

    bool canMove(int direction);
    virtual void move(int x, int y);
	int getNextX();
	int getNextY();

};
