#include <stdio.h>

int conta_vizinhos(int matriz[][100], int n_linhas, int n_colunas,int lin, int col){
    int n_vizinhos = 0;
    int i_min = lin - 1;
    int j_min = col - 1 ;
    int i_max = lin + 1;
    int j_max = col + 1;

        if(lin == 0){
            i_min = lin;
        }if(lin == n_linhas - 1){
            i_max = lin;
        }if(col == 0){
            j_min = col;
        }if (col == n_colunas - 1){
            j_max = col;
        }
        for (int i = i_min; i <= i_max; i++){
            for(int j = j_min; j <= j_max; j ++){
                if (matriz[i][j] == 1){
                    n_vizinhos += 1;
                }
            }
        }
        if (matriz[lin][col] == 1){
            n_vizinhos -= 1;
        }
        return n_vizinhos;
}