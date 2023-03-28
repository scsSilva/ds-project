// Silenciando as notificações de obsolescência da biblioteca OpenNGL no MacOS
#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#define M_PI 3.14159265358979323846 /* pi */
#endif

#include "utils.h"
#include <math.h>
#include <stdio.h>

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

void draw_door(Point *position, float raio, int mirror)
{
    float anguloInicial = 0.0, anguloFinal = 90.0;
    float angulo;

    glColor4f(1.0, 1.0, 1.0, 0.4);

    // desenha o setor circular preenchido em branco
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(position->x, position->y);
    for (angulo = anguloInicial; angulo <= anguloFinal; angulo += 1.0)
    {
        if (mirror == 1)
        {
            glVertex2f(position->x + (raio * cos(angulo * M_PI / 180.0)), position->y + (raio * sin(angulo * M_PI / 180.0)));
        }
        else
        {
            glVertex2f(position->x + (raio * cos(angulo * M_PI / 180.0) * -1), position->y + (raio * sin(angulo * M_PI / 180.0)));
        }
    }
    glEnd();

    // desenha a borda preta
    glLineWidth(1.0);         // define a largura da linha para 1 pixel
    glColor3f(0.0, 0.0, 0.0); // define a cor para preto
    glBegin(GL_LINE_STRIP);
    for (angulo = anguloInicial; angulo <= anguloFinal; angulo += 1.0)
    {
        if (mirror)
        {
            glVertex2f(position->x + (raio * cos(angulo * M_PI / 180.0)), position->y + (raio * sin(angulo * M_PI / 180.0)));
        }
        else
        {
            glVertex2f(position->x + (raio * cos(angulo * M_PI / 180.0) * -1), position->y + (raio * sin(angulo * M_PI / 180.0)));
        }
    }
    glVertex2f(position->x, position->y); // adiciona o último vértice para fechar a borda
    glEnd();

    // Desenha a linha vertical
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glLineWidth(1.0);
    glColor3f(0.0, 0.0, 0.0);
    if (mirror)
    {
        glBegin(GL_LINES);
        glVertex2f(position->x + 0.008, position->y);
        glVertex2f(position->x + 0.008, position->y + (raio * sin(anguloFinal * M_PI / 180.0)));
        glEnd();
    }
    else
    {
        glBegin(GL_LINES);
        glVertex2f(position->x - 0.008, position->y);
        glVertex2f(position->x - 0.008, position->y + (raio * sin(anguloFinal * M_PI / 180.0)));
        glEnd();
    }
}

void drawDoorSliding(Point *position, float size, int horientation, float moving)
{
    if (horientation)
    {
        glLineWidth(5.0);
        float startX = position->x; // coordenada x da posição inicial da linha horizontal
        float endX = startX + size; // coordenada x da posição final da linha horizontal
        glBegin(GL_LINES);
        glVertex2f(startX + moving, position->y);
        glVertex2f(endX + moving, position->y);
        glEnd();
    }
    else
    {
        glLineWidth(5.0);
        float startY = position->y; // coordenada y da posição inicial da linha vertical
        float endY = startY + size; // coordenada y da posição final da linha vertical
        glBegin(GL_LINES);
        glVertex2f(position->x, startY + moving);
        glVertex2f(position->x, endY + moving);
        glEnd();
    }
}


void drawSpiralStairs(float x, float y)
{
    const float radius = 0.1;
    const int numTriangles = 25;
    const float triangleAngle = (3 * M_PI / 2) / (numTriangles / 2);

    for (int i = 0; i < numTriangles / 2; i++)
    {
        float angle1 = i * triangleAngle;
        float angle2 = (i + 1) * triangleAngle;
        float x1 = x + radius * cos(angle1);
        float y1 = y + radius * sin(angle1);
        float x2 = x + radius * cos(angle2);
        float y2 = y + radius * sin(angle2);
        float xm = x;
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(xm, y);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glEnd();

        glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
        glLineWidth(1.0);
        glColor3f(0.0, 0.0, 0.0);
        glBegin(GL_TRIANGLES);
        glVertex2f(xm, y);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glEnd();
    }
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

void drawWindow(Point *position, float size, int horientation, float moving)
{
    if (horientation)
    {
        glLineWidth(2.0);
        float startX = position->x; // coordenada x da posição inicial da linha horizontal
        float endX = startX + size; // coordenada x da posição final da linha horizontal
        glBegin(GL_LINES);
        glVertex2f(startX + moving, position->y);
        glVertex2f(endX + moving, position->y);

        glVertex2f(startX + moving, position->y - 0.009);
        glVertex2f(startX + moving, position->y + 0.009);

        glVertex2f(endX + moving, position->y - 0.009);
        glVertex2f(endX + moving, position->y + 0.009);
        glEnd();
    }
    else
    {
        glLineWidth(2.0);
        float startY = position->y; // coordenada y da posição inicial da linha vertical
        float endY = startY + size; // coordenada y da posição final da linha vertical
        glBegin(GL_LINES);
        glVertex2f(position->x, startY + moving);
        glVertex2f(position->x, endY + moving);

        glVertex2f(position->x -  0.009, startY + moving);
        glVertex2f(position->x +  0.009, startY + moving);

        glVertex2f(position->x -  0.009, endY + moving);
        glVertex2f(position->x +  0.009, endY + moving);
        glEnd();
    }
}
