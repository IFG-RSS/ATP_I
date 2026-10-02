#include <stdio.h>
int main(void) {
    int linhas, colunas;
    if (scanf("%d %d", &linhas, &colunas) != 2) return 1;
    if (linhas < 1 || linhas > 50 || colunas < 1 || colunas > 50) return 1;
    for (int l = 0; l < linhas; l++) {
        for (int c = 0; c < colunas; c++) putchar('*');
        putchar('\n');
    }
    return 0;
}
