public class insertionCharCrescente {
	/* 
	* Descricao: essa funcao ordena um vetor de caracteres
	* em ordem alfabetica com o metodo insertionsort
	* 
	* Parametro: um vetor de caracteres (vetor a ser ordenado)
	*/
	public static void insertionsort (char[] vet) {
		for (int i = 1; i < vet.length; i++) {
			char temp = vet[i];
			int j = i - 1;

			while (j>=0 && vet[j] > temp) {
				vet[j+1] = vet[j];
				j--;
			}

			vet[j+1] = temp;
		}
	}
}
