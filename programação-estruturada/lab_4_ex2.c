
#include <stdio.h>
#include <stdlib.h>


typedef struct {
    double x;
    double y;
} Ponto;

typedef struct {
    Ponto inferior_esquerdo;
    Ponto superior_direito;
} Retangulo;

double area(Retangulo r){
    double lado = r.superior_direito.x - r.inferior_esquerdo.x;
    double altura = r.superior_direito.y - r.inferior_esquerdo.y;
    return lado * altura;
}

int contem(Retangulo r, Ponto p){
    if((r.inferior_esquerdo.x > p.x) ^ (r.superior_direito.x < p.x)) {
        return 0;
    }
    if ((r.inferior_esquerdo.y <= p.y) ^ (r.superior_direito.y >= p.y)){
        return 0;
        
    }
    return 1;
}