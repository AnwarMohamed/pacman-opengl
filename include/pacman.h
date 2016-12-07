#pragma once

#include "glut_header.h"
#include "sounds.h"
#include "images.h"


class Pacman
{
public:
    Pacman(int maxX, int maxY);
    ~Pacman();

    int x, y;
    int direction;

    int lives, score;
    bool move;

    void draw();
    void update(char* map, int maxX, int maxY);

    void onMove(int key, int x, int y);

    void setSounds(Sounds* sounds);
    void setImages(Images* images);

    int getNextX(int maxX, int maxY);
    int getNextY(int maxX, int maxY);

private:
    GLuint texture;
    Sounds* sounds;
    Images* images;
    
    int maxX, maxY;
};
