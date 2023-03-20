#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

void display() {
    // CONFIGURAÇÕES INICIAIS
    glClear(GL_COLOR_BUFFER_BIT);

    // TERRENO QUADRADO
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.9, -0.9);
    glVertex2f(-0.9, 0.9);
    glVertex2f(0.9, 0.9);
    glVertex2f(0.9, -0.9);
    glEnd();

    // BORDA DO TERRENO
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.9, -0.9);
    glVertex2f(-0.9, 0.9);
    glVertex2f(0.9, 0.9);
    glVertex2f(0.9, -0.9);
    glEnd();

    // "PAREDES"
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.88, -0.88);
    glVertex2f(-0.88, 0.88);
    glVertex2f(0.88, 0.88);
    glVertex2f(0.88, -0.88);
    glEnd();

    // BORDA DO QUADRADO QUE REPRESENTA AS "PAREDES"
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.88, -0.88);
    glVertex2f(-0.88, 0.88);
    glVertex2f(0.88, 0.88);
    glVertex2f(0.88, -0.88);
    glEnd();

    // SALA DE JOGOS/ARTES
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.28, -0.88);
    glVertex2f(-0.28, -0.28);
    glVertex2f(-0.05, -0.28);
    glVertex2f(-0.05, -0.18);
    glVertex2f(0.88, -0.18);
    glVertex2f(0.88, -0.88);
    glEnd();

    // MEDIDA
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(0.44, -0.16);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "5,35");

    // NOME "SALA DE JOGOS/ARTES"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(0.24, -0.55);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "SALA DE JOGOS/ARTES");

    // BORDA DA SALA DE JOGOS/ARTES
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.28, -0.88);
    glVertex2f(-0.28, -0.28);
    glVertex2f(-0.05, -0.28);
    glVertex2f(-0.05, -0.18);
    glVertex2f(0.88, -0.18);
    glVertex2f(0.88, -0.88);
    glEnd();

    // SALA DE JANTAR
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.58, -0.28);
    glVertex2f(-0.88, -0.28);
    glVertex2f(-0.88, -0.88);
    glVertex2f(-0.28, -0.88);
    glVertex2f(-0.28, -0.28);
    glVertex2f(-0.32, -0.28);
    glEnd();

    // BORDA DA SALA DE JANTAR
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.58, -0.28);
    glVertex2f(-0.88, -0.28);
    glVertex2f(-0.88, -0.88);
    glVertex2f(-0.28, -0.88);
    glVertex2f(-0.28, -0.28);
    glVertex2f(-0.32, -0.28);
    glEnd();

    // NOME "SALA DE JANTAR"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.7, -0.55);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "SALA DE JANTAR");

    // MEDIDA
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.35, -0.55);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "3,50");

    // COZINHA
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.32, -0.28);
    glVertex2f(-0.32, -0.24);
    glVertex2f(-0.1, -0.24);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.4, 0.2);
    glVertex2f(-0.4, 0.24);
    glVertex2f(-0.58, 0.24);
    glVertex2f(-0.58, 0.2);
    glVertex2f(-0.88, 0.2);
    glVertex2f(-0.88, -0.24);
    glVertex2f(-0.58, -0.24);
    glVertex2f(-0.58, -0.28);
    glEnd();

    // BORDA DA COZINHA
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.32, -0.28);
    glVertex2f(-0.32, -0.24);
    glVertex2f(-0.1, -0.24);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.4, 0.2);
    glVertex2f(-0.4, 0.24);
    glVertex2f(-0.58, 0.24);
    glVertex2f(-0.58, 0.2);
    glVertex2f(-0.88, 0.2);
    glVertex2f(-0.88, -0.24);
    glVertex2f(-0.58, -0.24);
    glVertex2f(-0.58, -0.28);
    glEnd();

    // NOME "COZINHA"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.58, -0.05);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "COZINHA");

    // ÁREA DE SERVIÇO
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.4, 0.24);
    glVertex2f(-0.4, 0.88);
    glVertex2f(-0.88, 0.88);
    glVertex2f(-0.88, 0.24);
    glEnd();

    // BORDA DA ÁREA DE SERVIÇO
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.4, 0.24);
    glVertex2f(-0.4, 0.88);
    glVertex2f(-0.88, 0.88);
    glVertex2f(-0.88, 0.24);
    glEnd();

    // NOME "ÁREA DE SERVIÇO"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.78, 0.6);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "AREA DE SERVICO");

    // SALA DE ESTAR
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.05, 0.84);
    glVertex2f(-0.05, 0.88);
    glVertex2f(0.88, 0.88);
    glVertex2f(0.88, -0.18);
    glVertex2f(-0.05, -0.18);
    glVertex2f(-0.05, 0.6);
    glEnd();

    // BORDA DA SALA DE ESTAR
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.05, 0.84);
    glVertex2f(-0.05, 0.88);
    glVertex2f(0.88, 0.88);
    glVertex2f(0.88, -0.18);
    glVertex2f(-0.05, -0.18);
    glVertex2f(-0.05, 0.6);
    glEnd();

    // NOME "SALA DE ESTAR"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(0.25, 0.35);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "SALA DE ESTAR");

    // BANHEIRO SOCIAL
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.05, 0.6);
    glVertex2f(-0.1, 0.6);
    glVertex2f(-0.1, 0.24);
    glVertex2f(-0.36, 0.24);
    glVertex2f(-0.36, 0.88);
    glVertex2f(-0.1, 0.88);
    glVertex2f(-0.1, 0.84);
    glVertex2f(-0.05, 0.84);
    glEnd();



    // BORDA DO BANHEIRO SOCIAL
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.05, 0.6);
    glVertex2f(-0.1, 0.6);
    glVertex2f(-0.1, 0.24);
    glVertex2f(-0.36, 0.24);
    glVertex2f(-0.36, 0.88);
    glVertex2f(-0.1, 0.88);
    glVertex2f(-0.1, 0.84);
    glVertex2f(-0.05, 0.84);
    glEnd();

    // NOME "SALA DE ESTAR"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.3, 0.55);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "B. SOCIAL");

    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1100, 800);
    glutCreateWindow("Planta baixa em C");
    glutDisplayFunc(display);
    glClearColor(255, 255, 255, 1.0);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glutMainLoop();

    return 0;
}