## INSTALAÇÃO DAS LIBS (LINUX)

```
sudo apt install -y mesa-common-dev mesa-utils freeglut3-dev
```

Para ver se a instalação foi concluída com sucesso, execute:

```
glxgears &
```

## RODAR A APLICAÇÃO (LINUX)
 gcc main.c -o trabalho_ab1 -lglut -lGLU -lG
 
```
gcc main.c -o trabalho_ab1 -lglut -lGLU -lGL
./trabalho_ab1
```

<br>

## INSTALAÇÃO DAS LIBS (MACOS)

```
defaults write org.macosforge.xquartz.X11 enable_iglx -bool true
```
