#include <stdio.h>

int main() {
    int opcao;
    double temperatura;
    scanf("%lf %d", &temperatura, &opcao);
    switch(opcao){
        case(1):{
            printf("%.1lf", 32 + (1.8) * temperatura );
            break;
        }
        case(2):{
            printf("%.1lf", ( 5.0 / 9.0 ) * ( temperatura - 32) );
            break;
        }
    return 0 ;
    }

}

