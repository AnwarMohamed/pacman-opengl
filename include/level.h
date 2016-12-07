#pragma once

#include "sounds.h"
#include "images.h"
#include "food.h"
#include "wall.h"

#include "bashful.h"
#include "pokey.h"
#include "shadow.h"
#include "speedy.h"
#include "pacman.h"

class Level
{
public:
    Level(char* map, int maxX, int maxY);
    ~Level();

    void levelUp();
    void reset();

    void setSounds(Sounds* sounds);
    void setImages(Images* images);
    void setPacman(Pacman* pacman);

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
    Pacman* pacman;

    void prepare();
    void drawLives();
    void drawScore();
    void drawLevels();
    void drawPacman();
};
