Algoritmo "LISTA 1 EXERCÍCIO 3"
//O diretor industrial de uma companhia solicitou ao
//responsável do setor de informática o salário do
//funcionário A. São fornecidos os seguintes dados: o
//nome do funcionário, o número de horas trabalhadas e
//o valor que ele recebe por hora. Calcular o salário
//deste funcionário. No final, o algoritmo deverá escrever
//o nome do funcionário e o seu salário.
Var
// Seção de Declarações das variáveis 
   nome : caractere
   h, v, s : real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Insira nome do funcionário: ")
   leia(nome)
   escreval("Insira horas trabalhadas: ")
   leia(h)
   escreval("Insira quanto recebe por hora: ")
   leia(v)
   s <- h*v
   escreval("Funcionário ", nome, " tem salário de R$", s)

Fimalgoritmo