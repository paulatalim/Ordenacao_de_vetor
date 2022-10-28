public class quickString {
	/*
	 * Descricao: essa funcao troca dois elementos de um vetor double
	 * Parametros: um vetor double (vetor que tera os 
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
	 * em ordem alfabetica com o metodo quicksort
	 * 
	 * Parametro: um vetor de string (vetor a ser ordenado) 
	 * e dois inteiros (indice do primeiro e do ultimo elemento do vetor)
	 */
    public static void quicksort (String[] vet, int esq, int dir) {
		int i, j, posicao;
		String pivo;

		i = esq;
		j = dir;
		posicao = (esq + dir) / 2;
		pivo = new String (vet[posicao]);

		while (i <= j) {
			//Verifica se o elemento a esquerda eh menor que o pivo
			while (vet[i].toUpperCase().compareTo(pivo.toUpperCase()) < 0) {
				i ++;
			}

			//Verifica se os elementos a direita eh maior que o pivo
			while (vet[j].toUpperCase().compareTo(pivo.toUpperCase()) > 0) {
				j --;
			}

			//Realiza a troca de elementos
			if (i<=j) {
				//Troca dos valores no vetor
				swap(vet, i, j);
				i++;
				j--;
			}
		}
		
		//Dividindo para conquistar
		//Chamada recursiva com a primeira metade do vetor
		if (esq < j) {
			quicksort(vet, esq, j);
		}

		//Chamada recursiva com a segunda metade do vetor
		if (i < dir) {
			quicksort(vet, i, dir);
		}
	}
}