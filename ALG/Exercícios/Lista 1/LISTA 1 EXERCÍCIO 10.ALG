Algoritmo "LISTA 1 EXERCÍCIO 10"
Var
// Seção de Declarações das variáveis 
   v, c50, c20, c10, c5, c2 : inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Insira valor: ")
   leia(v)
   c50 <- int(v/50)
   v <- v-(c50*50)
   c20 <- int(v/20)
   v <- v-(c20*20)
   c10 <- int(v/10)
   v <- v-(c10*10)
   c5 <- int(v/5)
   v <- v-(c5*5)
   c2 <- int(v/2)
   v <- v-(c2*2)
   escreval(c50, " notas de 50;")
   escreval(c20, " notas de 20;")
   escreval(c10, " notas de 10;")
   escreval(c5, " notas de 5;")
   escreval(c2, " notas de 2;")
   escreval(v, " moedas de 1.")
Fimalgoritmo