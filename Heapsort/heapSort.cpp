#include <iostream>

using namespace std;

/* Trocar valores */
void swap (int vet[], int i, int j) {
    int aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

/*Exibir vetor*/
void exibir_vetor (int vet[], int n) {
    //Inicio do vetor
    printf("{");
    
    for (int i = 0; i < n-1; i ++) {
        //Numeros no vetor
        printf("%d, ", vet[i]);
    }
    
    //Terminando o vetor
    printf("%d}", vet[n-1]);
}

void preencher_vetor (int vet[], int tam) {
    //Preenchendo vetor com numeros aleatorios
    for (int i = 0; i < tam; i ++) {
        vet[i] = rand() % 10;
    }
}

int indice_pai (int filho) {
    int flag = filho;

    filho /= 2;

    if (flag %2 == 0) {
        filho --;
    }
    return filho;
}

void construir (int vet[], int tam) {
    int indice = indice_pai(tam);
    int i = tam;

    while (i > 0 && vet[i] > vet[indice]) {
        swap (vet, i, indice);

        i = indice_pai(i);

        if (indice % 2 == 0) {
            indice = indice_pai(indice);
        } else {
            indice /= 2;
        }
    }
}

void reconstruir (int vet[], int tam) {
    int filho;
    int meio = indice_pai(tam);
    int i = 0;

    //Verifica se ainda possui filhos
    while(i <= meio) {
        //Seleciona o maior filho
        if (2*i+1 == tam || vet[2*i+1] > vet[2*i+2]) {
            filho = 2*i+1;
        } else {
            filho = 2*i + 2;
        }

        //reconstroi o vetor
        if (vet[i] < vet[filho]) {
            swap (vet, i, filho);
            i = filho;
        } else {
            i = tam;
        }
    }
}

void heapSort (int vet[], int n) {
    int tam;

    //Construcao do heap
    for (tam = 1; tam < n; tam++) {
        construir(vet, tam);
    }

    //Ordenacao do vetor
    tam = n - 1;
    while (tam > 0) {
        swap(vet, 0, tam--);
        reconstruir(vet, tam);
    }
}

int main () {
    int n = 5;
    int vet[n];
    
    printf ("*** ORDENANDO VETOR COM HEAPSORT ***\n");

    //Preenche o vetor com novos numeros
    preencher_vetor (vet, n);

    //Exibe o vetor desordenado
    printf("Numeros no vetor: ");
    exibir_vetor(vet, n);
    
    //Ordena vetor com HeapSort
    heapSort(vet, n);

    //Exibe o vetor ordenado
    printf("\nVetor ordenado com Heapsort: ");
    exibir_vetor(vet, n);

    printf ("\n\n");

    return 0;
}