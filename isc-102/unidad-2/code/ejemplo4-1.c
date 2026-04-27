#define TASA_INTERES 25  // Definimos la tasa actual

#if TASA_INTERES > 20
    #define DESCUENTO 10  // Si el interés es alto, el descuento es 10
#else
    #define DESCUENTO 5   // Si no, el descuento es solo 5
#endif

#include <stdio.h>

int main() {
    // El compilador no verá "DESCUENTO", verá directamente el número 10
    printf("El descuento aplicado es del %d%%\n", DESCUENTO);
    return 0;
}