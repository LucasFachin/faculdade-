#include <stdio.h>

void saudacao() {
    printf("Ol�, mundo!");
}

int main() {
    void (*ptr)() = saudacao; // ponteiro para fun��o
    ptr(); // chamada indireta
    return 0;
} 
