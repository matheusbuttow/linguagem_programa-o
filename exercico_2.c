#include <stdio.h>

int main() {
    printf("\033[1;34m"); // Azul negrito
    printf("➡️  Digite o valor de \033[1;33mn\033[1;34m: ");
    printf("\033[0m"); // Reset

    int n = 0;
    int i = 0;
    int cont = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            cont++;
        }
    }

    if (cont == 2) {
        printf("\033[1;32m✅ O número %d é primo!\033[0m\n", n);
    } else {
        printf("\033[1;31m❌ O número %d não é primo.\033[0m\n", n);
    }

    return 0;
}