#include <stdio.h>
#include <math.h>

double discriminante(double a, double b, double c){
    double delta;
    delta = (pow(b, 2)) - (4 * a * c);
    return delta;
}

int main(){
    double raiz_1, raiz_2, bhskra_com_discr, a, b, c, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = discriminante(a, b, c);
    double bhskra_sem_discr = - b  / (2 * a);
    if (delta > 0){
        raiz_1 = bhskra_sem_discr - (sqrt(delta) / (2 * a)) ;
        raiz_2 = bhskra_sem_discr + (sqrt(delta) / (2 * a)) ;
        printf("%.2lf %.2lf", raiz_1, raiz_2);
    }else if(delta == 0){
        raiz_1 = bhskra_sem_discr;
        printf("%.2lf", raiz_1);
    }else{
        bhskra_com_discr =  (sqrt(-delta) / (2 * a));
        printf("%.2lf - %.2lfi ",bhskra_sem_discr, bhskra_com_discr  );
        printf(" %.2lf + %.2lfi ",bhskra_sem_discr, bhskra_com_discr  );
    }
    return 0;
}


