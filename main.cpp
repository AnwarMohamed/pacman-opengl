#include <iostream>
#include <string>
#include "maze.h"

using namespace std;

Maze* maze;

void displayFunc(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    maze->draw();
    glFlush();
}

void keyFunc(int key, int x, int y)
{
    maze->onMove(key, x, y);
    glutPostRedisplay();
}

void updateFunc(int value)
{
    maze->update();
    glutPostRedisplay();
    glutTimerFunc(value, updateFunc, value);
}

int main(int argc, char** argv)
{
    maze = new Maze();

    if (!maze->load("../maze.txt"))
        goto cleanup;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(560, 720);
    glutCreateWindow("Pacman ");

    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(4.5, 32.5, 4.5, 40.5);

    glutDisplayFunc(displayFunc);
    glutSpecialFunc(keyFunc);
    glutTimerFunc(120, updateFunc, 120);

    glutMainLoop();

cleanup:
    delete maze;
    return 0;
}