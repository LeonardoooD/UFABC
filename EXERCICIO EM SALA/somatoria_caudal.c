#include <stdio.h>

int somatoria_caudal(int n, int s ){
    if (n == 0){
        return s;
    }else{
        return somatoria_caudal(n-1, s + n);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", somatoria_caudal(n, 0));
    return 0;
}
