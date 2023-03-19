#include "utils.h"
#include <GL/glut.h> // Inclui a biblioteca GLUT, utilizada para criar a janela e o contexto OpenGL
#include <GL/gl.h>
#include <math.h>
#include <stdio.h>
#define M_PI 3.14159265358979323846 /* pi */

void draw_square_by_area(double area, Point *p)
{
    double width = sqrt(area) / 100;
    glLineWidth(100.0);
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_LINES);
    glVertex2f(p->x, p->y);
    glVertex2f(width, p->y);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(width, p->y);
    glVertex2f(width, width);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(width, width);
    glVertex2f(p->x, width);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(p->x, width);
    glVertex2f(p->x, p->y);
    glEnd();
}

void draw_door(Point *position)
{
    float raio = 0.1;
    float x = -0.6f, y = -0.7f;
    float anguloInicial = 0.0, anguloFinal = 90.0;
    float angulo;

    glColor4f(0.8, 0.8, 0.8, 0.7);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(position->x, position->y);
    for (angulo = anguloInicial; angulo <= anguloFinal; angulo += 1.0)
    {
        glVertex2f(position->x + (raio * cos(angulo * M_PI / 180.0)), position->y + (raio * sin(angulo * M_PI / 180.0)));
    }
    glEnd();

    glEnd();
}
