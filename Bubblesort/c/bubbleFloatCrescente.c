#include <stdlib.h>
#include <stdio.h>

/*
Descricao: esse procedimento troca dois elementos de um vetor de reais
Parametros: um vetor de inteiros (vetor que tera os 
elementos trocados) e dois inteiros (indice dos 
dois elementos a serem trocados)
*/
void swap (float vet[], int i, int j) {
    float aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

/* 
Descricao: esse procedimento ordena um vetor de reais
em ordem crescente com o metodo bubblesort

Parametro: um vetor de reais (vetor a ser ordenado)
*/
void bubblesort (float vet[]) {
    //Calculo do tamanho do vetor
    int n = sizeof(vet)/sizeof(float);

    //Ordenacao do vetor
    for (int i = n-1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (vet[j] > vet[j+1]) {
                swap(vet, j, j+1);
            }
        }
    }
}

