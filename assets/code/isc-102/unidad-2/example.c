#include <stdio.h>

int main() {
    int suma = 0;
    for (int i = 2; i <= 10; i += 2) {
        suma += i;
        printf("Sumando %d, total parcial: %d\n", i, suma);
    }
    printf("\nResultado final de la suma: %d\n", suma);
    return 0;
}