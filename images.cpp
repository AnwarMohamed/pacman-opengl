#include "images.h"

Images::Images()
{
}

Images::~Images()
{
}

void Images::drawArc(float cx, float cy, float r, float start_angle, float arc_angle, int num_segments)
{
    float theta = arc_angle / float(num_segments - 1);
    float tangetial_factor = tanf(theta);
    float radial_factor = cosf(theta);

    float x = r * cosf(start_angle);
    float y = r * sinf(start_angle);

    glBegin(GL_LINE_STRIP);
    for (int ii = 0; ii < num_segments; ii++) {
        glVertex2f(x + cx, y + cy);

        float tx = -y;
        float ty = x;

        x += tx * tangetial_factor;
        y += ty * tangetial_factor;

        x *= radial_factor;
        y *= radial_factor;
    }
    glEnd();
}