#include <stdio.h>

int main(){
    int i, n, n_1, n_2 ;
    scanf("%d", &i) ;
    n_1 = 1;
    n_2 = 0;
    printf("%d  %d", n_2, n_1);
    i --;
    while (i > 0 ){
        n = n_1 + n_2;
        printf(" ,%d", n);
        n_2 = n_1;
        n_1 = n;
        i --;
    }
}