Algoritmo "LISTA 1 EXERCÍCIO 9"
Var
// Seção de Declarações das variáveis 
   s, h, m : inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Insira tempo em segundos:")
   leia(s)
   h <- int(s/3600)
   s <- s-(h*3600)
   m <- int(s/60)
   s <- s-(m*60)
   escreval(h, " hora(s), ", m, " minutos e ", s, " segundos.")

Fimalgoritmo