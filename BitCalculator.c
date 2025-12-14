#include <stdio.h>

int main() {
    int bits[8];      
    int valorTotal = 0; 

    printf("--- Calculadora de Byte ---\n");
    printf("Ingresa los 8 bits (0 o 1) uno por uno, de izquierda a derecha:\n\n");

    for (int i = 0; i < 8; i++) {
        printf("Bit en posicion %d: ", i);
        scanf("%d", &bits[i]);
    }

    printf("\nProcesando el byte...\n");

    for (int i = 0; i < 8; i++) {
        if (bits[i] == 1) {

            int exponente = 7 - i;


            int valorPosicion = 1 << exponente;

            valorTotal = valorTotal + valorPosicion;

            printf(" -> Bit activo en indice %d. Sumando 2^%d (%d)\n", i, exponente, valorPosicion);
        }
    }

    printf("\nEl valor decimal del byte es: %d\n", valorTotal);

    return 0;
}