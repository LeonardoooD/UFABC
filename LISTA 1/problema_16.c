#include <stdio.h>

int main(){
    int cargo, faltas, extras, descontos, acrescimos;
    float salario;
    scanf("%d %d %d", &cargo, &faltas, &extras);
    if (extras > 40){
        extras = 40 ;
    }
    switch(cargo){
        case(1):{
            printf("cargo        : Diretor \n");
            salario = 10000.0;
            break;
        }
        case(2):{
            printf("cargo : Gerente \n");
            salario = 8000.0;
            break;
        }
        case(3):{
            printf("cargo : Engenheiro \n");
            salario = 5000.0;
            break;
        }
        case(4):{
            printf("cargo : Técnico \n");
            salario = 3000.0;
            break;
        }
        case(5):{
            printf("cargo : Operador \n");
            salario = 2000.0;
            break;
        }
   
    
    }
    printf("# de faltas  : %d \n# horas-extras: %d \n", faltas, extras);
    descontos = (salario / 20) * (faltas);
    acrescimos = ((salario / 160.00 ) + 40) * (extras);
    printf("descontos    : %d \nacrescimos   : %d \nsalario      : %d ", descontos, acrescimos , salario + acrescimos - descontos);
    return 0;
}    