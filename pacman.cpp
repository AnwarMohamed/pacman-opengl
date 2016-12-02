#include "pacman.h"
#include "glut_header.h"
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

Pacman::Pacman()
{
    x = 15;
    y = 11;

    lives = 3;
    score = 0;
    direction = -1;    

    //    int width, height;
    //    unsigned char* image = SOIL_load_image("../media/pacman.png", &width, &height, 0, SOIL_LOAD_RGB);
    //
    //    glGenTextures(1, &texture);
    //    glBindTexture(GL_TEXTURE_2D, texture);
    //    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    //    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    //    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    //    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    //    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
    //    glGenerateMipmapEXT(GL_TEXTURE_CUBE_MAP);
    //
    //    SOIL_free_image_data(image);
    //    glBindTexture(GL_TEXTURE_2D, 0);

    //    glPushMatrix();
    //    glTranslatef(7, 11, 0);
    //    glColor4f(1, 1, 0, 0);
    //    glutSolidSphere(0.3, 20, 20);
    //    glPopMatrix();
}

Pacman::~Pacman()
{
}

void Pacman::draw()
{
    glPushMatrix();
    glTranslatef(x, y, 0);
    glColor4f(1, 1, 0, 0);
    glutSolidSphere(0.4, 20, 20);

    //    glEnable(GL_TEXTURE_2D);
    //    glBindTexture(GL_TEXTURE_2D, texture);
    //    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
}

void Pacman::setImages(Images* images)
{
    this->images = images;
}

void Pacman::setSounds(Sounds* sounds)
{
    this->sounds = sounds;
}

void Pacman::onMove(int key, int x, int y)
{
    switch (key) {
    case GLUT_KEY_LEFT:
        direction = 0;
        break;
    case GLUT_KEY_UP:
        direction = 1;
        break;
    case GLUT_KEY_RIGHT:
        direction = 2;
        break;
    case GLUT_KEY_DOWN:
        direction = 3;
        break;
    }
}

void Pacman::update(char* map, int maxX, int maxY)
{
    int newX = getNextX() - 5;
    int newY = getNextY() - 5;

    move = true;

    switch (*(map + newY * maxX + newX)) {
    case 'w':
        move = false;
        break;
    case 'f':
        *(map + newY* maxX + newX) = '0';
        score++;
        break;
    }

    if (move) {
        switch (direction) {
        case 0:
            x -= 1;
            break;
        case 1:
            y += 1;
            break;
        case 2:
            x += 1;
            break;
        case 3:
            y -= 1;
            break;
        }
    }
}

int Pacman::getNextX()
{
    switch (direction) {
    case 0:
        return x - 1;
    case 2:
        return x + 1;
    default:
        return x;
    }
}

int Pacman::getNextY()
{
    switch (direction) {
    case 1:
        return y + 1;
    case 3:
        return y - 1;
    default:
        return y;
    }
}