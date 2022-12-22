public class selectionCharDecrescente {
	/*
	* Descricao: essa funcao troca dois elementos de um vetor de caracteres
	* Parametros: um vetor de caracteres (vetor que tera os 
	* elementos trocados) e dois inteiros (indice dos 
	* dois elementos a serem trocados)
	*/
	public static void swap (char[] vet, int i, int j) {
		char aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
	}

	/* 
	* Descricao: essa funcao ordena um vetor de caracteres
	* em ordem decrescente com o metodo selectionsort
	* 
	* Parametro: um vetor de caracteres (vetor a ser ordenado)
	*/
	public static void selectionsort (char[] vet) {
		for (int i = 0; i < vet.length-1; i ++) {
			int maior = i;

			for (int j = i + 1; j < vet.length; j++) {
				if (vet[maior] < vet[j]) {
					maior = j;
				}
			}

			if (i != maior) {
				swap(vet, i, maior);
			}
		}
	}
}
