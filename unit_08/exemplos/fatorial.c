#include <stdio.h>
int main(void) {
    int n;
    unsigned long long produto = 1;
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) return 1;
    for (int i = 1; i <= n; i++) produto *= (unsigned long long)i;
    printf("%llu\n", produto);
    return 0;
}
