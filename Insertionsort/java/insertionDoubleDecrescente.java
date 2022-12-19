public class insertionDoubleDecrescente {
	/* 
	* Descricao: essa funcao ordena um vetor double
	* em ordem decrescente com o metodo insertionsort
	* 
	* Parametro: um vetor double (vetor a ser ordenado)
	*/
	public static void insertionsort (double[] vet) {
		for (int i = 1; i < vet.length; i++) {
			double temp = vet[i];
			int j = i - 1;

			while (j>=0 && vet[j] < temp) {
				vet[j+1] = vet[j];
				j--;
			}

			vet[j+1] = temp;
		}
	}
}
