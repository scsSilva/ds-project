#include "utils.h"
#include <GL/glut.h> // Inclui a biblioteca GLUT, utilizada para criar a janela e o contexto OpenGL
#include <GL/gl.h>
#include <math.h>
#include <stdio.h>


void draw_square_by_area(double area, Point *p)
{
    double width = sqrt(area) / 100;
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_LINES);
    glVertex2f(p->x, p->x);
    glVertex2f(width, p->x);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(width, p->x);
    glVertex2f(width, width);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(width, width);
    glVertex2f(p->x, width);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(p->x, width);
    glVertex2f(p->x, p->x);
    glEnd();
}
