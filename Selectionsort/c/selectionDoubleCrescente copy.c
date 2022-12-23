#include <stdio.h>
#include <stdlib.h>

/*
Descricao: essa funcao troca dois elementos de um vetor de double
Parametros: um vetor de double (vetor que tera os 
elementos trocados) e dois inteiros (indice dos 
dois elementos a serem trocados)
*/
void swap (double vet[], int i, int j) {
	double aux = vet[i];
	vet[i] = vet[j];
	vet[j] = aux;
}

/* 
Descricao: essa funcao ordena um vetor de double
em ordem decrescente com o metodo selectionsort

Parametro: um vetor de double (vetor a ser ordenado)
e um inteiro (tamanho do vetor)
*/
void selectionsort (double vet[], int n) {
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