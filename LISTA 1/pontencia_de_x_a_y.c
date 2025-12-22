#include <stdio.h>

int main(){
    int x, y, pot  ;
    scanf("%d %d", &x, &y);
    for(pot = 1 ; y > 0; pot = pot * x, y--){
    }
    printf("%d", pot);
}