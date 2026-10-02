#include <stdio.h>
int main(void) {
    int n, atingiram = 0;
    double total = 0, maior = -1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 10000) return 1;
    for (int i = 0; i < n; i++) {
        double n1, n2;
        do {
            if (scanf("%lf %lf", &n1, &n2) != 2) return 1;
            if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10) puts("Notas invalidas: repita o par");
        } while (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10);
        double media = (n1 + n2) / 2;
        printf("Estudante %d: %.2f\n", i + 1, media);
        total += media;
        if (media > maior) maior = media;
        if (media >= 6) atingiram++;
    }
    printf("Media da turma: %.2f\nMaior media: %.2f\nMeta atingida: %d\n", total / n, maior, atingiram);
    return 0;
}
