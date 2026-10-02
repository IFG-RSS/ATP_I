#include <stdio.h>
int main(void) {
    int valor;
    if (scanf("%d", &valor) != 1) return 1;
    if (valor >= 10 && valor <= 20) puts("No intervalo");
    puts("Fim");
    return 0;
}
