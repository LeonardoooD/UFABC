#include <stdio.h>/*opcao = 1 para converter de decimal para hexadecimal e opcao = 2 para
converter de hexadecimal para decimal)*/

int main(){
    int  opcao;
    char valor1, valor2, numero;
    scanf("%c%c", &valor1, &valor2);
    scanf("%d", &opcao);
    if (valor2 == ' '){
        numero = valor1;
    }else{
        numero = ((valor1 - '0') * 10) + (valor2 - '0');
    }
    switch(opcao){
        case(1):{
            
            if (numero >= 10){
                numero = numero + 55;
            }else{
                numero = numero + 48;
            }
            printf("%c\n", numero);
            break;
        }
        case(2):{
            if (numero >= 'a'){
                numero = numero - 32;}
            if (numero >= 65){
                numero = numero - 55;
            }else{
                numero = numero - 48;
            }
            printf("%d", numero);
            break;
        }
    }
    return 0;
}