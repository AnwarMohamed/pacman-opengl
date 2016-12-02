#pragma once

#include "sounds.h"
#include "images.h"
#include "food.h"
#include "wall.h"

class Level
{
public:
    Level(char* map, int maxX, int maxY);
    ~Level();

    void levelUp();
    void reset();

    void setSounds(Sounds* sounds);
    void setImages(Images* images);

    void draw();

private:
    int level;

    Food* food;
    Wall* wall;

    char* map;
    int maxX, maxY;

    Sounds* sounds;
    Images* images;
    
    void prepare();
};
