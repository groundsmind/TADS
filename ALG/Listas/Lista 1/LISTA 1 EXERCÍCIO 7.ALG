Algoritmo "LISTA 1 EXERCÍCIO 7"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/03/2026
Var
// Seção de Declarações das variáveis 
   s, ir, inss, sin : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Insira salário:")
   leia(s)
   ir <- s * 0.15
   inss <- s * 0.11
   sin <- s * 0.03
   s <- s-ir-inss-sin
   escreval("IR (15%)        : ",ir)
   escreval("INSS (11%)      : ",inss)
   escreval("SINDICATO (3%)  : ",sin)
   escreval("Salário Líquido : ",s)

Fimalgoritmo