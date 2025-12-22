#include <stdio.h>
#include <math.h>

int fatorial_c(int n, int acumulador){
    if (n <= 0){
        return acumulador;
    }else{
    return fatorial_c(n-1, acumulador * n );
    }
}


int binomial (int n, int k){
    int resultado;
    resultado = fatorial_c(n, 1) / (fatorial_c(k, 1) * fatorial_c(n-k, 1));
    return resultado;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", binomial(n, k));
    return 0;
}