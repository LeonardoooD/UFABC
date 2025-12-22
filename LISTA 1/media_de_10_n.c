#include <stdio.h>

int main (){
    int i = 1, soma = 0, n;
    float media;
    while (i <= 10){
        scanf("%d", &n);
        soma = soma + n;
        i ++;
    }
    media = soma / 10.0;
    printf("soma = %d \nmedia = %.2f", soma, media );
    return 0;
}