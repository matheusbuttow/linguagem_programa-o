#include <stdio.h>

int main() {
    int n = 0;
    int i = 0;
    int cont = 0;
    int lista[10];
    int tamanho = 0;

    printf("\033[1;34m"); 
    printf("➡️  Digite o valor de \033[1;33mn\033[1;34m: ");
    printf("\033[0m"); 
    scanf("%d", &n);

    for (i = 1; i <= n * 2; i += 2) { // Garante que só números ímpares serão adicionados
        lista[tamanho] = i;
        tamanho++;
    }

    printf("🔢  Lista de números ímpares até o %dº número:  \n", n);
    for (i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}
