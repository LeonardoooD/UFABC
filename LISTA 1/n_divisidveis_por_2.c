#include <stdio.h>

int main(){
    int n;
    int i = 10;
    scanf("%d", &n);
    for (i = 100; i <= n; i = i + 2 ){
        if ( i > 100 ){
            printf(", ");
        }
        printf("%d", i);
    }
     return 0;
}
   
