# Code-Challenges
Este repositório é um registro das minhas soluções para diversos desafios de programação de competições e exercícios de treinamento. Aqui, você encontrará soluções para problemas que envolvem algoritmos, estruturas de dados e lógica de programação.

## Copa do Mundo (OBI 2010)
Este ano tem Copa do Mundo! O país inteiro se prepara para torcer para a equipe canarinho conquistar mais um título, tornando-se hexacampeã.

Na Copa do Mundo, depois de uma fase de grupos, dezesseis equipes disputam a Fase Final, composta de quinze jogos eliminatórios. A figura abaixo mostra a tabela de jogos da Fase Final:
![alt text](https://neps.academy/_ipx/_/https://api.neps.academy/image/1358.png)

Dados os resultados dos quinze jogos da Fase Final, escreva um programa que determine a equipe campeã.

### Entrada
A entrada é composta de quinze linhas, cada uma contendo o resultado de um jogo. A primeira linha contém o resultado do jogo de número 1, a segunda linha o resultado do jogo de número 2, e assim por diante. O resultado de um jogo é representado por dois números inteiros M e N separados por um espaço em branco, indicando respectivamente o número de gols da equipe representada à esquerda e à direita na tabela de jogos.

### Saída
Seu programa deve imprimir uma única linha, contendo a letra identificadora da equipe campeã.

[Clique aqui para ver mais](https://neps.academy/br/exercise/276)

---

## A. Tom Riddle's Diary

Harry Potter tem a missão de destruir as Horcruxes de Você-Sabe-Quem. A primeira Horcrux que ele encontrou na Câmara Secreta é o diário de Tom Riddle. O diário estava com Ginny e a forçou a abrir a Câmara Secreta. Harry quer conhecer as diferentes pessoas que já possuíram o diário para ter certeza de que não estão sob sua influência.

Ele tem nomes de n pessoas que possuíam o diário em ordem. É preciso informar, para cada pessoa, se ela possuía o diário em algum momento anterior ou não.

Formalmente, para um nome si na i-ésima linha, imprima "YES" (sem aspas) se existir um índice j tal que si =  sj e j < i , caso contrário, imprima "NO" (sem aspas).

### Entrada
A primeira linha de entrada contém um inteiro n(1 ≤ n ≤ 100) — o número de nomes na lista.

As próximas n linhas contêm, cada uma, uma string si , consistindo em letras minúsculas do inglês. O comprimento de cada string está entre 1 e 100.

### Saída
Produza n linhas, cada uma contendo "YES" ou "NO" (sem aspas), dependendo se esta string já estava presente no fluxo ou não.

Você pode imprimir cada letra em qualquer caixa (maiúscula ou minúscula).

[Clique aqui para ver mais](https://codeforces.com/contest/855/problem/A)

---

## Fila

Com a proximidade da Copa do Mundo, o fluxo de pessoas nas filas para compra de ingressos aumentou consideravelmente. Como as filas estão cada vez maiores, pessoas menos pacientes tendem a desistir da compra de ingressos e acabam deixando as filas, liberando assim vaga para outras pessoas. Quando uma pessoa deixa a fila, todas as pessoas que estavam atrás dela dão um passo a frente, sendo assim nunca existe um espaço vago entre duas pessoas. A fila inicialmente contém N pessoas, cada uma com um identificador diferente. Joãozinho sabe o estado inicial dela e os identificadores em ordem das pessoas que deixaram a fila. Sabendo que após o estado inicial nenhuma pessoa entrou mais na fila, Joãozinho deseja saber o estado final da fila.

### Entrada 
A primeira linha contém um inteiro N representando a quantidade de pessoas inicialmente na fila. A segunda linha contém N inteiros representando os identificadores das pessoas na fila. O primeiro identificador corresponde ao identificador da primeira pessoa na fila. É garantido que duas pessoas diferentes não possuem o mesmo identificador. A terceira linha contém um inteiro M representando a quantidade de pessoas que deixaram a fila. A quarta linha contém M inteiros representando os identificadores das pessoas que deixaram a fila, na ordem em que elas saíram. É garantido que um mesmo identificador não aparece duas vezes nessa lista.

### Saida
Seu programa deve imprimir uma linha contendo N−M inteiros com os identificadores das pessoas que permaneceram na fila, em ordem de chegada.

[Clique aqui para ver mais](https://neps.academy/br/course/estruturas-de-dados-(codcad)/lesson/fila)

---

## Fila do Recreio

Na escola onde você estuda, a hora do recreio é a mais aguardada pela grande maioria dos alunos. Não só porque as vezes as aulas são cansativas, mas sim porque a merenda servida é muito boa, preparada por um chefe italiano muito caprichoso.

Quando bate o sinal para a hora do recreio, todos os alunos saem correndo da sua sala para chegar o mais cedo possível na cantina, tanta é a vontade de comer. Um de seus professores notou, porém, que havia ali uma oportunidade.

Utilizando um sistema de recompensa, seu professor de matemática disse que a ordem da fila para se servir será dada não pela ordem de chegada, mas sim pela soma das notas obtidas em sala de aula. Assim, aqueles com maior nota poderão se servir antes daqueles que tem menor nota.

Sua tarefa é simples: dada a ordem de chegada dos alunos na cantina, e as suas respectivas notas na matéria de matemática, reordene a fila de acordo com as notas de matemática, e diga quantos alunos não precisaram trocar de lugar nessa reordenação.

### Entrada
A primeira linha contém um inteiro N, indicando o número de casos de teste a seguir.

Cada caso de teste inicia com um inteiro M (1 ≤ M ≤ 1000), indicando o número de alunos. Em seguida haverá M inteiros distintos Pi (1 ≤ Pi ≤ 1000), onde o i-ésimo inteiro indica a nota do i-ésimo aluno.

Os inteiros acima são dados em ordem de chegada, ou seja, o primeiro inteiro diz respeito ao primeiro aluno a chegar na fila, o segundo inteiro diz respeito ao segundo aluno, e assim sucessivamente.

### Saída
Para cada caso de teste imprima uma linha, contendo um inteiro, indicando o número de alunos que não precisaram trocar de lugar mesmo após a fila ser reordenada.

[Clique aqui para ver mais[(https://www.beecrowd.com.br/judge/pt/problems/view/1548)
