# include <stdio.h>

int main(){
    int x, i;
    int r = 1;
    printf("digite o valor de x\n");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        r = i * r;
    }
    printf("%d",r);


    return 0;
}
