#include <iostream>

/*
Descricao: esse procedimento troca dois elementos de um vetor

Parametros: um vetor de caracteres (vetor que tera os 
elementos trocados) e dois inteiros (indice dos 
dois elementos a serem trocados)
*/
void swap (char vet[], int i, int j) {
    char aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

/* 
Descricao: essa funcao calcula o indice o elemento pai no heap
Parametro: um inteiro (indice do elemento filho)
Retorno: um inteiro (indice do elemento pai)
*/
int indice_pai (int filho) {
    int flag = filho;

    filho /= 2;

    if (flag % 2 == 0) {
        filho --;
    }
    return filho;
}

/* 
Descricao: esse procedimento constroi o heap de um vetor de caracteres

Parametros: um vetor de caracteres (vetor a ser construido 
a arvore heap) e um inteiro (tamanho valido do vetor)
*/
void construir (char vet[], int tam) {
    int indice = indice_pai(tam);
    int i = tam;

    while (i > 0 && vet[i] < vet[indice]) {
        swap (vet, i, indice);

        i = indice_pai(i);

        if (indice % 2 == 0) {
            indice = indice_pai(indice);
        } else {
            indice /= 2;
        }
    }
}

/*
Descricao: esse procedimento reconstroi um vetor 
de numeros inteiros com a arvore heap ja construida 

Parametros: vetor de caracteres (vetor a ser reconstruido) 
e um inteiro (tamanho valido do vetor)
*/
void reconstruir (char vet[], int tam) {
    int filho;
    int meio = indice_pai(tam);
    int i = 0;

    //Verifica se ainda possui filhos
    while(i <= meio) {
        //Seleciona o menor filho
        if (2 * i + 1 == tam || vet[2 * i + 1] < vet[2 * i + 2]) {
            filho = 2 * i + 1;
        } else {
            filho = 2 * i + 2;
        }

        //Reconstroi o vetor
        if (vet[i] > vet[filho]) {
            swap (vet, i, filho);
            i = filho;
        } else {
            i = tam;
        }
    }
}

/* 
Descricao: esse procedimento ordena um vetor com numeros 
inteiros em ordem decrescente com o metodo HeapSort

Parametro: um vetor de caracteres (vetor a ser ordenado)
*/
void heapsort (char vet[], int n) {
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