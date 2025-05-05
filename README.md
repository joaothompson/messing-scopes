# Matrix Line Ordering Exercise
Matrix Line Ordering Exercise

# Identificação
Nome: <Seu Nome?>

Matrícula: <Sua Matrícula>

# Instruções
Neste exercício você deve escrever uma função que recebe um número inteiro n (indicando a ordem da matriz), uma sequência de n^2 números reais (a_1 a_2 ... a_n\*n - n linhas com n valores cada). O seu algoritmo precisa trocar as linhas de forma que a primeira coluna esteja ordenada de forma crescente (em caso de igualdade, os valores das próximas colunas devem ser considerados, a linha com o menor número na proxíma coluna deve vir antes).

1. Altere este Readme para conter o seu nome e matrícula.
2. Modifique a função dentro do arquivo student.c

# Exemplos
1. Exemplo 1\
Entrada:\
3\
2.0 4.0 6.0\
7.0 8.0 9.0\
1.0 3.0 5.0

O seu objetivo é fazer as trocas de linhas e retorna-la ordenada, Saída:

1.0 3.0 5.0\
2.0 4.0 6.0\
7.0 8.0 9.0

2. Exemplo 2\
Entrada:

4\
1.0 2.0 3.0 4.0\
5.0 6.0 7.0 8.0\
9.0 0.0 1.0 2.0\
3.0 4.0 5.0 6.0\

Saída:

1.0 2.0 3.0 4.0\
3.0 4.0 5.0 6.0\
5.0 6.0 7.0 8.0\
9.0 0.0 1.0 2.0

3. Exemplo 3\
Entrada:

4\
1.0 2.0 3.0 4.0\
5.0 6.0 7.0 8.0\
1.0 -1.0 1.0 2.0\
3.0 4.0 5.0 6.0\

Saída:

1.0 -1.0 1.0 2.0\
1.0 2.0 3.0 4.0\
3.0 4.0 5.0 6.0\
5.0 6.0 7.0 8.0


