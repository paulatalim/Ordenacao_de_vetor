public class bubbleCharDecrescente {
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
	 * em ordem decrescente com o metodo bubblesort
	 * 
	 * Parametro: um vetor de caracteres (vetor a ser ordenado)
	 */
	public static void bubblesort (char[] vet) {
		for (int i = vet.length-1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (vet[j] < vet[j+1]) {
					swap(vet, j, j+1);
				}
			}
		}
	}
}
