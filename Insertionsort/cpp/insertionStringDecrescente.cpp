#include <iostream>

using namespace std;

/* 
Descricao: essa funcao ordena um vetor de inteiros
em ordem decrescente com o metodo insertionsort

Parametro: um vetor de inteiros (vetor a ser ordenado)
*/
void insertionsort (string vet[]) {
	for (int i = 1; i < vet->length(); i++) {
		string temp = vet[i];
		int j = i - 1;

		while (j>=0 && vet[j].compare(temp) < 0) {
			vet[j+1] = vet[j];
			j--;
		}

		vet[j+1] = temp;
	}
}

