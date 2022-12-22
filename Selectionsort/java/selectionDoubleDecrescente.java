public class selectionDoubleDecrescente {
	/*
	* Descricao: essa funcao troca dois elementos de um vetor double
	* Parametros: um vetor double (vetor que tera os 
	* elementos trocados) e dois inteiros (indice dos 
	* dois elementos a serem trocados)
	*/
	public static void swap (double[] vet, int i, int j) {
		double aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
	}
    
    /* 
	 * Descricao: essa funcao ordena um vetor double
	 * em ordem crescente com o metodo selectionsort
	 * 
	 * Parametro: um vetor double (vetor a ser ordenado)
	 */
	public static void selectionsort (double[] vet) {
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
