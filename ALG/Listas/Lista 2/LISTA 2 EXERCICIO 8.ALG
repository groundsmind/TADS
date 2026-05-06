Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/05/2026
Var
// Seção de Declarações das variáveis 
   nome: caractere
   nsal, salario, pm: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("insira nome do funcionário")
   leia(nome)
   escreval("insira salario")
   leia(salario)
   
   se ((1800 < salario) e (salario <= 2500)) entao
      pm <- 0.04
      salario <- salario + salario * 0.04
   fimse
   se ((1000 < salario) e (salario <= 1800)) entao
      pm <- 0.07
   fimse
   se ((700 < salario) e (salario <= 1000)) entao
      pm <- 0.10
   fimse
   se salario < 400 entao
      pm <- 0.15
   fimse

   nsal <- salario + salario * pm
   
   escreval("Nome: ", nome)
   escreval("Porcentagem de aumento: ", pm*100, "%")
   escreval("Salário atual: ", salario)
   escreval("Novo salário: ", nsal)

Fimalgoritmo