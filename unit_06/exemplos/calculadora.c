#include <stdio.h>
int main(void) {
    double a, b, resultado;
    char operacao;
    if (scanf("%lf %c %lf", &a, &operacao, &b) != 3) return 1;
    switch (operacao) {
        case '+': resultado = a + b; break;
        case '-': resultado = a - b; break;
        case '*': resultado = a * b; break;
        case '/':
            if (b == 0) { puts("Divisao por zero"); return 1; }
            resultado = a / b; break;
        default: puts("Operacao invalida"); return 1;
    }
    printf("%.2f\n", resultado);
    return 0;
}
