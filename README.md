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
gcc -o planta planta.c -lGL -lglut -lGLU -lSOIL
```

<br>

## INSTALAÇÃO DAS LIBS (MACOS)

```
defaults write org.macosforge.xquartz.X11 enable_iglx -bool true
```

### TESTAR UTILS (LINUX)
```
 gcc utils.c -o executavel -lglut -lGLU -lGL -lm
 ```
