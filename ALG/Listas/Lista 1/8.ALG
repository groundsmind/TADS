Algoritmo "LISTA 1 EXERCÍCIO 8"
Var
// Seção de Declarações das variáveis 
  w, l, c, a : real
  t : inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
  escreval("Insira potência da lâmpada:")
  leia(w)
  escreval("Insira largura da sala:")
  leia(l)
  escreval("Insira comprimento da sala:")
  leia(c)
  a <- l*c
  t <- int((a*18)/w)
  escreval(t)

Fimalgoritmo