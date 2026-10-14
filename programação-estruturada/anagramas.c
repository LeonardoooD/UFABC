#include <stdio.h>
#include <string.h>

int anagrama(char S[], char T[]){
    int tamanho_S, tamanho_T;
    tamanho_S = strlen(S);
    tamanho_T = strlen(T);
    int eh_anagrama = 1;
    if (tamanho_S != tamanho_T){
        return 0;
    }else{
        for(int i = tamanho_S; i < tamanho_S; i++){
            eh_anagrama = 0;
            for(int j = tamanho_T; j < tamanho_T; j++){
                if (S[i] == S[j]){
                    eh_anagrama = 1;
                    continue;
                }
                
            }
            if (! eh_anagrama){
                return 0;
            }
        }
        return 1;
    }
}