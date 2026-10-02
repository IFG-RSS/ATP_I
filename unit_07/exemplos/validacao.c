#include <stdio.h>
int main(void) {
    double nota;
    do {
        if (scanf("%lf", &nota) != 1) return 1;
        if (nota < 0 || nota > 10) puts("Tente novamente");
    } while (nota < 0 || nota > 10);
    printf("%.2f\n", nota);
    return 0;
}
