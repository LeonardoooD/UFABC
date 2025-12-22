#include <stdio.h>
#include <math.h>

float soma(float x, float y){
    float resultado;
    resultado = x + y;
    return resultado;
}

float subtracao(float x, float y){
    float resultado;
    resultado = x - y;
    return resultado;
}

float multiplica(float x, float y){
    float resultado;
    resultado = x * y;
    return resultado;
}

float divide(float x, float y){
    float resultado;
    resultado = x / y;
    return resultado;
}


float potencia(float x, float y){
    return  pow(x, y);
}

int calculadora(int opcao, float x, float y){
    float resultado = 0.00;
    switch (opcao){
        case(1):{
            resultado = soma(x, y);
            break;
        }

        case(2):{
            resultado = subtracao(x, y);
            break;
        }

        case(3):{
            resultado = multiplica(x, y);
            break;
        }

        case(4):{
            resultado = divide(x, y);
            break;
        }

        case(5):{
            resultado = potencia(x, y);
            break;
        }
    }
    if (resultado == (int)resultado){
        printf("%.0f",resultado);
    }else{
        printf("%.2f", resultado);
    }
    return 0;
}



int main(){
    int opcao;
    float x, y;
    scanf("%d %f %f", &opcao, &x, &y);
    calculadora(opcao, x, y);
    return 0;
}