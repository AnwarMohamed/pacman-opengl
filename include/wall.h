#pragma once

#include "glut_header.h"
#include "images.h"

#define WALL_A 'a'
#define WALL_B 'b'
#define WALL_C 'c'
#define WALL_D 'd'

#define WALL_E 'e'
#define WALL_F 'f'
#define WALL_G 'g'
#define WALL_H 'h'

#define WALL_I 'i'
#define WALL_J 'j'
#define WALL_K 'k'
#define WALL_L 'l'

#define WALL_M 'm'
#define WALL_N 'n'
#define WALL_O 'o'
#define WALL_P 'p'

#define WALL_Q 'q'
#define WALL_R 'r'
#define WALL_S 's'
#define WALL_T 't'
#define WALL_U 'u'
#define WALL_V 'v'
#define WALL_W 'w'
#define WALL_X 'x'
#define WALL_Y 'y'
#define WALL_Z 'z'

class Wall
{
public:
    Wall(int maxX, int maxY);
    ~Wall();

    void draw(char type, int x, int y);
    
    static bool isWall(char type);    
private:
    int maxX, maxY;    
};
