public class selectionInt {
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
	 * em ordem alfabetica com o metodo selectionsort
	 * 
	 * Parametro: um vetor de string (vetor a ser ordenado)
	 */
	public static void selectionsort (int[] vet) {
		for (int i = 0; i < vet.length-1; i ++) {
			int menor = i;

			for (int j = i + 1; j < vet.length; j++) {
				if (vet[menor] > vet[j]) {
					menor = j;
				}
			}

			if (i != menor) {
				swap(vet, i, menor);
			}
		}
	}
}