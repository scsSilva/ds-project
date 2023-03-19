#include "utils.h"
#include <GL/glut.h> // Inclui a biblioteca GLUT, utilizada para criar a janela e o contexto OpenGL
#include <GL/gl.h>
#include <math.h>
#include <stdio.h>

void draw_square_by_area(double area)
{
    double width = sqrt(area) / 100;

    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_LINES);
    glVertex2f(-0.1, -0.1);
    glVertex2f(width, -0.1);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(width, -0.1);
    glVertex2f(width, width);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(width, width);
    glVertex2f(-0.1, width);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.1, width);
    glVertex2f(-0.1, -0.1);
    glEnd();

}
