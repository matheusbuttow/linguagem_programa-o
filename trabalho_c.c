#include <stdio.h>

typedef struct {
    char nome[30];
    int codigo;
    double preco;
} Produto;

void cadastrarprodutos(Produto produtos[], int i) {
    printf("********************\n");
    printf("ADICIONAR PRODUTO\n");
    printf("********************\n");

    getchar(); // limpa buffer do teclado

    printf("Digite o nome do produto:\n");
    fgets(produtos[i].nome, 30, stdin);

    printf("Digite o código do produto:\n");
    scanf("%d", &produtos[i].codigo);

    printf("Digite o preço do produto:\n");
    scanf("%lf", &produtos[i].preco);
}

void listarprodutos(Produto produtos[], int total) {
    printf("\nLISTAGEM DE PRODUTOS\n");
    for (int j = 0; j < total; j++) {
        printf("\nProduto %d:\n", j + 1);
        printf("Nome: %s", produtos[j].nome);
        printf("Código: %d\n", produtos[j].codigo);
        printf("Preço: %.2lf\n", produtos[j].preco);
    }
}

void buscarproduto(Produto produtos[], int total, int codigo1) {
    int encontrado = 0;
    for (int i = 0; i < total; i++) {
        if (produtos[i].codigo == codigo1) {
            printf("\nInformações sobre o produto que você pesquisou:\n");
            printf("Nome: %s\n", produtos[i].nome);
            printf("Código: %d\n", produtos[i].codigo);
            printf("Preço: %.2lf\n", produtos[i].preco);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Produto com código %d não encontrado.\n", codigo1);
    }
}

int main() {
    Produto produtos[50];
    int i = 0;
    int opcao = 0;
    int codigo = 0;

    while (opcao != 4) {
        printf("\n1 - para cadastrar produto\n");
        printf("2 - para listar produtos\n");
        printf("3 - para procurar produto com codigo\n");
        printf("4 - para sair\n");
        printf("Escolha a opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            cadastrarprodutos(produtos, i);
            i++;
        } 
        else if (opcao == 2) {
            listarprodutos(produtos, i);
        }
        else if (opcao == 3) {
            printf("Digite o código do produto que deseja buscar:\n");
            getchar(); // Limpa o '\n' restante
            scanf("%d", &codigo);
            buscarproduto(produtos, i, codigo);
        }
        else if (opcao != 4) {
            printf("Opção inválida, tente novamente!\n");
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}