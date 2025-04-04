#include <stdio.h>
// USAR PUNTEROS!
int cuadrado(int num);
void cuadradoNum(int num);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main() {
    int num;

    printf("Ingrese cualquier numero: ");
    scanf("%i", &num);

    printf("El cuadrado de %i es: %i\n", num, cuadrado(num));

    cuadradoNum(num);

    printf("La direccion de memoria de la variable 'num' es: %p\n", &num);
    printf("El contenido de la variable 'num' es: %i\n", num);

    int a, b;

    printf("Ingrese dos numeros: ");
    scanf("%i", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &b);

    invertir(&a, &b);
    printf("Los numeros fueron invertidos: a -> %i, b -> %i\n", a, b);

    orden(&a, &b);
    printf("Ordenados, ahora con a -> %i y b -> %i", a, b);

    return 0;
}

int cuadrado(int num) {
    int resultado = 0;
    for (int i = 0; i < num; i++) {
        resultado = resultado + num;
    }

    return resultado;
}

void cuadradoNum(int num) {
    printf("El cuadrado del numero %i es: %i\n", num, num * num);
}

void invertir(int *a, int *b) {
    int temp;

    printf("Los numeros %i y %i seran invertidos\n", *a, *b);

    temp = *a;
    *a = *b;
    *b = temp;
}

void orden(int *a, int *b) {
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}