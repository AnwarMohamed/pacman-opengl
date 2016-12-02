#include "level.h"

Level::Level(char* map, int maxX, int maxY)
{
    images = 0;
    sounds = 0;
    level = 0;

    wall = new Wall();
    food = new Food();

    this->map = map;
    this->maxX = maxX;
    this->maxY = maxY;

    bashful = new Bashful(0, 0);
    pokey = new Pokey(0, 0);
    shadow = new Shadow(0, 0);
    speedy = new Speedy(0, 0);
}

void Level::prepare()
{
}

void Level::setImages(Images* images)
{
    this->images = images;
}

void Level::setSounds(Sounds* sounds)
{
    this->sounds = sounds;
}

void Level::reset()
{
}

void Level::draw()
{
    for (int y = 0; y < maxY; y++) {
        for (int x = 0; x < maxX; x++) {

            glPushMatrix();

            switch (*(map + (y * maxX) + x)) {
            case 'w':
                wall->draw(x, y);
                break;
            case 'f':
                food->draw(x, y);
                break;
            }

            glPopMatrix();
        }
    }
}

Level::~Level()
{
    delete wall;
    delete food;

    delete bashful;
    delete pokey;
    delete shadow;
    delete speedy;
}