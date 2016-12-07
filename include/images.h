#pragma once

#include "glut_header.h"
#include "math.h"

#define PI 3.1415926f

class Images
{
public:
    Images();
    ~Images();

    static void drawArc(float cx, float cy, float r, float start_angle, float arc_angle, int num_segments);

};

