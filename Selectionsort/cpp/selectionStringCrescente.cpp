#include <iostream>

using namespace std;

/*
Descricao: essa funcao troca dois elementos de um vetor de string
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
Descricao: essa funcao ordena um vetor de string
em ordem alfabetica com o metodo selectionsort

Parametro: um vetor de string (vetor a ser ordenado)
*/
void selectionsort (string vet[]) {
	for (int i = 0; i < vet->length()-1; i ++) {
		int menor = i;

		for (int j = i + 1; j < vet->length(); j++) {
			if (vet[menor].compare(vet[j]) > 0) {
				menor = j;
			}
		}

		if (i != menor) {
			swap(vet, i, menor);
		}
	}
}