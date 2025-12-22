#include <stdio.h>/*(opcao = 1 para converter de decimal para bin´ario e opcao = 2 para
converter de bin´ario para decimal)*/

int main(){
    int opcao, valor, bit, resultado, casa;
    scanf("%d %d", &valor, &opcao);
    resultado = 0;
    bit = 0;
    casa = 1;
    switch(opcao){
        case(1):{
            while ( valor > 0){ 
                bit = valor % 2;
                resultado = resultado + casa * bit;
                valor = valor / 2;
                casa = casa * 10;
            }
            printf("%d\n", resultado);
        }
        break;

        case(2):{
            casa = 1;

           while(valor > 0){
            bit = valor % 10;
            resultado = resultado + bit * casa;
            casa = casa * 2;
            valor = valor / 10;
           } 
           printf("%d", resultado);
        }
        break;
    }
    return 0;
}