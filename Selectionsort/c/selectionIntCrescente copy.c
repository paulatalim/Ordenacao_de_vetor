#include <stdio.h>
#include <stdlib.h>

/*
Descricao: essa funcao troca dois elementos de um vetor de inteiros
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
Descricao: essa funcao ordena um vetor de inteiros
em ordem decrescente com o metodo selectionsort

Parametro: um vetor de inteiros (vetor a ser ordenado)
e um inteiro (tamanho do vetor)
*/
void selectionsort (int vet[], int n) {
	for (int i = 0; i < n-1; i ++) {
		int maior = i;

		for (int j = i + 1; j < n; j++) {
			if (vet[maior] < vet[j]) {
				maior = j;
			}
		}

		if (i != maior) {
			swap(vet, i, maior);
		}
	}
}