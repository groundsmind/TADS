Algoritmo "LISTA 2 EXERCICIO 4"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2026
Var

   N1, N2, N3, N4, media, exm: REAL

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Insira as quatro notas, separadas por enter")
   leia(n1, n2, n3, n4)
   media <- (n1+n2+n3+n4)/4

   se (media >= 7) entao
      escreval("Aprovado.")
   senao
      escreval("Insira nota do exame")
      leia(exm)
      se (media+exm >= 5) entao
         escreval("Aprovado em exame.")
      senao
         escreval("Reprovado.")
      fimse
   fimse
   escreval("Média final: ", media+exm)
Fimalgoritmo