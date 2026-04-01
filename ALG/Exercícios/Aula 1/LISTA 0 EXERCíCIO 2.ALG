Algoritmo "Lista 1 Exercício 2"
// Disciplina  : Algoritmos
// Professor   : Douglas Dutra
// Descrição   : Média Ponderada
// Autor(a)    : Pedro Henrique dos Santos
// Data atual  : 04/03/2026
Var
// Seção de Declarações das variáveis
   N1, N2, N3, MEDIA : real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
   ESCREVAL("Insira primeira nota: ")
   LEIA(N1)
   ESCREVAL("Insira segunda nota: ")
   LEIA(N2)
   ESCREVAL("Insira terceira nota: ")
   LEIA(N3)
   MEDIA <- (N1*2 + N2*3 + N3*5)/10
   ESCREVAL("Média das notas: ", MEDIA)
Fimalgoritmo