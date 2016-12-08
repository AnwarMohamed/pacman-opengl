#pragma once

#include <string>
#include <fstream>

#include "glut_header.h"
#include "food.h"
#include "pacman.h"
#include "wall.h"
#include "level.h"

using namespace std;

#define MAZE_MAX_X 28
#define MAZE_MAX_Y 36

class Maze
{
public:
    Maze();
    ~Maze();

    bool load(string path);
    bool reset();

    void draw();
    void update();

    void onMove(int key, int x, int y);

public:
    Pacman* pacman;
    Level* level;

    char* map;
    ifstream mapFile;
    string mapPath;

    Sounds* sounds;
    Images* images;
};
