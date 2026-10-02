#include <stdio.h>
int main(void) {
    int n, primo;
    if (scanf("%d", &n) != 1) return 1;
    primo = n >= 2;
    for (int d = 2; primo && d <= n / d; d++) {
        if (n % d == 0) primo = 0;
    }
    puts(primo ? "Primo" : "Nao primo");
    return 0;
}
