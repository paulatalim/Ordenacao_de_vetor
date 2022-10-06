import java.util.Random;

public class heapSort {
    /* Trocar valores */
	public static void swap (int[] vet, int i, int j) {
		int aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
	}
    /*Exibir vetor*/
	public static void exibir_vetor (int[] vet) {
		System.out.print("{");
		
		for (int i = 0; i < vet.length-1; i ++) {
			System.out.print(vet[i] + ", " );
		}
		
		System.out.println(vet[vet.length-1] + "}");
	}

    public static void preencher_vetor (int[] vet) {
		Random rand = new Random ();
		
		for (int i = 0; i < vet.length; i ++) {
			vet[i] = rand.nextInt();
		}
	}

    public static int indice_pai (int filho) {
        int flag = filho;

        filho /= 2;

        if (flag %2 == 0) {
            filho --;
        }
        return filho;
    }

	public static void construir (int[] vet, int tam) {
        int indice = indice_pai(tam);
        int i = tam;

        while (i > 0 && vet[i] > vet[indice]) {
            swap (vet, i, indice);

            i = indice_pai(i);

            if (indice % 2 == 0) {
                indice = indice_pai(indice);
            } else {
                indice /= 2;
            }
        }
    }

	public static void reconstruir (int[] vet, int tam) {
		int filho;
		int meio = indice_pai(tam);
		int i = 0;

		//Verifica se ainda possui filhos
		while(i <= meio) {
			//Seleciona o maior filho
			if (2*i+1 == tam || vet[2*i+1] > vet[2*i+2]) {
				filho = 2*i+1;
			} else {
				filho = 2*i + 2;
			}

			//reconstroi o vetor
			if (vet[i] < vet[filho]) {
				swap (vet, i, filho);
				i = filho;
			} else {
				i = tam;
			}
		}
	}

	public static void HeapSort (int[] vet) {
		int tam;

        //Construcao do heap
        for (tam = 1; tam < vet.length; tam++) {
            construir(vet, tam);
        }

        //Ordenacao do vetor
        tam = vet.length - 1;
        while (tam > 0) {
            swap(vet, 0, tam--);
            reconstruir(vet, tam);
        }
    }

    // Execucao do programa
    public static void main (String[] args) {
        int n = 5;
        int[] vet = new int[n];

        //Preenche o vetor com novos numeros
        preencher_vetor (vet);

        //Exibe o vetor desordenado
        System.out.println("Numeros no vetor");
        exibir_vetor(vet);
        
        //Ordena vetor com HeapSort
        HeapSort(vet);

        //Exibe o vetor ordenado
        System.out.println("\nVetor ordenado com Heapsort");
        exibir_vetor(vet);
    }
}
