# Requisitos 
- version de python: 3.9
- version de G/C ++ : 10.2.1
---
# Descargar proyecto
```
git clone https://github.com/estiven-lg/Proyecto-I.git
```
### programas
- Triple de Pitágoras (C++)
- Juego del ahorcado (C++)
- Triple de Pitágoras (Python)
- Juego del ahorcado (Python)
---
## Triple de Pitágoras (C++)
### crear ejecutable
#### linux
```
$ g++ Triple_de_Pitágoras.cpp -o play 
```
#### windows
```
c++ Triple_de_Pitágoras.cpp -o play.exe
```
## ejecucion
#### linux
```
$ ./play
```
#### windows
```
play.exe
```
## Resultados
se imprimira en consola solo los triangulos que cumplan con las reglas del tripe pitagorico. osease que la suma del cateto adyacente elevado al cuadrado con el cateto opouesto elevado al cuadrado sea igual a la hipotenusa elevado al cuadrado.
##### cuando "C" es la hipotenusa y cumple con " A^2 + B^2 =C^2 "
> los triangulos de * no tienen medidas relativas, no son indicativos , son meramente ilustrarivos
```
output:
    A=10 | B=24 | C=26
    
                  *
                 ***
        A= 10  *******  B=24
             ***********
           ***************
         *******************
                 C=26

    A^2 + B^2 = C^2
    10^2 + 24^2 =26^2
    100 + 576 = 676
    676 = 676
```
##### cuando "B" es la hipotenusa y cumple con "A^2 + C^2 = B^2"  

```
output:
    A=168 | B=170 | C=26
    
              *
              **
       A=170  ***  B=168
              ****
              *****
              ******
               C=26

    A^2 + C^2 = B^2
    168^2 + 26^2 =170^2
    28224 + 676 = 28900
    28900 = 28900
```
##### cuando "A" es la hipotenusa y cumple con "B^2 + C^2 = A^2"  
```
output:
    A=170 | B=168 | C=26

                *
               **
       A=168  ***  B=170
             ****
            *****
           ******
            C=26

    B^2 + C^2 = A^2
    168^2 + 26^2 =170^2
    28224 + 676 = 28900
    28900 = 28900
```
---
## Juego del ahorcado  (C++)
### crear ejecutable
#### linux
```
$ g++ ahorcado.cpp -o play 
```
#### windows
```
c++ ahorcado.cpp -o play.exe
```
## ejecucion
#### linux
```
$ ./play
```
#### windows
```
play.exe
```
### configurar
El juego del ahorcado consiste en advinar una frase. lo primero que nos pedira el programa sera ingresar la frase secreta.
```
output:
    Configure la frase a adivinar:
```
despues de presionar enter , iniciara el juego. se tiene 3 opciones de acertar las letras de la frase. 
```
output:
    Bienvenido al Juego de Ahorcado trate de advinar la frase.

    ---- -----   [***]
    >
```
y una ultima oportunidad de adivinar la frase completa.
```
output:
    has advinado la frase ? , cual es ? 
    :
```
---
## Triple de Pitágoras (Python)
## ejecucion
#### linux
```
$ python3.9 ./Triple_de_Pitágoras.py 
```
#### windows
```
python Triple_de_Pitágoras.py
```
## Resultados
se imprimira en consola solo los triangulos que cumplan con las reglas del tripe pitagorico. osease que la suma del cateto adyacente elevado al cuadrado con el cateto opouesto elevado al cuadrado sea igual a la hipotenusa elevado al cuadrado.
##### cuando "C" es la hipotenusa y cumple con " A^2 + B^2 =C^2 "
> los triangulos de * no tienen medidas relativas, no son indicativos , son meramente ilustrarivos
```
output:
    A= 5  B= 12  C= 13
    
                             
                                 *
                                ***       
                    A=5       *******      B=12
                            ***********
                          ***************
                        *******************
                            
                               C=13
                            
    A^2 + B^2 = C^2
    5 ^2 +  12 ^2 = 13 ^2
    25  +  144  =  169
    169  =  169
```
##### cuando "B" es la hipotenusa y cumple con "A^2 + C^2 = B^2"  

```
output:
A= 84  B= 85  C= 13

                            *
                            ***
                 A=84       *****       B=85
                            *******
                            *********
                            ***********
                            
                                C=13
                            
A^2 + C^2 = B^2
84 ^2 +  13 ^2 = 85 ^2
7056  +  169  =  7225
7225  =  7225
```
##### cuando "A" es la hipotenusa y cumple con "B^2 + C^2 = A^2"  
```
    A= 37  B= 35  C= 12

                                          *
                                        ***
                            A=37      *****       B=35
                                    *******
                                  *********
                                ***********
                            
                                    C=12
                            
    B^2 + C^2 = A^2
    35 ^2 +  12 ^2 = 37 ^2
    1225  +  144  =  1369
    1369  =  1369
```
---
## Juego del ahorcado (Python)
## ejecucion
#### linux
```
$ python3.9 ./ahorcado.py 
```
#### windows
```
python ahorcado.py
```
### configuracion
El juego del ahorcado consiste en advinar una frase. lo primero que nos pedira el programa sera ingresar la frase secreta.
```
output:
    Configure la frase a adivinar
    Escribe la frase: 
```
despues de presionar enter , iniciara el juego. se tiene 3 opciones de acertar las letras de la frase. 
```
output:
    Bienvenido al Juego de Ahorcado trate de advinar la frase.

    ---- -----      [  *  *  *  ]
    > 
```
y una ultima oportunidad de adivinar la frase completa.
```
output:
    has advinado la frase ? , cual es ? 
    :
```