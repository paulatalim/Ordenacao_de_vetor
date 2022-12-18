public class insertionInt {
	/* 
	* Descricao: essa funcao ordena um vetor de inteiros
	* em ordem crescente com o metodo insertionsort
	* 
	* Parametro: um vetor de inteiros (vetor a ser ordenado)
	*/
	public static void insertionsort (int[] vet) {
		for (int i = 1; i < vet.length; i++) {
			int temp = vet[i];
			int j = i - 1;

			while (j>=0 && vet[j] > temp) {
				vet[j+1] = vet[j];
				j--;
			}

			vet[j+1] = temp;
		}
	}
}
