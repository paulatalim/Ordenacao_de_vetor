import java.util.Random;
import java.util.Scanner;

public class lista5 {
	/* Trocar valores */
	public static void swap (double[] vet, int i, int j) {
		double aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
	}
	
	/*Exibir vetor*/
	public static void exibir_vetor (double[] vet) {
	    int cont = 0;
		System.out.print("{");
		
		for (int i = 0; i < vet.length-1; i ++) {
			System.out.print(vet[i] + ", " );
			cont++;
			if (cont%5 == 0) {
			    System.out.println();
			}
		}
		
		System.out.println(vet[vet.length-1] + "}");
	}
	
	/*Preencher vetor*/
	public static void preencher_vetor (double[] vet) {
		Random rand = new Random ();
		
		for (int i = 0; i < vet.length; i ++) {
			vet[i] = rand.nextDouble();
		}
	}
	
	/*Ordena com quick sort*/
	public static void quicksort (double[] vet, int esq, int dir) {
		int i, j, posicao;
		double pivo;
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
		    
			quicksort(vet, esq, j);
		}

		if (i < dir) {
			quicksort(vet, i, dir);
		}
	}
	
	/*** HEAP SORT ***/
	public static int indice_pai (int filho) {
        int flag = filho;

        filho /= 2;

        if (flag %2 == 0) {
            filho --;
        }
        return filho;
    }

	public static void construir (double[] vet, int tam) {
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

	public static void reconstruir (double[] vet, int tam) {
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
	
	public static void heapSort (double[] vet) {
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
    
	public static void main(String[] args) {
	    int tam_vet = 40000;
	    int opcao, dir;
		double[] vet = new double[tam_vet];
		long tempoInicial, tempoFinal;
		
		Scanner scanner = new Scanner(System.in);
		
		//Repete o programa
		do {
			//Validacao da resposta
			do {
			    //Exibe o menu
				System.out.println("\n\nDigite o numero para executar\n"+
									"[1] - Exercicio 1 e 2: preencher um vetor de 40.000 posicoes e calcular tempo de execussao\n" +
									"[2] - Exercicio 3: Ordenar vetor com QuickSort\n" +
									"[3] - Exercicio 4: Ordenar vetor com HeapSort\n" +
									"[4] - Exercicio 5: Comparacao dos metodos de ordenacao");
				//Entrada da opcao
				System.out.print("Sua opcao: ");
				opcao = scanner.nextInt();
				
				//Quebra de linha
				System.out.println("\n");
			} while (opcao < 0 || opcao > 4);			
			
			//Execucao dos exercicios
			switch (opcao) {
				case 1:
					//Calculo do tempo inicial da execussao da funcao
					tempoInicial = System.currentTimeMillis();

					//Preenchendo o vetor
					preencher_vetor(vet);

					//Exibe resultados
					System.out.println("Numeros no vetor");
					exibir_vetor(vet);

					//Calculo do tempo final da execussao da funcao
					tempoFinal = System.currentTimeMillis();
					
					System.out.printf("Tempo decorrido: %.5f s%n", (tempoFinal - tempoInicial)/1000d);
					break;
			
				case 2: 
					//Preenche o vetor com novos numeros
					preencher_vetor (vet);

					//Exibe o vetor desordenado
					System.out.println("Numeros no vetor");
					exibir_vetor(vet);

					//Ordena vetor com QuickSort
					dir = vet.length-1;
					quicksort(vet, 0, dir);

					//Exibe o vetor ordenado
					System.out.println("\n*** Vetor ordenado com Quicksort ***");
					exibir_vetor(vet);
					break;
					
				case 3:
					//Preenche o vetor com novos numeros
					preencher_vetor (vet);

					//Exibe o vetor desordenado
					System.out.println("Numeros no vetor");
					exibir_vetor(vet);
					
					//Ordena vetor com HeapSort
					heapSort(vet);

					//Exibe o vetor ordenado
					System.out.println("\n*** Vetor ordenado com Heapsort ***");
					exibir_vetor(vet);
					break;

				case 4:
					System.out.println("\n*** Calculo do tempo de execucao dos metodos ***");

					//Inicializa a variavel
					dir = vet.length-1;
					
					//Calculo do tempo para executar o quicksort
					tempoInicial = System.currentTimeMillis();
					for (int i = 0; i < 10; i++) {
						//Preenche o vetor com novos numeros
						preencher_vetor (vet);

						//Ordena o vetor
						quicksort(vet, 0, dir);
					}
					tempoFinal = System.currentTimeMillis();
					
					//Armazena e exibe o tempo do quicksort
					double tempo_quicksort = (tempoFinal - tempoInicial)/1000;
					System.out.printf("Tempo decorrido do quicksort: %.5f s%n", (tempoFinal - tempoInicial)/1000d);
					
					//Calculo do tempo para executar o heapsort
					tempoInicial = System.currentTimeMillis();
					for (int i = 0; i < 10; i++) {
						//Preenche o vetor com novos numeros
						preencher_vetor (vet);

						//Ordena o vetor
						heapSort(vet);
					}
					tempoFinal = System.currentTimeMillis();
					
					//Armazena e exibe o tempo do heapsort
					double tempo_heapsort = (tempoFinal - tempoInicial)/1000;
					System.out.printf("Tempo decorrido do heapsort: %.5f s%n", (tempoFinal - tempoInicial)/1000d);
					
					//Comparacao dos tempos
					if (tempo_quicksort == tempo_heapsort) {
						System.out.println("Conclusao: os metodos tem a mesma eficiencia, por terem tempos de execusao iguais");
					
					} else if (tempo_quicksort < tempo_heapsort) {
						System.out.println("Conclusao: o metodo quicksort eh mais eficiente, por ter um tempo de execucao menor");
					
					} else {
						System.out.println("Conclusao: o metodo heapsort eh mais eficiente, por ter um tempo de execucao menor");
					}
					break;
					
				default:
				    System.out.println("Obrigada, volte sempre!");
					break;
			}

		} while (opcao != 0);
		
        scanner.close();
	}
}

