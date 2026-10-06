#include <stdio.h>

void maiores_linhas(int matriz[][100], int n_linhas, int n_colunas,int maiores[]){
    for(int i = 0 ; i < n_linhas; i++){
        int max = matriz[i][0];
        for( int j = 1; j< n_colunas; j++){
            if (matriz[i][j] > max){
                max = matriz[i][j];
            }
        }
        maiores[i] = max;
    }
}

