public class bublle {
    /*
	 * Descricao: essa funcao troca dois elementos de um vetor double
	 * Parametros: um vetor double (vetor que tera os 
	 * elementos trocados) e dois inteiros (indice dos 
	 * dois elementos a serem trocados)
	 */
	public static void swap (int[] vet, int i, int j) {
		int aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
	}
    
    /* 
	 * Descricao: essa funcao ordena um vetor de string 
	 * em ordem alfabetica com o metodo bubblesort
	 * 
	 * Parametro: um vetor de string (vetor a ser ordenado)
	 */
	public static void bubblesort (int[] vet) {
		for (int i = vet.length-1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (vet[j] > vet[j+1]) {
					swap(vet, j, j+1);
				}
			}
		}
	}
}
