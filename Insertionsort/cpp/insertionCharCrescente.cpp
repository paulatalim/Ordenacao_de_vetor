#include <iostream>

/* 
Descricao: essa funcao ordena um vetor de caracteres
em ordem alfabetica com o metodo insertionsort

Parametro: um vetor de caracteres (vetor a ser ordenado)
e um inteiro (tamanho do vetor)
*/
void insertionsort (char vet[], int n) {
	for (int i = 1; i < n; i++) {
		char temp = vet[i];
		int j = i - 1;

		while (j>=0 && vet[j] > temp) {
			vet[j+1] = vet[j];
			j--;
		}

		vet[j+1] = temp;
	}
}

