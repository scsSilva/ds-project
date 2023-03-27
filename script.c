#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "./utils/utils.h"
#include <SOIL/SOIL.h>

int screen = 0;
float angle = 0.0;
int north_pressed = 0;
int south_pressed = 0;
int east_pressed = 0;
int west_pressed = 0;
int keys[256];

void ground_floor()
{

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

    // TÍTULO
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.9, -0.97);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "PLANTA BAIXA - PAV. TERREO");

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

    Point p;
    p.x = -0.58f;
    p.y = 0.0f;
    // draw_door(&p, 0.25);

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

    drawSpiralStairs(0.7, 0.7);

    glFlush();
}

void update(int value)
{
    if (keys['n'])
    {
        angle = 0;
    }
    if (keys['l'])
    {
        angle = -90;
    }
    if (keys['s'])
    {
        angle = 180;
    }
    if (keys['o'])
    {
        angle = 90;
    }
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

void first_floor()
{
    printf("ANGLE = %lf\n", angle);
    glutTimerFunc(10, update, 0);

    // CONFIGURAÇÕES INICIAIS
    glClear(GL_COLOR_BUFFER_BIT);
    glEnable(GL_TEXTURE_2D);

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

    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.88, -0.97);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "PLANTA BAIXA - PAV. SUPERIOR");

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
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "SACADA");

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
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "SALA DE LEITURA");

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
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "WCB 1");

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
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "CLOSET");

    // NOME "SUITE"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(-0.3, 0.4);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "SUITE");

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
    glRasterPos2f(0, 0.35);
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
    glutBitmapString(GLUT_BITMAP_HELVETICA_18, "SUITE");

    // NOME "WCB 1"
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(0.7, -0.3);
    glutBitmapString(GLUT_BITMAP_HELVETICA_12, "WCB 1");
    drawSpiralStairs(0.7, 0.7);


    glutSwapBuffers();
    glFlush();
}

void scan(unsigned char key, int x, int y)
{
    keys[key] = 1;
    switch (key)
    {
    case 'n':
        if (angle != 0)
        {
            angle = 0;
            glutPostRedisplay();
            printf("TECLA %c PRESSIONADA. ANGULO = %lf\n", key, angle);
        }

        break;
    case 'l':
        if (angle != -90)
        {
            angle = -90;
            glutPostRedisplay();
            printf("TECLA %c PRESSIONADA. ANGULO = %lf\n", key, angle);
        }

        break;
    case 's':
        if (angle != 180)
        {
            angle = 180;
            glutPostRedisplay();
            printf("TECLA %c PRESSIONADA. ANGULO = %lf\n", key, angle);
        }

        break;
    case 'o':
        if (angle != 90)
        {
            angle = 90;
            glutPostRedisplay();
            printf("TECLA %c PRESSIONADA. ANGULO = %lf\n", key, angle);
        }

        break;
    default:
        break;
    }
}

void keyup(unsigned char key, int x, int y)
{
    keys[key] = 0;
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1100, 800);

    glutCreateWindow("Terreo");
    glutDisplayFunc(ground_floor);
    glClearColor(255, 255, 255, 1.0);

    glutCreateWindow("Primeiro andar");
    glClearColor(255, 255, 255, 1.0);
    glutDisplayFunc(first_floor);
    glutKeyboardFunc(scan);
    glutKeyboardUpFunc(keyup);

    glutMainLoop();
    return 0;
}
