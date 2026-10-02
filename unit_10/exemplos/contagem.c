#include <stdio.h>
int main(void) {
    int n, valor, dentro = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 10000) return 1;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &valor) != 1) return 1;
        if (valor >= 10 && valor <= 20) dentro++;
    }
    printf("%d\n", dentro);
    return 0;
}
