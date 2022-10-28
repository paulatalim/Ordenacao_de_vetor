#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getMaior (int vet[], int n) {
    int maior = vet[0];

    for (int i = 1; i < n; i ++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }

    return maior;
}

void countingsort (int vet[], int n) {
    int tamanho_count = getMaior(vet, n) + 1;
    //Array para contar o numero de ocorrencias de cada elemento
    int count[tamanho_count];
    int ordenado[n];
    
    //Inicializar cada posicao do array de contagem
    for (int i = 0; i < tamanho_count; i++) {
        count[i] = 0;
    }
    
    //Agora, o count[i] contem o numero de elemento iguais a i
    for (int i = 0; i < n; i++) {
        count[vet[i]]++;
    }
    
    //Agora, o count[i] contem o numero de elemento menores ou iguais a i
    for (int i = 1; i < tamanho_count; i++) {
        count[i] += count[i - 1];
    }
    
    //Ordenando
    for (int i = n - 1; i >= 0; i--) {
        ordenado[count[vet[i]]-1] = vet[i];
        count[vet[i]]--;
    }
}

