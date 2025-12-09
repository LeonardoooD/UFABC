#include <stdio.h>

main(){
    double temperatura ;
    int opcao ;
    scanf("%lf %d", &temperatura, &opcao);
    switch(opcao){
        case(1):{
            printf("%.2lf", temperatura + 273.15);
            break;
        }
        case(2):{
            prinf("%.2lf", temperatura - 273.15);
            break;
        }
    return 0;
    }

}