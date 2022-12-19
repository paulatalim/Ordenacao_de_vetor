/* 
Descricao: essa funcao ordena um vetor de inteiros
em ordem decrescente com o metodo insertionsort

Parametro: um vetor de inteiros (vetor a ser ordenado)
e um inteiro (tamanho do vetor)
*/
void insertionsort (int vet[], int n) {
	for (int i = 1; i < n; i++) {
		int temp = vet[i];
		int j = i - 1;

		while (j>=0 && vet[j] < temp) {
			vet[j+1] = vet[j];
			j--;
		}

		vet[j+1] = temp;
	}
}

