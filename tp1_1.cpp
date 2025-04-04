#include <stdio.h>

int main() {
    printf("Hola mundo.\n");

    int num = 5;
    int *dir_num;
    dir_num = &num;

    printf("Contenido del puntero: %i\n", *dir_num);
    printf("La direccion de memoria almacenada por el puntero: %p\n", dir_num);
    printf("La direccion de memoria de la variable: %p\n", &num);
    printf("Direccion de memoria del puntero: %p\n", &dir_num);
    printf("Tamanio de memoria de num (variable tipo entera): %i\n", sizeof(num));

    return 0;
}