#include "level.h"

Level::Level(char* map, int maxX, int maxY)
{
    images = 0;
    sounds = 0;
    level = 0;

    wall = new Wall(maxX, maxY);
    food = new Food(maxX, maxY);

    this->map = map;
    this->maxX = maxX;
    this->maxY = maxY;

    shadow = new Shadow(15, 21);
    shadow->setMap(map, maxX, maxY);
    
    pokey = new Pokey(14, 18);    
    pokey->setMap(map, maxX, maxY);
    
    bashful = new Bashful(15, 18);
    bashful->setMap(map, maxX, maxY);
    
    speedy = new Speedy(16, 18);
    speedy->setMap(map, maxX, maxY);
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

void Level::draw(int pacmanX, int pacmanY)
{
    for (int y = 0; y < maxY; y++) {
        for (int x = 0; x < maxX; x++) {

            glPushMatrix();

            char pixel = *(map + (y * maxX) + x);
            
            if (Wall::isWall(pixel))
                wall->draw(pixel, x, y);
                
            else if (Food::isFood(pixel))
                food->draw(pixel, x, y);

            glPopMatrix();
        }
    }
    
    bashful->draw(pacmanX, pacmanY);
    pokey->draw(pacmanX, pacmanY);
    shadow->draw(pacmanX, pacmanY);
    speedy->draw(pacmanX, pacmanY);
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