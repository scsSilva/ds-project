## INSTALAÇÃO DAS LIBS (LINUX)

```
sudo apt install -y mesa-common-dev mesa-utils freeglut3-dev libsoil-dev
```

Para ver se a instalação foi concluída com sucesso, execute:

```
glxgears &
```

## RODAR A APLICAÇÃO (LINUX)
 
```
gcc main.c -o trabalho_ab1 -lglut -lGLU -lG -lSOIL
```

<br>

## INSTALAÇÃO DAS LIBS (MACOS)

```
defaults write org.macosforge.xquartz.X11 enable_iglx -bool true
```
