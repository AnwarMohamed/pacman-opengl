#include "wall.h"
#include <stdio.h>
#include <math.h>

Wall::Wall(int maxX, int maxY)
{
    this->maxX = maxX;
    this->maxY = maxY;
}

Wall::~Wall()
{
}

bool Wall::isWall(char type)
{
    switch (type) {
    case WALL_A:
    case WALL_B:
    case WALL_C:
    case WALL_D:
    case WALL_E:
    case WALL_F:
    case WALL_G:
    case WALL_H:
    case WALL_I:
    case WALL_J:
    case WALL_K:
    case WALL_L:
    case WALL_M:
    case WALL_N:
    case WALL_O:
    case WALL_P:
    case WALL_Q:
    case WALL_R:
    case WALL_S:
    case WALL_T:
    case WALL_U:
    case WALL_V:
    case WALL_W:
    case WALL_X:
    case WALL_Y:
    case WALL_Z:
        return true;
    default:
        return false;
    }
}

void Wall::draw(char type, int x, int y)
{
    glPushMatrix();
    glColor4f(0, 0.2, 1, 0);

    switch (type) {
    case WALL_A:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.1, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.1, maxY - y + 3.5 + 1);
        glEnd();

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 1);
        glEnd();

        break;
    case WALL_B:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.6);
        glEnd();

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.9);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.9);
        glEnd();

        break;
    case WALL_C:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.1);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.1);
        glEnd();

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.4);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.4);
        glEnd();

        break;
    case WALL_D:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 1);
        glEnd();

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.9, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.9, maxY - y + 3.5 + 1);
        glEnd();

        break;
    case WALL_E:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 1);
        glEnd();

        break;
    case WALL_F:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.6);
        glEnd();

        break;
    case WALL_G:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.4);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.4);
        glEnd();

        break;
    case WALL_H:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 1);
        glEnd();

        break;
    case WALL_I:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 0.8);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 1.0);
        glEnd();

        Images::drawArc(x + 4.5 + 0.2, maxY - y + 4.5 - 0.2, 0.2, 1.5 * PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 0.2, maxY - y + 3.5 + 0.6);
        glEnd();

        break;
    case WALL_J:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 0.8);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 1.0);
        glEnd();

        Images::drawArc(x + 4.5 + 0.8, maxY - y + 4.5 - 0.2, 0.2, PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.8, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.6);
        glEnd();

        break;
    case WALL_K:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 0.2);
        glEnd();

        Images::drawArc(x + 4.5 + 0.2, maxY - y + 4.5 - 0.8, 0.2, 0, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.4);
        glVertex2f(x + 4.5 + 0.2, maxY - y + 3.5 + 0.4);
        glEnd();

        break;
    case WALL_L:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 0.2);
        glEnd();

        Images::drawArc(x + 4.5 + 0.8, maxY - y + 4.5 - 0.8, 0.2, 0.5 * PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.8, maxY - y + 3.5 + 0.4);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.4);
        glEnd();

        break;

    case WALL_M:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 0.8);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 1.0);
        glEnd();

        Images::drawArc(x + 4.5 + 0.2, maxY - y + 4.5 - 0.2, 0.4, 1.5 * PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.4);
        glVertex2f(x + 4.5 + 0.2, maxY - y + 3.5 + 0.4);
        glEnd();

        break;
    case WALL_N:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 0.8);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 1.0);
        glEnd();

        Images::drawArc(x + 4.5 + 0.8, maxY - y + 4.5 - 0.2, 0.4, PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.8, maxY - y + 3.5 + 0.4);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.4);
        glEnd();

        break;
    case WALL_O:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 0.2);
        glEnd();

        Images::drawArc(x + 4.5 + 0.2, maxY - y + 4.5 - 0.8, 0.4, 0, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 0.2, maxY - y + 3.5 + 0.6);
        glEnd();

        break;
    case WALL_P:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 0.2);
        glEnd();

        Images::drawArc(x + 4.5 + 0.8, maxY - y + 4.5 - 0.8, 0.4, 0.5 * PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.8, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.6);
        glEnd();

        break;

    case WALL_Q:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 0.8);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 1.0);
        glEnd();

        Images::drawArc(x + 4.5 + 0.2, maxY - y + 4.5 - 0.2, 0.4, 1.5 * PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.4);
        glVertex2f(x + 4.5 + 0.2, maxY - y + 3.5 + 0.4);
        glEnd();

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.9, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.9, maxY - y + 3.5 + 1);
        glEnd();

        break;
    case WALL_R:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 0.2);
        glEnd();

        Images::drawArc(x + 4.5 + 0.2, maxY - y + 4.5 - 0.8, 0.4, 0, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 0.2, maxY - y + 3.5 + 0.6);
        glEnd();

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.9, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.9, maxY - y + 3.5 + 1);
        glEnd();

        break;
    case WALL_S:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 0.8);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 1.0);
        glEnd();

        Images::drawArc(x + 4.5 + 0.8, maxY - y + 4.5 - 0.2, 0.4, PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.8, maxY - y + 3.5 + 0.4);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.4);
        glEnd();

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.1, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.1, maxY - y + 3.5 + 1);
        glEnd();

        break;
    case WALL_T:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 0.2);
        glEnd();

        Images::drawArc(x + 4.5 + 0.8, maxY - y + 4.5 - 0.8, 0.4, 0.5 * PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.8, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.6);
        glEnd();

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.1, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.1, maxY - y + 3.5 + 1);
        glEnd();

        break;
    case WALL_U:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 0.2);
        glEnd();

        Images::drawArc(x + 4.5 + 0.2, maxY - y + 4.5 - 0.8, 0.4, 0, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 0.2, maxY - y + 3.5 + 0.6);
        glEnd();

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.9);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.9);
        glEnd();

        break;
    case WALL_V:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 0.2);
        glEnd();

        Images::drawArc(x + 4.5 + 0.8, maxY - y + 4.5 - 0.8, 0.4, 0.5 * PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.8, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.6);
        glEnd();

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.9);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.9);
        glEnd();

        break;
    case WALL_W:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 0.8);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 1.0);
        glEnd();

        Images::drawArc(x + 4.5 + 0.2, maxY - y + 4.5 - 0.2, 0.4, 1.5 * PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.4);
        glVertex2f(x + 4.5 + 0.2, maxY - y + 3.5 + 0.4);
        glEnd();

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.9, maxY - y + 3.5 + 0.7);
        glVertex2f(x + 4.5 + 0.9, maxY - y + 3.5 + 1.5);
        glEnd();

        Images::drawArc(x + 4.5 + 0.2, maxY - y + 4.5 - 0.2, 0.7, 1.5 * PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 - 0.5, maxY - y + 3.5 + 0.1);
        glVertex2f(x + 4.5 + 0.2, maxY - y + 3.5 + 0.1);
        glEnd();

        break;
    case WALL_X:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 0.8);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 1.0);
        glEnd();

        Images::drawArc(x + 4.5 + 0.8, maxY - y + 4.5 - 0.2, 0.4, PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.8, maxY - y + 3.5 + 0.4);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.4);
        glEnd();


        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 0.1);
        glVertex2f(x + 4.5 + 1.0, maxY - y + 3.5 + 0.1);
        glEnd();

        Images::drawArc(x + 4.5 + 0.8, maxY - y + 4.5 - 0.2, 0.7, PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.1, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 0.1, maxY - y + 3.5 + 1.0);
        glEnd();

        break;

    case WALL_Y:

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.6, maxY - y + 3.5 + 0.2);
        glEnd();

        Images::drawArc(x + 4.5 + 0.2, maxY - y + 4.5 - 0.8, 0.4, 0, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 0.2, maxY - y + 3.5 + 0.6);
        glEnd();

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.9, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.9, maxY - y + 3.5 + 0.2);
        glEnd();

        Images::drawArc(x + 4.5 + 0.2, maxY - y + 4.5 - 0.8, 0.7, 0, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5, maxY - y + 3.5 + 0.9);
        glVertex2f(x + 4.5 + 0.2, maxY - y + 3.5 + 0.9);
        glEnd();

        break;
    case WALL_Z:
    
        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.4, maxY - y + 3.5 + 0.2);
        glEnd();

        Images::drawArc(x + 4.5 + 0.8, maxY - y + 4.5 - 0.8, 0.4, 0.5 * PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.8, maxY - y + 3.5 + 0.6);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.6);
        glEnd();
    
        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.1, maxY - y + 3.5);
        glVertex2f(x + 4.5 + 0.1, maxY - y + 3.5 + 0.2);
        glEnd();

        Images::drawArc(x + 4.5 + 0.8, maxY - y + 4.5 - 0.8, 0.7, 0.5 * PI, 0.5 * PI, 300);

        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex2f(x + 4.5 + 0.8, maxY - y + 3.5 + 0.9);
        glVertex2f(x + 4.5 + 1, maxY - y + 3.5 + 0.9);
        glEnd();    
    
        break;
    }

    glLineWidth(1.0);
    glPopMatrix();
}