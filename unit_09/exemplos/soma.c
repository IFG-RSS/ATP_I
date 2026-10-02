#include <stdio.h>
int main(void) {
    double a, b;
    if (scanf("%lf %lf", &a, &b) != 2) return 1;
    printf("%.2f\n", a + b);
    return 0;
}
