#include <iostream>

/*
Descricao: esse procedimento troca dois elementos de um vetor de inteiros

Parametros: um vetor de inteiros (vetor que tera os 
elementos trocados) e dois inteiros (indice dos 
dois elementos a serem trocados)
*/
void swap (int vet[], int i, int j) {
    int aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

/* 
Descricao: esse procedimento ordena um vetor de inteiros
em ordem crescente com o metodo bubblesort

Parametro: um vetor de inteiros (vetor a ser ordenado) 
e um inteiro (tamanho do vetor)
*/
void bubblesort (int vet[], int n) {
    for (int i = n-1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (vet[j] > vet[j+1]) {
                swap(vet, j, j+1);
            }
        }
    }
}

