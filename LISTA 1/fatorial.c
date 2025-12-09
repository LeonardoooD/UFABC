#include <stdio.h>

int main(){
    int x, fat;
    scanf("%d", &x);
    fat = x;
    while(x > 1){
        x = x - 1;
        fat = fat * x;
    }
    printf("%d",fat);
}
