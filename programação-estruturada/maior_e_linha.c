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

int main(){
    int matriz[][100] = {{3,-2,8,5},{7, 7, 1, 4},{-3, -10, -5, -1}};
    maiores_linhas(matriz, n_colunas = 3, n_colunas = 4, int maiores[3] = {0});
    for(int i = 0; i < n_linhas; i++){
        printf("%d ",maiores[i]);
    }
    return 0;
}