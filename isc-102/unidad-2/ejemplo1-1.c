#include <stdio.h>

// Prototipo de la función
int sumar(int a, int b); 

int main() {
    int resultado = sumar(10, 5); // Llamada a la función
    printf("El resultado es: %d", resultado);
    return 0;
}

// Definición de la función
int sumar(int a, int b) {
    return a + b; // Retorno del valor
}