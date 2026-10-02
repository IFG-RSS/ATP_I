#include <stdio.h>
int main(void) {
    double valor, soma = 0;
    int quantidade = 0;
    /* Valores de 0 a 10; -1 encerra e nao participa da media. */
    while (1) {
        if (scanf("%lf", &valor) != 1) return 1;
        if (valor == -1) break;
        if (valor < 0 || valor > 10) { puts("Nota invalida"); continue; }
        soma += valor;
        quantidade++;
    }
    if (quantidade > 0) printf("%.2f\n", soma / quantidade);
    else puts("Nenhum dado");
    return 0;
}
