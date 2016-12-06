#pragma once

#include "sounds.h"
#include "images.h"
#include "food.h"
#include "wall.h"

#include "bashful.h"
#include "pokey.h"
#include "shadow.h"
#include "speedy.h"

class Level
{
public:
    Level(char* map, int maxX, int maxY);
    ~Level();

    void levelUp();
    void reset();

    void setSounds(Sounds* sounds);
    void setImages(Images* images);

    void draw(int pacmanX, int pacmanY);

private:
    int level;

    Food* food;
    Wall* wall;

    Bashful* bashful;
    Pokey* pokey;
    Shadow* shadow;
    Speedy* speedy;

    char* map;
    int maxX, maxY;

    Sounds* sounds;
    Images* images;
    
    void prepare();
};
