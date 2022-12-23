#include <stdio.h>
#include <stdlib.h>

/*
Descricao: essa funcao troca dois elementos de um vetor de reais
Parametros: um vetor de reais (vetor que tera os 
elementos trocados) e dois inteiros (indice dos 
dois elementos a serem trocados)
*/
void swap (float vet[], int i, int j) {
	float aux = vet[i];
	vet[i] = vet[j];
	vet[j] = aux;
}

/* 
Descricao: essa funcao ordena um vetor de reais
em ordem crescente com o metodo selectionsort

Parametro: um vetor de reais (vetor a ser ordenado)
e um inteiro (tamanho do vetor)
*/
void selectionsort (float vet[], int n) {
	for (int i = 0; i < n-1; i ++) {
		int menor = i;

		for (int j = i + 1; j < n; j++) {
			if (vet[menor] > vet[j]) {
				menor = j;
			}
		}

		if (i != menor) {
			swap(vet, i, menor);
		}
	}
}