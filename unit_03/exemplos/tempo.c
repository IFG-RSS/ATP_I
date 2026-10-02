#include <stdio.h>
int main(void) {
    int segundos;
    if (scanf("%d", &segundos) != 1 || segundos < 0) return 1;
    printf("%d:%02d:%02d\n", segundos / 3600, (segundos % 3600) / 60, segundos % 60);
    return 0;
}
