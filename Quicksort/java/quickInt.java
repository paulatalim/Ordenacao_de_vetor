import java.util.Random;

public class quickInt {
	/*
	 * Descricao: essa funcao troca dois elementos de um vetor de inteiros
	 * Parametros: um vetor de inteiros (vetor que tera os 
	 * elementos trocados) e dois inteiros (indice dos 
	 * dois elementos a serem trocados)
	 */
	public static void swap (int[] vet, int i, int j) {
		int aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
	}

	/* 
	 * Descricao: essa funcao ordena um vetor de inteiros 
	 * em ordem crescente com o metodo quicksort
	 * 
	 * Parametro: um vetor de inteiros (vetor a ser ordenado) 
	 * e dois inteiros (indice do primeiro e do ultimo elemento do vetor)
	 */
	public static void quick (int[] vet, int esq, int dir) {
		int i, j, posicao;
		int pivo;
		
		i = esq;
		j = dir;
		posicao = (esq + dir) / 2;
		pivo = vet[posicao];

		while (i <= j) {
			while (vet[i] < pivo) {
				i ++;
			}

			while (vet[j] > pivo) {
				j --;
			}

			if (i<=j) {
				//Troca dos valores no vetor
				swap(vet, i, j);
				i++;
				j--;
			}
		}
		
		if (esq < j) {
			quick (vet, esq, j);
		}

		if (i < dir) {
			quick (vet, i, dir);
		}
	}

	/*
	* Descricao: essa funcao chama pela funcao quick 
	* para ordena o vetor em ordem crescente, possuindo 
	* argumentos mais simplificados
	* 
	* Parametro: um vetor de inteiros (vetor a ser ordenado) 
	*/
	public static void quicksort (int[] vet) {
		quick (vet, 0, vet.length-1);
	}
}