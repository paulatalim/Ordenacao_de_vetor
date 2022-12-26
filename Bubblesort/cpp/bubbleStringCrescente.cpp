#include <iostream>

using namespace std;

/*
Descricao: esse procedimento troca dois elementos de um vetor de string

Parametros: um vetor de string (vetor que tera os 
elementos trocados) e dois inteiros (indice dos 
dois elementos a serem trocados)
*/
void swap (string vet[], int i, int j) {
    string aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

/* 
Descricao: esse procedimento ordena um vetor de string
em ordem crescente com o metodo bubblesort

Parametro: um vetor de string (vetor a ser ordenado) 
e um inteiro (tamanho do vetor)
*/
void bubblesort (string vet[]) {
    for (int i = vet->length() - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (vet[j].compare(vet[j+1]) > 0) {
                swap(vet, j, j+1);
            }
        }
    }
}

