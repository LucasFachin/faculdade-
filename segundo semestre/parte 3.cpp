#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa* p = (Pessoa*)malloc(sizeof(Pessoa));
    if (p == NULL) return 1;

    printf("Digite o nome: ");
    scanf("%s", p->nome);
    printf("Digite a idade: ");
    scanf("%d", &p->idade);

    printf("%s tem %d anos.", p->nome, p->idade);
    free(p);
    return 0;
} 
