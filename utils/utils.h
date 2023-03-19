#ifndef UTILS_H
#define UTILS_H
#include <GL/glut.h> // Inclui a biblioteca GLUT, utilizada para criar a janela e o contexto OpenGL
#include <GL/gl.h>

typedef struct
{
    GLfloat x;
    GLfloat y;
} Point;

void draw_square_by_area(double area, Point* p);

#endif
