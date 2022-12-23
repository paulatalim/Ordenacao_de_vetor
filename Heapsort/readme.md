# HeapSort
<!-- 
## Funcionamento
Para a explicação do funcionamento desse metodo de ordenando, se foi separado um video do youtube

[![Captura de tela 2022-10-24 000519.png](Captura%20de%20tela%202022-10-24%20000519.png)](https://youtu.be/z_MZIyu6UZ4) -->

## Funcionalidades
Nesse diretório há códigos, os quais executam o heapsort, ordenando vários tipos de vetor em 3 linguagens de programação diferentes.

<details>
<summary>Ordenando vetor de inteiros</summary>

### *Ordem crescente*
- [C](./c/heapsortIntCrescente.c)
- [C++](./cpp/heapsortIntCrescente.cpp)
- [Java](./java/heapsortIntCrescente.java)

### *Ordem decrescente*
- [C](./c/heapsortIntDecrescente.c)
- [C++](./cpp/heapsortIntDecrescente.cpp)
- [Java](./java/heapsortIntDecrescente.java)
</details>

<details>
<summary>Ordenando vetor Float</summary>

### *Ordem crescente*
- [C](./c/heapsortFloatCrescente.c)
- [C++](./cpp/heapsortFloatCrescente.cpp)
- [Java](./java/heapsortFloatCrescente.java)

### *Ordem decrescente*
- [C](./c/heapsortFloatDecrescente.c)
- [C++](./cpp/heapsortFloatDecrescente.cpp)
- [Java](./java/heapsortFloatDecrescente.java)
</details>

<details>
<summary>Ordenando vetor Double</summary>

### *Ordem crescente*
- [C](./c/heapsortDoubleCrescente.c)
- [C++](./cpp/heapsortDoubleCrescente.cpp)
- [Java](./java/heapsortDoubleCrescente.java)

### *Ordem decrescente*
- [C](./c/heapsortDoubleDecrescente.c)
- [C++](./cpp/heapsortDoubleDecrescente.cpp)
- [Java](./java/heapsortDoubleDecrescente.java)
</details>

<details>
<summary>Ordenando vetor de caracteres</summary>

### *Ordem crescente*
- [C](./c/heapsortCharCrescente.c)
- [C++](./cpp/heapsortCharCrescente.cpp)
- [Java](./java/heapsortCharCrescente.java)

### *Ordem decrescente*
- [C](./c/heapsortCharDecrescente.c)
- [C++](./cpp/heapsortCharDecrescente.cpp)
- [Java](./java/heapsortCharDecrescente.java)
</details>

<details>
<summary>Ordenando vetor de Strings</summary>

### *Ordem crescente*
- C++ (em breve)
- [Java](./java/heapsortStringCrescente.java)

### *Ordem decrescente*
- C++ (em breve)
- [Java](./java/heapsortStringDecrescente.java)
</details>

## Implantação do algoritmo

### 1º Passo

Para implementar o método heapsort no seu código primeiro copie e cole as funções e procedimentos

- `void swap (int vet[], int i, int j)`
- `int indice_pai (int filho)`
- `void construir (int vet[], int tam)`
- `void reconstruir (int vet[], int tam)`
- `void heapsort (int vet[])`

### 2º Passo

Por fim, para ordenar seu array chame pela função `heapsort()`, passando por parâmentto o vetor que deseja ordenar

``` 
heapsort(nome_do_vetor); 
```

> 💡 Observação
>
> Os argumentos das funções podem mudar de acordo com a liguagem de programação utilizada.


## Modo desenvolvedor

Para a execussão dos códigos é aconselhável que os códigos em [C](./c) e [C++](./cpp) sejam executados na [IDE Code::Blocks](https://www.codeblocks.org/) ou no [Visual Studio Code](https://code.visualstudio.com/) (caso possua as extensões adequadas instaladas) e os códigos em [Java](./java) na [IDE Eclipse](https://www.eclipse.org/), no cmd ou no [Visual Studio Code](https://code.visualstudio.com/).
