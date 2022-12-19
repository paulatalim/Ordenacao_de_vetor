#include <stdio.h>
#include <stdlib.h>

/* 
Descricao: essa funcao ordena um vetor double
em ordem crescente com o metodo insertionsort

Parametro: um vetor double (vetor a ser ordenado)
e um inteiro (tamanho do vetor)
*/
void insertionsort (double vet[], int n) {
	for (int i = 1; i < n; i++) {
		double temp = vet[i];
		int j = i - 1;

		while (j>=0 && vet[j] > temp) {
			vet[j+1] = vet[j];
			j--;
		}

		vet[j+1] = temp;
	}
}

