Algoritmo "LISTA 1 EXERCÍCIO 6"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/03/2026
Var
// Seção de Declarações das variáveis 
   b, n, v, t, pb, pn, pv : real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Insira total de votos brancos")
   leia(b)
   escreval("Insira total de votos nulos")
   leia(n)
   escreval("Insira total de votos válidos")
   leia(v)
   t <- b+n+v
   pb <- (b/t)*100
   pn <- (n/t)*100
   pv <- (v/t)*100
   escreval("Brancos: ",pb)
   escreval("Nulos: ",pn)
   escreval("Válidos: ",pv)
Fimalgoritmo