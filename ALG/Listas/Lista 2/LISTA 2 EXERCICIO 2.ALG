Algoritmo "LISTA 2 EXERCICIO 2"
Var
   h: real
   sexo: caractere
Inicio
      escreval("Insira altura")
      leia(h)
      escreval("Insira sexo (m/f ou masc/fem)")
      leia(sexo)
      escreva("Peso ideal: ")
      escolha maiusc(sexo)
              caso "M", "MASC"
                 escreva((727/10)*h-58)
              caso "F", "FEM"
                 escreva((621/10)*h-(447/10))
              outrocaso
                 escreval("Entrada incorreta.")
      fimescolha
      
      

Fimalgoritmo