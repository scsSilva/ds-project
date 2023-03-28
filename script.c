#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "./utils/utils.h"
#include <SOIL/SOIL.h>

float angle = 0.0;

void ground_floor()
{
    // CONFIGURAÇÕES INICIAIS
    glClear(GL_COLOR_BUFFER_BIT);

    // TÍTULO
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.9, -0.97);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "PLANTA BAIXA - PAV. TERREO");

    glTranslatef(0.0f, 0.0f, 0.0f);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
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
    glVertex2f(0.58, -0.88);
    glVertex2f(-0.88, -0.88);
    glVertex2f(-0.88, 0.88);
    glVertex2f(0.88, 0.88);
    glVertex2f(0.88, -0.88);
    glVertex2f(0.65, -0.88);
    glEnd();

    // BORDA DO QUADRADO QUE REPRESENTA AS "PAREDES"
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.58, -0.88);
    glVertex2f(-0.88, -0.88);
    glVertex2f(-0.88, 0.88);
    glVertex2f(0.88, 0.88);
    glVertex2f(0.88, -0.88);
    glVertex2f(0.65, -0.88);
    glEnd();

    // SALA DE JOGOS/ARTES
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.28, -0.88);
    glVertex2f(-0.28, -0.28);
    glVertex2f(-0.08, -0.28);
    glVertex2f(-0.08, -0.18);
    glVertex2f(0.88, -0.18);
    glVertex2f(0.88, -0.88);
    glEnd();

    // NOME "SALA DE JOGOS/ARTES"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(0.24, -0.55);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "SALA DE JOGOS/ARTES");

    // BORDA DA SALA DE JOGOS/ARTES
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.28, -0.88);
    glVertex2f(-0.28, -0.28);
    glVertex2f(-0.08, -0.28);
    glVertex2f(-0.08, -0.18);
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
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "SALA DE JANTAR");

    // COZINHA
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.32, -0.28);
    glVertex2f(-0.32, -0.26);
    glVertex2f(-0.1, -0.26);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.4, 0.2);
    glVertex2f(-0.4, 0.26);
    glVertex2f(-0.58, 0.26);
    glVertex2f(-0.58, 0.2);
    glVertex2f(-0.88, 0.2);
    glVertex2f(-0.88, -0.26);
    glVertex2f(-0.58, -0.26);
    glVertex2f(-0.58, -0.28);
    glEnd();

    // BORDA DA COZINHA
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.32, -0.28);
    glVertex2f(-0.32, -0.26);
    glVertex2f(-0.1, -0.26);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.4, 0.2);
    glVertex2f(-0.4, 0.26);
    glVertex2f(-0.58, 0.26);
    glVertex2f(-0.58, 0.2);
    glVertex2f(-0.88, 0.2);
    glVertex2f(-0.88, -0.26);
    glVertex2f(-0.58, -0.26);
    glVertex2f(-0.58, -0.28);
    glEnd();

    // NOME "COZINHA"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.58, -0.05);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "COZINHA");

    // ÁREA DE SERVIÇO
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.38, 0.24);
    glVertex2f(-0.38, 0.88);
    glVertex2f(-0.88, 0.88);
    glVertex2f(-0.88, 0.24);
    glEnd();

    // BORDA DA ÁREA DE SERVIÇO
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.38, 0.24);
    glVertex2f(-0.38, 0.88);
    glVertex2f(-0.88, 0.88);
    glVertex2f(-0.88, 0.24);
    glEnd();

    // NOME "ÁREA DE SERVIÇO"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.78, 0.6);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "AREA DE SERVICO");

    // SALA DE ESTAR
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.08, 0.84);
    glVertex2f(-0.08, 0.88);
    glVertex2f(0.88, 0.88);
    glVertex2f(0.88, -0.18);
    glVertex2f(-0.08, -0.18);
    glVertex2f(-0.08, 0.6);
    glEnd();

    // BORDA DA SALA DE ESTAR
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.08, 0.84);
    glVertex2f(-0.08, 0.88);
    glVertex2f(0.88, 0.88);
    glVertex2f(0.88, -0.18);
    glVertex2f(-0.08, -0.18);
    glVertex2f(-0.08, 0.6);
    glEnd();

    // NOME "SALA DE ESTAR"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(0.25, 0.35);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "SALA DE ESTAR");

    // BANHEIRO SOCIAL
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.08, 0.6);
    glVertex2f(-0.1, 0.6);
    glVertex2f(-0.1, 0.22);
    glVertex2f(-0.36, 0.22);
    glVertex2f(-0.36, 0.88);
    glVertex2f(-0.1, 0.88);
    glVertex2f(-0.1, 0.84);
    glVertex2f(-0.08, 0.84);
    glEnd();

    // BORDA DO BANHEIRO SOCIAL
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.08, 0.6);
    glVertex2f(-0.1, 0.6);
    glVertex2f(-0.1, 0.22);
    glVertex2f(-0.36, 0.22);
    glVertex2f(-0.36, 0.88);
    glVertex2f(-0.1, 0.88);
    glVertex2f(-0.1, 0.84);
    glVertex2f(-0.08, 0.84);
    glEnd();

    // NOME "SALA DE ESTAR"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.3, 0.55);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "B. SOCIAL");

    drawSpiralStairs(0.7, 0.7);
    Point p1;
    p1.x = 0.0;
    p1.y = 0.89;
    Point p2;
    p2.x = -1.0;
    p2.y = 0.89;
    Point p3;
    p3.x = -0.89;
    p3.y = -0.4;
    Point p4;
    p4.x = -0.89;
    p4.y = -0.95;
    Point p8;
    p8.x = 0.89;
    p8.y = -0.85;

    drawWindow(&p1, 0.3, 1, 0.3);
    drawWindow(&p2, 0.15, 1, 0.3);
    drawWindow(&p3, 0.22, 0, 0.3);
    drawWindow(&p4, 0.22, 0, 0.3);
    drawWindow(&p8, 0.22, 0, 0.3);

    Point p5;
    p5.x = -0.089;
    p5.y = 0.6;
    Point p6;
    p6.x = -0.52;
    p6.y = 0.22;
    Point p7;
    p7.x = 0.5;
    p7.y = -0.9;
    drawDoorSliding(&p5, 0.24, 0, 0.0);
    drawDoorSliding(&p6, 0.18, 1, -0.06);
    draw_door(&p7, 0.15, 1);

    glFlush();
}

