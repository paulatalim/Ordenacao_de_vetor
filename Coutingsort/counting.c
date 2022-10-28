#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* Descricao: essa funcao verifica e retorna o maior
* elemento de um vetor de inteiros
*
* Parametro: vetor de inteiros (vetor a ser verificado) 
* e um inteiro (tamanho do vetor)
*
* Retorno: um inteiro (maior elemento do vetor)
*/
int getMaior (int vet[], int n) {
    int maior = vet[0];

    for (int i = 1; i < n; i ++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }

    return maior;
}

/* 
* Descricao: essa funcao ordena um vetor de inteiros 
* em ordem crescente com o metodo counting sort
* 
* Parametro: um vetor de inteiros (vetor a ser ordenado) 
* e um inteiro (tamanho do vetor)
*/
void countingsort (int vet[], int n) {
    int tamanho_count = getMaior(vet, n) + 1;

    //Array para contar o numero de ocorrencias de cada elemento
    int count[tamanho_count];
    int ordenado[n];
    
    //Zera os elementos do vetor de contagem
    for (int i = 0; i < tamanho_count; i++) {
        count[i] = 0;
    }
    
    //Contagem de elementos iguais a i no count[i]
    for (int i = 0; i < n; i++) {
        count[vet[i]]++;
    }
    
    //Ajusta count[i] para possuir elementos iguais ou menores a i
    for (int i = 1; i < tamanho_count; i++) {
        count[i] += count[i - 1];
    }
    
    //Ordena o vetor
    for (int i = n - 1; i >= 0; i--) {
        ordenado[count[vet[i]]-1] = vet[i];
        count[vet[i]]--;
    }
}

