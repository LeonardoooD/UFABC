#include <stdio.h>
#include <string.h>



int main(){
    int tamanho;
    char texto[101];
    fgets(texto, 101, stdin);
    tamanho = strlen(texto);
    for(int i = 0; i < tamanho; i++){
        if (97 <= texto[i] && texto[i] <= 122){
            texto[i] -= 32;
        }else if( 65 <= texto[i] && texto[i] <= 90 ){
            texto[i] += 32;
        }
    }
    puts(texto);
    return 0;
}