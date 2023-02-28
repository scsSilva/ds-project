#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <stdio.h>
#include <string.h>

void text(char text[], double x, double y) {
    int len = strlen(text);
    int xPos = 400 * (x + 1);
    int yPos = 300 * (y + 1);

    printf("xPos = %d - yPos = %d\n", xPos, yPos);

    glColor3f(0,0,0);

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();

    gluOrtho2D(0, 730, 0, 620);

    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();

    glLoadIdentity();

    glRasterPos2i(xPos, yPos);

    for ( int i = 0; i < len; ++i )
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    glPopMatrix();

    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
}

void setup() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.75f,0.75f, 0.75f, -0.75f);
    text("Patio", -0.75, 0.75);

    // COZINHA
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.35f,0.75f, 0.1f, 0.35f);
    text("Cozinha", -0.35, 0.75);

    // BANHEIRO
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(0.1f,0.75f, 0.4f, 0.35f);
    text("Banheiro", 0.1, 0.75);

    // QUARTO
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(0.4f,0.75f, 0.75f, -0.1f);
    text("Quarto", 0.4, 0.75);

    // SALA
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.35f,-0.75f, 0.25f, -0.1f);
    text("Sala", -0.35, -0.7);

    // QUARTO
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(0.25f,-0.75f, 0.75f, -0.1f);
    text("Quarto", 0.25, -0.7);

    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize(800,600);
    glutCreateWindow("AutoCad Em C");

    setup();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}