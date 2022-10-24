#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Trocar valores */
void swap (int vet[], int i, int j) {
    int aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

/*Exibir vetor*/
void exibir_vetor (int vet[], int n) {
    printf("{");
    
    for (int i = 0; i < n-1; i ++) {
        printf("%d, ", vet[i]);
    }
    
    println("%d}", vet[n-1]);
}

/*Preencher vetor*/
void preencher_vetor (int vet[], int n) {
    srand(time(NULL));
    
    for (int i = 0; i < n; i ++) {
        vet[i] = rand() % 10;
    }
}

/*Ordena com quick sort*/
void quicksort (int vet[], int esq, int dir) {
    int i, j, posicao;
    int pivo;
    i = esq;
    j = dir;
    posicao = (esq + dir) / 2;
    pivo = vet[posicao];

    while (i <= j) {
        while (vet[i] < pivo) {
            i ++;
        }

        while (vet[j] > pivo) {
            j --;
        }

        if (i<=j) {
            //Troca dos valores no vetor
            swap(vet, i, j);
            i++;
            j--;
        }
    }
    
    if (esq < j) {
        quicksort(vet, esq, j);
    }

    if (i < dir) {
        quicksort(vet, i, dir);
    }
}
int main () {
    int n = 5;
    int vet[n];

    printf("*** ORDENANDO VETOR COM QUICKSORT ***\n");

    //Preenche o vetor com novos numeros
    preencher_vetor (vet, n);

    //Exibe o vetor desordenado
    printf("Numeros no vetor: ");
    exibir_vetor(vet, n);

    //Ordena vetor com QuickSort
    int dir = n-1;
    quicksort(vet, 0, dir);

    //Exibe o vetor ordenado
    printf("\nVetor ordenado com Quicksort: ");
    exibir_vetor(vet, n);

    return 0;
}