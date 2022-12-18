#include <stdlib.h>
#include <stdio.h>

/*
Descricao: esse procedimento troca dois elementos de um vetor double
Parametros: um vetor double (vetor que tera os 
elementos trocados) e dois inteiros (indice dos 
dois elementos a serem trocados)
*/
void swap (double vet[], int i, int j) {
    double aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

/* 
Descricao: esse procedimento ordena um vetor double
em ordem crescente com o metodo bubblesort

Parametro: um vetor double (vetor a ser ordenado)
*/
void bubblesort (double vet[]) {
    //Calculo do tamanho do vetor
    int n = sizeof(vet)/sizeof(double);

    //Ordenacao do vetor
    for (int i = n-1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (vet[j] > vet[j+1]) {
                swap(vet, j, j+1);
            }
        }
    }
}

