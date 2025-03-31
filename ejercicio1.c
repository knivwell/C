#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int numero;
    int suma = 0;
    int contador = 0;
    printf("Generando numeros aleatorios...\n"); 
    while (1) { 
        numero = rand() % 491 + 10;
        printf("%d ", numero);
        suma += numero;
        contador++;
        if (numero == 126) {
            break;
        }
    }
    
    float promedio = (float)suma / contador;
    printf("\n\nResultados:\n");
    printf("Suma total: %d\n", suma);
    printf("Cantidad de numeros generados: %d\n", contador);
    printf("Promedio: %.2f\n", promedio);
    
    return 0;
}