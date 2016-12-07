#include "ghost.h"

Ghost::Ghost(int x, int y)
{
    this->x = x;
    this->y = y;

    step = 1;
    direction = 0;
}

Ghost::~Ghost()
{
}

bool Ghost::canMove(int direction)
{
    switch (direction) {
    case 1:
        return Wall::isWall(*(map + (maxY - y - step) * maxY + x));
    case 2:
        return Wall::isWall(*(map + (maxY - y) * maxY + x + step));
    case 3:
        return Wall::isWall(*(map + (maxY - y + step) * maxY + x));
    case 0:
        return Wall::isWall(*(map + (maxY - y) * maxY + x - step));
    default:
        return false;
    }
}

void Ghost::setMap(char* map, int maxX, int maxY)
{
    this->map = map;
    this->maxX = maxX;
    this->maxY = maxY;
}

void Ghost::draw(int pacmanX, int pacmanY)
{
}

void Ghost::move(int pacmanX, int pacmanY)
{
    direction = (rand() % 4);
    int newX = getNextX() - 5;
    int newY = getNextY() - 4;

    move_Ghost = true;
    char type = *(map + (maxY - newY) * maxX + newX);

    if (Wall::isWall(type))
        move_Ghost = false;

    if (x == pacmanX && y == pacmanY) {
        // ama yet2ablo
    }

    if (move_Ghost) {
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

int Ghost::getNextX()
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

int Ghost::getNextY()
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

void Ghost::loadTexture(string path)
{
    //    texture = SOIL_load_OGL_texture // load an image file directly as a new OpenGL texture
    //        (path.c_str(),
    //         SOIL_LOAD_AUTO,
    //         SOIL_CREATE_NEW_ID,
    //         SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT);
    //
    //    if (texture == 0) {
    //        printf("SOIL loading error: '%s'\n", SOIL_last_result());
    //    }
    //
    //    glBindTexture(GL_TEXTURE_2D, texture); // select our current texture
    //    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    //    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_DECAL);
    //    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_DECAL);
    //    glTexParameterf(GL_TEXTURE_2D,
    //                    GL_TEXTURE_MIN_FILTER,
    //                    GL_LINEAR_MIPMAP_NEAREST); // when texture area is small, bilinear filter the closest mipmap
    //    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR); // when texture area is large, bilinear
    // filter the
    //                                                                      // first mipmap
    //    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);     // texture should tile
    //    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    //    gluBuild2DMipmaps(GL_TEXTURE_2D, 4, 8, 8, GL_RGBA, GL_UNSIGNED_BYTE, data); // build our texture mipmaps
}