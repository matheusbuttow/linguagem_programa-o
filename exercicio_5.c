//Dados dois strings (um contendo uma frase e outro contendo uma palavra), determine
//o número de vezes que a palavra ocorre na frase.

# include <stdio.h>
# include <string.h>

int main(){
    char frase[100], palavra[20];
    int contador = 0;
    int len_frase, len_palavra,j;

    printf("Digite a frase: ");
    gets(frase); // Lê uma frase com espaços
    printf("Digite a palavra: ");
    gets(palavra); // Lê a palavra
    
    len_frase = strlen(frase);
    len_palavra = strlen(palavra);

for (int i = 0; i <= len_frase - len_palavra; i++) {
        for (j = 0; j < len_palavra; j++) {
            if (frase[i + j] != palavra[j]) {
                break; 
            }
        }
        
        
        if (j == len_palavra) {
            contador++; 
        }
    }
    printf("A palavra '%s' ocorre %d vezes na frase.\n", palavra, contador);


    return 0;
}