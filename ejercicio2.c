#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>   

int main(void) {
    const float pi = 3.1416;
    float distancia, x1, y1, x2, y2;

   
    srand(time(0));

    x1 = rand() % 10; 
    y1 = rand() % 10;
    x2 = rand() % 10;
    y2 = rand() % 10;

    printf("P1: (%.2f, %.2f)\n", x1, y1);
    printf("P2: (%.2f, %.2f)\n", x2, y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    if (distancia > 0 && x2 - x1 < 0 && y2 - y1 < 0)
        printf("\nEl punto P2 (%.2f, %.2f) esta debajo de P1 (%.2f, %.2f)\n", x2, y2, x1, y1);

    if (distancia > 0 && x2 - x1 > 0 && y2 - y1 > 0)
        printf("\nEl punto P2 (%.2f, %.2f) esta por encima de P1 (%.2f, %.2f)\n", x2, y2, x1, y1);

    if (distancia == 0)
        printf("\nEl punto P2 y P1 estan en las mismas coordenadas (%.2f, %.2f)\n", x2, y2);

    return 0;
}