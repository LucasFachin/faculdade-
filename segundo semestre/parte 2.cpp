#include <stdio.h>

int main() {
    int x = 10;
    int* p = &x; // ponteiro para x

    printf("Valor de x: %d\n", x);
    printf("Endere�o de x: %p\n", &x);
    printf("Conte�do de p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
