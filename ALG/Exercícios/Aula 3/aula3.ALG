Algoritmo "semnome"
Var
   cod: inteiro

Inicio
      escreval("Insira código do produto")
      leia(cod)
      escreva("produto", cod, " é ")
      escolha cod
             caso 1
                  escreva("Alimento não perecível.")
             caso 2, 3, 4
                  escreva("Alimento perecível.")
             caso 5, 6
                  escreva("Vestuário.")
             outrocaso
                  se (cod <= 15) entao
                       escreva("Higiene.")
                  senao
                       escreva("Inválido.")
                  fimse
      fimescolha

Fimalgoritmo