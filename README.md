*Este proyecto ha sido creado como parte del currículo de 42 por davgarc4.*


# Descripcion

`ft_printf` es una reimplementación personalizada de la función `printf()` de la biblioteca estándar de C. Su objetivo principal es profundizar en el funcionamiento de las funciones variádicas, así como en la gestión de conversiones de formato y el manejo eficiente de la memoria.

Este proyecto consiste en desarrollar una biblioteca propia que replica el comportamiento de `printf()`, implementando las conversiones más utilizadas (como caracteres, cadenas, enteros, hexadecimal, punteros, entre otras) y devolviendo el número total de caracteres impresos, tal como lo hace la función original.

A través de este ejercicio, se refuerzan conceptos fundamentales como el procesamiento de argumentos variables (`va_list`), la manipulación de cadenas, el control del flujo de salida y la estructuración modular del código.

## 📁 Contenido del repositorio

El repositorio contiene:

- `Makefile`
- `ft_printf.h`
- Archivos `.c` con la implementación de todas las funciones

## 🛠️ Intrucciones

Para compilar la librería:

`make`

### Comandos disponibles

- `make` o `make all` - Compila la librería
- `make clean` - Elimina los archivos objeto (.o)
- `make fclean` - Elimina los archivos objeto y la librería
- `make re` - Recompila completamente el proyecto

### Uso

1. Incluye el header en tu código:

```c
#include "ft_printf.h"
```

## 📚 Funciones incluidas

La función ft_printf soporta las siguientes conversiones:

- `%c` - Imprime un carácter
- `%s` - Imprime una cadena de caracteres
- `%p` - Imprime un puntero en formato hexadecimal
- `%d` - Imprime un número decimal (base 10)
- `%i` - Imprime un entero en base 10
- `%u` - Imprime un número decimal sin signo
- `%x` - Imprime un número hexadecimal en minúsculas
- `%X` - Imprime un número hexadecimal en mayúsculas
- `%%` - Imprime el símbolo de porcentaje


## Recursos

 Documentación 
- [Manual de C (man pages)](https://linux.die.net/man/)
- [Documentacion IBM](https://www.ibm.com/docs/es/)

#### Uso de IA

La funcion principal en la que se ha utilizado ha sido para la documentacion y compresion del proyecto.


## 👤 Autor

**David Garcia Solis**  
Proyecto `ft_printf`