//Escreva um programa que converta temperaturas de Fahrenheit para Celsus, seguindo
//a equação 𝐶 = (𝐹−32)×5/9

# include <stdio.h>

int main(){
    float f;
    float c;
    printf("digite o valor da temperatura em Fahrenheit: \n ");
    scanf("%f",&f);
    c = (f - 32) * 5 / 9;
    printf("\n");
    printf("---------------------------------------------------------------\n");
    printf("%.2f graus Fahrenheit é igual a %.2f graus Celsius.\n", f, c);
    printf("---------------------------------------------------------------\n");


    return 0;
}