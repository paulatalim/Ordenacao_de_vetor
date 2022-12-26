#include <iostream>

using namespace std;

/*
Descricao: essa funcao troca dois elementos de um vetor de strings
Parametros: um vetor de strings (vetor que tera os 
elementos trocados) e dois inteiros (indice dos 
dois elementos a serem trocados)
*/
void swap (string vet[], int i, int j) {
    string aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

/* 
Descricao: esse procedimento ordena um vetor de strings 
em ordem decrescente com o metodo quicksort

Parametro: um vetor de strings (vetor a ser ordenado) 
e dois inteiros (indice do primeiro e do ultimo elemento do vetor)
*/
void quick (string vet[], int esq, int dir) {
    int i, j, posicao;
    string pivo;
    
    i = esq;
    j = dir;
    posicao = (esq + dir) / 2;
    pivo = vet[posicao];

    while (i <= j) {
        while (vet[i].compare(pivo) > 0) {
            i ++;
        }

        while (vet[j].compare(pivo) < 0) {
            j --;
        }

        if (i <= j) {
            //Troca dos valores no vetor
            swap(vet, i, j);
            i++;
            j--;
        }
    }
    
    if (esq < j) {
        quick (vet, esq, j);
    }

    if (i < dir) {
        quick (vet, i, dir);
    }
}

/*
Descricao: esse procedimento chama pelo procedimento quick 
para ordena o vetor em ordem decrescente, possuindo 
argumentos mais simplificados

Parametro: um vetor de strings (vetor a ser ordenado) 
*/
void quicksort (string vet[]) {
    quick(vet, 0, vet->length()-1);
}