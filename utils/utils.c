#include <GL/glut.h> // Inclui a biblioteca GLUT, utilizada para criar a janela e o contexto OpenGL
#include <GL/gl.h>
#include <math.h>
#include <stdio.h>

void draw_square_by_area(double area)
{
    double width = sqrt(area) / 100;
    printf("%.2lf", width);
    glClear(GL_COLOR_BUFFER_BIT);

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

    glFlush();
}

void display()
{
    draw_square_by_area(1243);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);                       // Inicializa o GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Define o modo de exibição como single buffer e RGB
    glutInitWindowSize(1170, 800);               // Define o tamanho da janela
    glutInitWindowPosition(600, 300);            // Define a posição da janela na tela
    glutCreateWindow("Planta Baixa");            // Cria a janela com o título "Texture Demo"

    glutDisplayFunc(display); // Define a função de desenho a ser chamada quando a janela for exibida

    glutMainLoop(); // Inicia o loop principal do GLUT
    return 0;       // Retorna 0 para indicar que a aplicação foi encerrada com sucesso
}