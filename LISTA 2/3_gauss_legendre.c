#include <stdio.h>
#include <math.h>

int aprox_pi (double a, double b, double t, double p, int n){
    double a1, res = 0.00;
    int i = 1;
    while (i<= n){
        a1 = (a + b) / 2 ;
        b = sqrt( a * b );
        t = t - p * pow(( a - a1 ), 2);
        p = 2 * p;
        a = a1;
        i++;
    }
    res = (pow(a + b , 2.0)) / ( 4.0 * t);
    printf ("%.15lf", res);
    return 0;
}


int main(){
    aprox_pi(1.00, (1.00 / sqrt(2)), 0.25, 1, 25);
    return 0;
}
