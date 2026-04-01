Algoritmo "LISTA 2 EXERCICIO 3"
Var
   // Seção de Declarações das variáveis
   x, y: real
   res: caractere

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Insira coordenada X")
   leia(x)
   escreval("Insira coordenada Y")
   leia(y)

   se (x=0) e (y=0) entao
      res <- "Origem"
   senao
      se (x=0) entao
         res <- "Eixo X"
      fimse
      se (y=0) entao
         res <- "Eixo Y"
      fimse
   fimse

   se (x>0) entao
      se (y>0) entao
         res <- "Q1"
      senao
         res <- "Q4"
      fimse
   senao
      se (y>0) entao
         res <- "Q2"
      senao
         res <- "Q3"
      fimse
   fimse

   escreval(res)
Fimalgoritmo