# Exercicios-de-Lista-Ativ3

<h2>Problema 3</h2>

O problema da máxima cadeia. Elabore um programa que receba uma cadeias de DNA. Cada posição da cadeia deve conter um códon, ou seja, uma triade de nucleotídeos → T,
A, G, C. Feito isso, leia de um arquivo uma sequência de nucleotídios (i.e., ACGTGGCTCTCTAACGTACGTACGTACGGGGTTATATTCGAT) e tente identificar a maior cadeia da lista que se relaciona a essa entrada.


<h2>Resolução</h2>

A resolução deste problema consiste em:
<li>Ler dois arquivos com formato ".txt", ambos arquivos terão uma cadeia de códons, porém no primeiro documento possuirá uma cadeia maior do que no segundo. Os dois serão agrupados na lista em grupos de 3;</li>
<li>Após abrir, ler e vericar se as listas estão vazias, um método chamado "Compara" é chamado para verificar se na lista 2 que armazena a segunda entrada possui cadeias em comum com a entrada 1;</li>
<li>A saída do programa é o resultado da busca mostrando as cadeias que cada lista tem em comum.</li>

<h2>Compilação e Execução</h2>

O progama disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
