#include <stdio.h>
#include <stdlib.h>

int *menores_que(const int v[], int n, int limite, int *novo_n);

int main(){
	
int v[] = {8, 2, 5, 1, 7, 3, 9};
int novo_n;

int *r = menores_que(v, 7, 5, &novo_n);

printf("%d:", novo_n);
for (int i = 0; i < novo_n; i++)
    printf(" %d", r[i]);
printf("\n");

free(r);
}


int *menores_que(const int v[], int n, int limite, int *novo_n){
    int j = 0;
    int *novo_vec = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        if( v[i] < limite){
            novo_vec[j] = v[i];
            j++;
        }
    }
     *novo_n = j;
    if(*novo_n == 1){
        novo_vec[0] = 0;
        novo_vec = (int *)realloc(novo_vec, 1*sizeof(int));
        return NULL;
    }
    novo_vec = (int *)realloc(novo_vec, (*novo_n) * sizeof(int));
    return novo_n;
}