# Corrida Sapos LPI | Prática III

<p>Projeto da disciplina Linguagem de programação I
<br>Aplicação dos conceitos de Programação Orientada a Objetos (POO)</p>

## Autor
<p>João Victor Soares Oliveira
  
### <a href='https://github.com/passjoao/CorridaSaposLPI'>Link para acesso no gitgub</a>

## Compilar
  ```bash
  $make
  ```
## Executar
  ```bash
  $.bin/execute
  ```
## Descrição
<p>O projeto busca implementar uma corrida de sapos criados pela classe Sapo, no qual, o usuário poderá fazer as seguintes funcionalidades
  <table>
    <tr><td>1. Mostrar estatísticas dos sapos</td><td>O usuário podera ver todos os sapos salvos no vector sapos.</td></tr>
    <tr><td>2. Mostrar estatísticas das pistas</td><td>O usuário podera ver todos as pistas salvas no vector pistas.</td></tr>
    <tr><td>3. Criar um sapo</td><td>O usuário poderá criar um sapo adcionando-o ao vector sapos.</td></tr>
    <tr><td>4. Criar uma pista</td><td>O usuário poderá criar uma pista adcionando-a ao vector pistas.</td></tr>
    <tr><td>5. iniciar uma corrida</td><td>O usuário poderá iniciar a corrida.</td></tr>
  </table>

<p><b>1.</b> O usuário poderá ver os dados de todos os sapos do vector sapos, exibindo o Id, Nome, Distância percorrida, quantidade de pulos dados, quantidade de provas disputadas, vitórias, empates e o salto máximo de sapo.</p>

<p><b>2.</b> O usuário poderá ver os dados de todas as pistas do vector pistas, exibindo o Id da pista e a distância dela.</p>

<p><b>3.</b> O usuário poderá criar um sapo pela função criarSapo(), o usuário definirá o salto máximo e o nome do sapo, o programa colocará o Id do sapo como o último adicionado + 1, e os valores restantes como 0 e adiciona ao vector sapos.</p>

<p><b>4.</b> O usuário poderá criar uma pista pela função criarpista(), definindo o tamanho da mesma e o progama adiciona ao vector pista</p>

<p><b>5.</b>Ao iniciar a corrida, será mostrado os sapos que irão para a corrida, será exibido cada loop do programa o sapo, o ID e o tamanho do pulo dado, no qual os sapos pulam um de cada vez por ciclo até que todos cheguem a linha de chegada, definida pelo tamanho da pista</p>

* <p>Antes do usuário entrar no menu de execuções, o programa irá ler dois arquivos .txt, contendo um banco de dados dos sapos e pistas salvando em seus respectivos vectors</p>

* <p>Ao sair do programa, todos os sapos e pistas criados serão salvos nos arquivos .txt</p>
