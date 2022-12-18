public class bubbleStringDecrescente {
	/*
	 * Descricao: essa funcao troca dois elementos de um vetor com strings
	 * Parametros: um vetor de strings (vetor que tera os 
	 * elementos trocados) e dois inteiros (indice dos 
	 * dois elementos a serem trocados)
	 */
	public static void swap (String[] vet, int i, int j) {
		String aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
	}

	/* 
	 * Descricao: essa funcao ordena um vetor de string 
	 * em ordem decrescente com o metodo bubblesort
	 * 
	 * Parametro: um vetor de string (vetor a ser ordenado)
	 */
	public static void bubblesort (String[] vet) {
		for (int i = vet.length-1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (vet[j].toUpperCase().compareTo(vet[j+1].toUpperCase()) < 0) {
					swap(vet, j, j+1);
				}
			}
		}
	}
}
