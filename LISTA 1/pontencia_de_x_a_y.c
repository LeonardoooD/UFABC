#include <stdio.h>

int main(){
    int x, y, pot  ;
    scanf("%d %d", &x, &y);
    for(pot = 1 ; y > 0; pot = pot * x, y--){
    }
    printf("%d", pot);
}
/*Se a = x  já  andamos um passo logo o range dev ur até n-1, ou seja b>1 ou b= y-1
se a = 1 temos que andar todos os passos logo b>0 e b=y*/