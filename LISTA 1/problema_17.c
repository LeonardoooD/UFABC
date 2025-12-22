#include <stdio.h>

int calculo_salario(){
    int x , y, quad_soma , soma_quad;
    soma_quad = 0;
    quad_soma = 0;
    scanf("%d %d", &x, &y);
    for( ;y >= x ;x ++){
        soma_quad = soma_quad + (x * x);
        quad_soma = quad_soma + x ;
        
    }
    quad_soma = quad_soma * quad_soma;
    printf("soma dos quadrados = %d\n", soma_quad);
    printf("quarado da soma   = %d\n", quad_soma);
    printf("diferenca         = %d\n", quad_soma - soma_quad );
    return 0 ;
}