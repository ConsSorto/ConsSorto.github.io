#include <stdio.h>
long factorial(int n); // Prototipo

int main() {
    int numero = 5;
    printf("El factorial de %d es: %ld\n", numero, factorial(numero));
    return 0;
}

long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base
    } 
    else {
        return n * factorial(n - 1); // Componente recursivo
    }
}