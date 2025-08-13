#include <stdio.h>

void saudacao() {
    printf("Olá, mundo!");
}

int main() {
    void (*ptr)() = saudacao; // ponteiro para função
    ptr(); // chamada indireta
    return 0;
} 
