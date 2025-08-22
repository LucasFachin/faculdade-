#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//---Constantes Globais---
#define MAX_LIVROS 50
#define MAX_EMPRESTIMOS 100 // Defininimos uma capacidade emprestimos.
#define TAM_STRING 100

// definição da estrutura (struct)
// struct livro agora tem um campo 'disponivel' para controlar o status.
struct Livro{

        char nome[TAM_STRING];
        char autor[TAM_STRING];
        char editora[TAM_STRING];
        int edicao;
        int disponivel; //1 para sim, 0 para não.
};

struct Emprestimo{
    int indiceLivro; //para saber qual livro do array biblioteca foi emprestado
    char nomeUsuario[TAM_STRING];
}

// função para limpar o buffer
void LimparBufferEntrada(){

    int c;
    while((c=getchar()) != '\n' && c != EOF);
}

//função principal

int main(){

    setlocale(LC_ALL, "");

    //alocação dinamica de memoeria
    // agora em vez de usar arrays estaticos, usamos ponteiros.

    struct Livro *biblioteca;
    struct Emprestimo *emprestimos;

    
// Usamos calloc para o array de livros. calloc(num_elementos, tamanho_de_cada_elemento)
// Vantagem: inicializa toda a memória com zeros. Isso significa que 'disponivel' já começa com todo o valor zerado
biblioteca = (struct Livro *) calloc(MAX_LIVROS, sizeof(struct Livro));

//usamos malloc para o array de emprestimos. malloc(tamanho_total_em_bytes)
emprestimos = (struct Emprestimos *) malloc(MAX_EMPRESTIMOS * sizeof(struct Emprestimo));

//verificação: é crucial verificar se a alocação de memoria deu certo
if(biblioteca == NULL || emprestimos == NULL){
    printf("Erro: Falha ao alocar memoria.\n");
    return 1; //retorna 1 para indicar um erro.
}

    int totalEmprestimos = 0;
    int totalLivros = 0;
    int opcao;

    // laço principal do menu

    do{

        //exibe o menu de opçoes
        printf("===================================\n");
        printf("            BIBLIOTECA             \n");
        printf("===================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("3 - Realizar emprestimos\n");
        printf("4 - Listar emprestimos\n");
        printf("0 - Sair\n");
        printf("-----------------------------------\n");
        printf("escolha uma opção: ");

        //le a opção do usuario.
        scanf("%d", &opcao);
        LimparBufferEntrada();

        // procesamento da opção
        switch (opcao){
            case 1: // cadastro de livro
            printf("---Cadastro de novo livro---\n\n");

            if(totalLivros < MAX_LIVROS){

                printf("Digite o nome do livro: ");
                fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                printf("Digite o nome do autor: ");
                fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                printf("Digite o nome da editora: ");
                fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

               biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0';
               biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = '\0';
               biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = '\0';

               printf("Digite a edição: ");
               scanf("%d", &biblioteca[totalLivros].edicao);
               LimparBufferEntrada();

               totalLivros++;
 
               printf("\nLivro cadastrado com sucesso!\n");
            }else{
                printf("Biblioteca cheia! Não é possivel cadastrar mais livros.\n");
            }
        
               printf("\n|Pressione enter para continuar...");
            getchar(); // pausa para o usario ler a mensagem antes de voltar ao menu
            break;

            case 2: //Listagem de livros
                printf("--- \nLista de livros cadastrados ---\n\n");

            if(totalLivros==0){
                printf("Nenhum livro cadastrado");
            }else {
                for(int i=0; i<totalLivros; i++){

                printf("------------------------------\n");
                printf("Livro %d\n", i + 1);
                printf("Nome: %s\n", biblioteca[i].nome);
                printf("Autor: %s\n", biblioteca[i].autor);
                printf("Editora: %s\n", biblioteca[i].editora);
                printf("Edição: %d\n", biblioteca[i].edicao);
                }
                printf("-------------------------------");
            }

            printf("\n|Pressione enter para continuar...");
            getchar(); // pausa para o usario ler a mensagem antes de voltar ao menu
            break;

            case 3: //Realizar emprestimo
            printf("--- realizar emprestimo ---\n\n");

            if (totalEmprestimos >= MAX_EMPRESTIMOS){
                printf("Limite de emprestimos atingindo!\n");
            }else {
                printf("Livros disponiveis:\n");
                int disponiveis = 0;
                for (int i = 0; i < totalLivros; i++){
                    if(biblioteca[i].disponivel){
                        printf("%d - %s\n", i + 1, biblioteca[i].nome);
                        disponiveis++;
                    }
                }
            
            if(disponiveis == 0){
                printf("Nenhum livro disponivel para emprestimo.\n")

            }else{
                printf("\nDigite o numero do livro que deseja emprestar: ");
                int numLivro;
                scanf("%d", &numLivro);
                limparBufferEntrada();

                int indice = numLivro - 1; // Converte para o indice do array (0 a N-1).

                // Validação da escolha do usuario.
                if(indice >= 0 && indice < totalLivros && biblioteca[indice].disponivel){
                    printf("Digite o nome do usuario que esta pegando o livro: ");
                    fgests(emprestimos[totalEmprestimos].nomeUsuario, TAM_STRING, stdin);
                    emprestimos[totalEmprestimos].nomeUsuario[strcspn(emprestimos[totalEmprestimos]"\n")]='\0';

                //Registra o emprestimo
                emprestimos[totalEmprestimos].indiceLivro = indice;

                //atualiza o status do livro para indisponivel.
                emprestimos[indice].disponivel = 0;


                totalEmprestimos++;
                printf("\nEmprestimo realizado com sucesso!\n");
                }else {
                    printf("\nNumero de livro invalido ou livro indisponivel.\n");
                }

            }
        }
         printf("\n|Pressione enter para continuar...");
            getchar(); // pausa para o usario ler a mensagem antes de voltar ao menu
            break;

            case 4: //Listar emprestimos
            printf("--- lista de emprestimos ---\n\n");
            if(totalEmprestimos == 0){
                printf("Nenhum emprestimo realizado");
            } else {
                for(int i = 0; i < totalEmprestimos; i++){
                    // Usa o indice armazenado no emprestimo para buscar o nome do livro.
                    int indiceLivro = emprestimos[i].indiceLivro;
                    printf("-----------------------------------\n");
                    printf("EMPRESTIMO %d\n", i + 1);
                    printf("Livro: %s\n",biblioteca[indiceLivro].nome);
                    printf("Usuario: %s\n", emprestimos[i].nomeUsuario);
                }
                printf("------------------------------------\n");
            }
            

            case 0: //sair
                 printf("\nSaindo do sistema...\n");
                 break;

            default: //opção invalida
            printf("\nopção invalida! Tente novamente.\n");
            printf("\n|Pressione enter para continuar...");
            getchar(); // pausa para o usario ler a mensagem antes de voltar ao menu
            break;
        }





    } while(opcao !=0);

    return 0;
}
