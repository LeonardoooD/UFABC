#include <stdio.h>

int main(){
    int valor, resultado;
    scanf("%d", &valor );
    resultado = (valor * ( 1 + valor )) / 2;
    printf("soma de 1 a %d = %d", valor , resultado);
    return 0;
}