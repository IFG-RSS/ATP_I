#include <stdio.h>
int main(void) {
    double distancia, tempo;
    if (scanf("%lf %lf", &distancia, &tempo) != 2) return 1;
    if (distancia < 0 || tempo <= 0) { puts("Entrada invalida"); return 1; }
    printf("%.2f\n", distancia / tempo);
    return 0;
}
