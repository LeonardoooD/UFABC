#include <stdio.h>

int fibonacci_recusiva(int n){

    if (n <= 0 ){
        return 0;
    }else if(n == 1){
        return 1;
    }else
        return fibonacci_recusiva(n-1) + fibonacci_recusiva(n-2);

}


int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci_recusiva(n));
    return 0;
}