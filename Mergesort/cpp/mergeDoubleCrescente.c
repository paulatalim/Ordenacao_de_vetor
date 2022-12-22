#include <stdlib.h>
#include <stdio.h>

/*
Descricao: apartir de um vetor double, essa 
funcao subdivide o vetor em outros dois e intercala 
seus elementos entre si no vetor principal

Parametros: um vetor double (vetor a ser intercalado) e 
3 inteiros (o primeiro, o ultimo e o indice do elemento do 
meio do vetor)
*/
void intercalar (double vet[], int esq, int meio, int dir) {
	int nEsq = (meio - esq) + 1;
	int nDir = dir - meio;

	double arrayEsq[nEsq+1];
	double arrayDir[nDir+1];

	//Sentinela no final dos dois arrays
	arrayEsq[nEsq] = 0x7FFFFFFF;
	arrayDir[nDir] = 0x7FFFFFFF;

	int iEsq, iDir, i;

	//Inicializar primeiro subarray
	for (iEsq = 0; iEsq < nEsq; iEsq++){
		arrayEsq[iEsq] = vet[esq+iEsq];
	}

	//Inicializar segundo subarray
	for (iDir = 0; iDir < nDir; iDir++){
		arrayDir[iDir] = vet[(meio + 1) + iDir];
	}

	//Intercalacao propriamente dita
	for (iEsq = 0, iDir = 0, i = esq; i <= dir; i++){
		if (arrayEsq[iEsq] <= arrayDir[iDir]) {
			vet[i] = arrayEsq[iEsq];
			iEsq++;
		} else {
			vet[i] = arrayDir[iDir];
			iDir++;
		}
	}
}

/* 
Descricao: essa funcao ordena um vetor double 
em ordem crescente com o metodo mergesort

Parametro: um vetor double (vetor a ser ordenado)
e dois inteiros (indice do primeiro e do ultimo elemento do vetor)
*/
void merge (double vet[], int esq, int dir) {
	if (esq < dir) {
		int meio = (esq + dir)/2;
		merge(vet, esq, meio);
		merge(vet, meio + 1, dir);
		intercalar(vet, esq, meio, dir);
	}
}

/*
Descricao: essa funcao chama pela funcao merge 
para ordena o vetor em ordem crescente, possuindo 
argumentos mais simplificados

Parametro: um vetor double (vetor a ser ordenado)
e um inteiro (tamanho do vetor)
*/
void mergesort (double vet[], int n) {
	merge (vet, 0, n-1);
}