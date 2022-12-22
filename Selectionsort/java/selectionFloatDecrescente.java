public class selectionFloatDecrescente {
    /*
	 * Descricao: essa funcao troca dois elementos de um vetor de reais
	 * Parametros: um vetor de reais (vetor que tera os 
	 * elementos trocados) e dois inteiros (indice dos 
	 * dois elementos a serem trocados)
	 */
	public static void swap (float[] vet, int i, int j) {
		float aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
	}
    
    /* 
	 * Descricao: essa funcao ordena um vetor de reais
	 * em ordem crescente com o metodo selectionsort
	 * 
	 * Parametro: um vetor de reais (vetor a ser ordenado)
	 */
	public static void selectionsort (float[] vet) {
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
