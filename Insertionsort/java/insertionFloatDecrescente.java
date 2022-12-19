public class insertionFloatDecrescente {
	/* 
	* Descricao: essa funcao ordena um vetor de reais
	* em ordem decrescente com o metodo insertionsort
	* 
	* Parametro: um vetor de reais (vetor a ser ordenado)
	*/
	public static void insertionsort (float[] vet) {
		for (int i = 1; i < vet.length; i++) {
			float temp = vet[i];
			int j = i - 1;

			while (j>=0 && vet[j] < temp) {
				vet[j+1] = vet[j];
				j--;
			}

			vet[j+1] = temp;
		}
	}
}
