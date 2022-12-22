# Mergesort
<!-- 
## Funcionamento
-->

## Funcionalidades
Nesse diretório há códigos, os quais executam o mergesort, ordenando vários tipos de vetor em 3 linguagens de programação diferentes.

<details>
<summary>Ordenando vetor de inteiros</summary>

### *Ordem crescente*
- [C](./c/mergeIntCrescente.c)
- [C++](./cpp/mergeIntCrescente.cpp)
- [Java](./java/mergeIntCrescente.java)

### *Ordem decrescente*
- [C](./c/mergeIntDecrescente.c)
- [C++](./cpp/mergeIntDecrescente.cpp)
- [Java](./java/mergeIntDecrescente.java)
</details>

<details>
<summary>Ordenando vetor Float</summary>

### *Ordem crescente*
- [C](./c/mergeFloatCrescente.c)
- [C++](./cpp/mergeFloatCrescente.cpp)
- [Java](./java/mergeFloatCrescente.java)

### *Ordem decrescente*
- [C](./c/mergeFloatDecrescente.c)
- [C++](./cpp/mergeFloatDecrescente.cpp)
- [Java](./java/mergeFloatDecrescente.java)
</details>

<details>
<summary>Ordenando vetor Double</summary>

### *Ordem crescente*
- [C](./c/mergeDoubleCrescente.c)
- [C++](./cpp/mergeDoubleCrescente.cpp)
- [Java](./java/mergeDoubleCrescente.java)

### *Ordem decrescente*
- [C](./c/mergeDoubleDecrescente.c)
- [C++](./cpp/mergeDoubleDecrescente.cpp)
- [Java](./java/mergeDoubleDecrescente.java)
</details>

<details>
<summary>Ordenando vetor de caracteres</summary>

### *Ordem crescente*
- [C](./c/mergeCharCrescente.c)
- [C++](./cpp/mergeCharCrescente.cpp)
- [Java](./java/mergeCharCrescente.java)

### *Ordem decrescente*
- [C](./c/mergeCharDecrescente.c)
- [C++](./cpp/mergeCharDecrescente.cpp)
- Java (em breve)
</details>

<details>
<summary>Ordenando vetor de Strings</summary>

### *Ordem crescente*
- C++ (em breve)
- [Java](./java/mergeStringCrescente.java)

### *Ordem decrescente*
- C++ (em breve)
- [Java](./java/mergeStringDecrescente.java)
</details>

## Implantação do algoritmo

### 1º Passo

Para implementar o método mergesort no seu código primeiro copie e cole as funções e procedimentos

- `void intercalar (int[] vet, int esq, int meio, int dir)`
- `void merge (int vet[], int esq, int dir)`
- `void mergesort (int[] vet)`

### 2º Passo

Por fim, para ordenar seu array chame pela função `mergesort()`, passando por parâmentto o vetor que deseja ordenar

``` 
mergesort(nome_do_vetor); 
```

> 💡 Observação
>
> Os argumentos das funções podem mudar de acordo com a liguagem de programação utilizada.


## Como usar
No lugar onde deseja ordenar o vetor chame pela função mergesort passando por parametro o vetor que deseja ser ordenado

```
mergesort(vetor_a_ser_ordenado);
```

## Modo desenvolvedor
Para a execussão dos códigos é aconselhável que os códigos em [C](./c) e [C++](./cpp) sejam executados na [IDE Code::Blocks](https://www.codeblocks.org/) ou no [Visual Studio Code](https://code.visualstudio.com/) (caso possua as extensões adequadas instaladas) e os códigos em [Java](./java) na [IDE Eclipse](https://www.eclipse.org/), no cmd ou no [Visual Studio Code](https://code.visualstudio.com/).
