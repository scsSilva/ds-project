// Silenciando as notificações de obsolescência da biblioteca OpenNGL no MacOS
#ifndef UTILS_H
#define UTILS_H

#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#include <OpenGL/glu.h>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#endif

typedef struct
{
    GLfloat x;
    GLfloat y;
} Point;

void draw_door(Point *p, float raio, int mirror);
void drawSpiralStairs(float x, float y);
void drawWindow(Point *position, float size, int horientation, float moving);
void drawDoorSliding(Point *position, float size, int horientation, float moving);

#endif