void first_floor()
{
    // CONFIGURAÇÕES INICIAIS
    glClear(GL_COLOR_BUFFER_BIT);

    // TÍTULO
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.88, -0.97);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "PLANTA BAIXA - PAV. SUPERIOR");

    glColor3f(1.0f, 1.0f, 1.0f); // Branco
    glBegin(GL_QUADS);
    glVertex2f(-0.9, -0.9);
    glVertex2f(-0.9, 0.9);
    glVertex2f(0.9, 0.9);
    glVertex2f(0.9, -0.9);
    glEnd();

    glTranslatef(0.0f, 0.0f, 0.0f);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);

    // Desenha o quadrado após a rotação
    glColor3f(1.0f, 1.0f, 1.0f); // Vermelho
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

    // SACADA
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.88, -0.88);
    glVertex2f(-0.88, -0.58);
    glVertex2f(0.88, -0.58);
    glVertex2f(0.88, -0.88);
    glEnd();

    // BORDA DA SACADA
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.88, -0.88);
    glVertex2f(-0.88, -0.58);
    glVertex2f(0.88, -0.58);
    glVertex2f(0.88, -0.88);
    glEnd();

    // NOME "SALA DE LEITURA"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.1, -0.73);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "SACADA");

    // SALA DE LEITURA
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.3, 0);
    glVertex2f(-0.18, 0);
    glVertex2f(-0.18, -0.58);
    glVertex2f(-0.88, -0.58);
    glVertex2f(-0.88, 0.3);
    glVertex2f(0.3, 0.3);
    glVertex2f(0.3, 0.32);
    glVertex2f(-0.88, 0.32);
    glEnd();

    // BORDA DA SALA DE LEITURA
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.3, 0);
    glVertex2f(-0.18, 0);
    glVertex2f(-0.18, -0.58);
    glVertex2f(-0.88, -0.58);
    glVertex2f(-0.88, 0.3);
    glVertex2f(0.3, 0.3);
    glVertex2f(0.3, 0.32);
    glVertex2f(0.3, 0.32);
    glVertex2f(-0.88, 0.32);
    glEnd();

    // NOME "SALA DE JANTAR"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.6, -0.28);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "SALA DE LEITURA");

    // WCB 1
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.88, 0.7);
    glVertex2f(-0.6, 0.7);
    glVertex2f(-0.6, 0.5);
    glVertex2f(-0.58, 0.5);
    glVertex2f(-0.58, 0.72);
    glVertex2f(-0.88, 0.72);
    glEnd();

    // BORDA - WCB 1
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.88, 0.7);
    glVertex2f(-0.6, 0.7);
    glVertex2f(-0.6, 0.5);
    glVertex2f(-0.58, 0.5);
    glVertex2f(-0.58, 0.72);
    glVertex2f(-0.88, 0.72);
    glEnd();

    // NOME "WCB 1"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.8, 0.5);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "WCB 1");

    // CLOSET & SUÍTE
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.88, 0.72);
    glVertex2f(-0.88, 0.88);
    glVertex2f(-0.4, 0.88);
    glVertex2f(-0.4, 0.7);
    glVertex2f(-0.38, 0.7);
    glVertex2f(-0.38, 0.88);
    glVertex2f(-0.1, 0.88);
    glVertex2f(-0.1, 0.32);
    glVertex2f(-0.58, 0.32);
    glEnd();

    // BORDA - CLOSET & SUÍTE
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.88, 0.72);
    glVertex2f(-0.88, 0.88);
    glVertex2f(-0.4, 0.88);
    glVertex2f(-0.4, 0.7);
    glVertex2f(-0.38, 0.7);
    glVertex2f(-0.38, 0.88);
    glVertex2f(-0.1, 0.88);
    glVertex2f(-0.1, 0.32);
    glVertex2f(-0.58, 0.32);
    glEnd();

    // NOME "CLOSET"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.7, 0.8);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "CLOSET");

    // NOME "SUITE"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.3, 0.4);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "SUITE");

    // ESCRITÓRIO
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.3, 0.32);
    glVertex2f(0.3, 0.52);
    glVertex2f(0.28, 0.52);
    glVertex2f(0.28, 0.32);
    glVertex2f(-0.08, 0.32);
    glVertex2f(-0.08, 0.6);
    glVertex2f(0.3, 0.6);
    // glVertex2f(-0.08, 0.62);
    glEnd();

    // BORDA - ESCRITÓRIO
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.3, 0.32);
    glVertex2f(0.3, 0.52);
    glVertex2f(0.28, 0.52);
    glVertex2f(0.28, 0.32);
    glVertex2f(-0.08, 0.32);
    glVertex2f(-0.08, 0.6);
    glVertex2f(0.3, 0.6);
    glEnd();

    // NOME "ESCRITÓRIO"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.06, 0.4);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "ESCRITORIO");

    // SALA DE ESTUDOS
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.3, 0.6);
    glVertex2f(0.3, 0.62);
    glVertex2f(-0.08, 0.62);
    glVertex2f(-0.08, 0.88);
    glVertex2f(0.3, 0.88);
    glVertex2f(0.3, 0.7);
    glVertex2f(0.28, 0.7);
    glVertex2f(0.28, 0.88);
    glEnd();

    // BORDA - SALA DE ESTUDOS
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.3, 0.6);
    glVertex2f(0.3, 0.62);
    glVertex2f(-0.08, 0.62);
    glVertex2f(-0.08, 0.88);
    glVertex2f(0.3, 0.88);
    glVertex2f(0.3, 0.7);
    glVertex2f(0.28, 0.7);
    glVertex2f(0.28, 0.88);
    glEnd();

    // NOME "SALA DE ESTUDOS"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(0, 0.65);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "SALA DE ESTUDOS");

    // CLOSET - SUITE - WCB 1
    glColor3f(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.3, 0);
    glVertex2f(0.3, -0.02);
    glVertex2f(-0.16, -0.02);
    glVertex2f(-0.16, -0.58);
    glVertex2f(0.88, -0.58);
    glVertex2f(0.88, -0.02);
    glVertex2f(0.5, -0.02);
    glVertex2f(0.5, 0);
    glVertex2f(0.88, 0);
    glEnd();

    // BORDA (CLOSET - SUITE - WCB 1)
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.3, 0);
    glVertex2f(0.3, -0.02);
    glVertex2f(-0.16, -0.02);
    glVertex2f(-0.16, -0.58);
    glVertex2f(0.88, -0.58);
    glVertex2f(0.88, -0.02);
    glVertex2f(0.5, -0.02);
    glVertex2f(0.5, 0);
    glVertex2f(0.88, 0);
    glEnd();

    // CLOSET
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.1, -0.02);
    glVertex2f(0.1, -0.58);
    glEnd();

    // NOME "CLOSET"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.1, -0.3);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "CLOSET");

    // SUITE
    glLineWidth(1.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.6, -0.02);
    glVertex2f(0.6, -0.58);
    glEnd();

    // NOME "SUITE"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(0.3, -0.3);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "SUITE");

    // NOME "WCB 1"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(0.7, -0.3);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "WCB 1");
    drawSpiralStairs(0.7, 0.7);
    Point p;
    p.x = 0.3;
    p.y = -0.02;
    Point p2;
    p2.x = 0.30;
    p2.y = 0.52;
    Point p3;
    p3.x = 0.30;
    p3.y = 0.62;
    Point p4;
    p4.x = -0.3;
    p4.y = 0.3;
    Point p5;
    p5.x = 0.3;
    p5.y = 0.89;
    Point p6;
    p6.x = -0.3;
    p6.y = 0.89;
    Point p7;
    p7.x = -0.6;
    p7.y = 0.89;

    Point p8;
    p8.x = 0.89;
    p8.y = -0.6;
    draw_door(&p, 0.2, 1);
    draw_door(&p2, 0.08, 0);
    draw_door(&p3, 0.08, 0);
    draw_door(&p4, 0.08, 0);
    drawWindow(&p5, 0.15, 1, 0.3);
    drawWindow(&p6, 0.15, 1, 0.3);
    drawWindow(&p7, 0.15, 1, 0.3);
    drawWindow(&p8, 0.15, 0, 0.3);

    glutSwapBuffers();
    glFlush();
}

void scan(char *orientacao)
{
    if (strcmp(orientacao, "leste") == 0)
        angle = 270;
    else if (strcmp(orientacao, "sul") == 0)
        angle = 180;
    else if (strcmp(orientacao, "oeste") == 0)
        angle = 90;
    else
        angle = 0;
}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-orientacao") == 0)
        {
            if (i + 1 < argc)
            {
                scan(argv[i + 1]);
                break;
            }
        }
    }

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1100, 800);

    glutCreateWindow("Terreo");
    glClearColor(255, 255, 255, 1.0);
    glutDisplayFunc(ground_floor);

    glutCreateWindow("Primeiro andar");
    glClearColor(255, 255, 255, 1.0);
    glutDisplayFunc(first_floor);

    glutMainLoop();
    return 0;
}