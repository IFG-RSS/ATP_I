#include <stdio.h>
int main(void) {
    double nota;
    if (scanf("%lf", &nota) != 1) return 1;
    if (nota < 0 || nota > 10) { puts("Nota invalida"); return 1; }
    if (nota >= 6) puts("Meta atingida"); else puts("Revisar conteudo");
    return 0;
}
