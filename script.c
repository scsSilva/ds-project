#include <SOIL/SOIL.h> // Inclui a biblioteca SOIL, utilizada para carregar a textura
#include <GL/glut.h> // Inclui a biblioteca GLUT, utilizada para criar a janela e o contexto OpenGL

GLuint texture1, texture2, texture3; // Variável para armazenar o ID da textura

void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Limpa o buffer de cores
    glEnable(GL_TEXTURE_2D); // Habilita o uso de texturas
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glBindTexture(GL_TEXTURE_2D, texture1); // Seleciona a textura a ser utilizada
    glBegin(GL_QUADS); // Inicia o desenho de um quadrado
    glTexCoord2f(0, 0); glVertex2f(-1, -1); // Define a coordenada de textura e de vértice do primeiro vértice do quadrado
    glTexCoord2f(1, 0); glVertex2f(1, -1); // Define a coordenada de textura e de vértice do segundo vértice do quadrado
    glTexCoord2f(1, 1); glVertex2f(1, 1); // Define a coordenada de textura e de vértice do terceiro vértice do quadrado
    glTexCoord2f(0, 1); glVertex2f(-1, 1); // Define a coordenada de textura e de vértice do quarto vértice do quadrado
    glEnd(); // Finaliza o desenho do quadrado

    glBindTexture(GL_TEXTURE_2D, texture2);
    glBegin(GL_QUADS);
    glTexCoord2f(0, 0); glVertex2f(-0.75f, 0.75f); // Define a coordenada de textura e de vértice do primeiro vértice do quadrado
    glTexCoord2f(1, 0); glVertex2f(0.75f, 0.75f); // Define a coordenada de textura e de vértice do segundo vértice do quadrado
    glTexCoord2f(1, 1); glVertex2f(0.75f, -0.75f); // Define a coordenada de textura e de vértice do terceiro vértice do quadrado
    glTexCoord2f(0, 1); glVertex2f(-0.75f, -0.75f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, texture3);
    glBegin(GL_QUADS);
    glTexCoord2f(0, 0); glVertex2f(-0.75f, 0.55f); // Define a coordenada de textura e de vértice do primeiro vértice do quadrado
    glTexCoord2f(1, 0); glVertex2f(-0.35f, 0.55f); // Define a coordenada de textura e de vértice do segundo vértice do quadrado
    glTexCoord2f(1, 1); glVertex2f(-0.35f, 0.15f); // Define a coordenada de textura e de vértice do terceiro vértice do quadrado
    glTexCoord2f(0, 1); glVertex2f(-0.75f, 0.15f);
    glEnd();

    glLineWidth(4.0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.75f, 0.75f);
    glVertex2f(0.75f, 0.75f);
    glVertex2f(0.75f, -0.75f);
    glVertex2f(-0.75f, -0.75f);
    glEnd();

    // BANHEIRO
    

    glFlush(); // Renderiza o buffer de comandos na tela
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Define a cor de fundo da janela como branco

    texture1 = SOIL_load_OGL_texture(
        "images/texture2.jpg", // Nome do arquivo de textura
        SOIL_LOAD_AUTO, // Opções de carregamento automático
        SOIL_CREATE_NEW_ID, // Cria um novo ID para a textura
        SOIL_FLAG_INVERT_Y // Inverte a orientação vertical da textura
    );

    texture2 = SOIL_load_OGL_texture(
        "images/texture.jpg", // Nome do arquivo de textura
        SOIL_LOAD_AUTO, // Opções de carregamento automático
        SOIL_CREATE_NEW_ID, // Cria um novo ID para a textura
        SOIL_FLAG_INVERT_Y // Inverte a orientação vertical da textura
    );

    texture3 = SOIL_load_OGL_texture(
        "images/img.jpeg", // Nome do arquivo de textura
        SOIL_LOAD_AUTO, // Opções de carregamento automático
        SOIL_CREATE_NEW_ID, // Cria um novo ID para a textura
        SOIL_FLAG_INVERT_Y // Inverte a orientação vertical da textura
    );
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Inicializa o GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Define o modo de exibição como single buffer e RGB
    glutInitWindowSize(800, 1000); // Define o tamanho da janela
    glutInitWindowPosition(600, 300); // Define a posição da janela na tela
    glutCreateWindow("Planta Baixa"); // Cria a janela com o título "Texture Demo"

    init(); // Inicializa a cena

    glutDisplayFunc(display); // Define a função de desenho a ser chamada quando a janela for exibida

    glutMainLoop(); // Inicia o loop principal do GLUT
    return 0; // Retorna 0 para indicar que a aplicação foi encerrada com sucesso
}
