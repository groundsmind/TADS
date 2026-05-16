algoritmo "FiltroMidia"
var
   escolha, temp : inteiro

inicio

   // Tipo
   escreval("tipo:")
   leia(temp)
   enquanto (temp <> 1) e (temp <> 2) faca
      escreval("Tipo deve ser 1 ou 2!")
      escreval("tipo:")
      leia(temp)
   fimenquanto
   escolha <- temp * 10000

   // Censura
   escreval("censura:")
   leia(temp)
   enquanto (temp <> 0) e (temp <> 10) e (temp <> 18) faca
      escreval("Censura deve ser 0, 10 ou 18!")
      escreval("censura:")
      leia(temp)
   fimenquanto
   escolha <- escolha + temp * 100

   // Categoria
   escreval("categoria:")
   leia(temp)
   enquanto (temp < 1) ou (temp > 4) faca
      escreval("Categoria deve ser de 1 a 4!")
      escreval("categoria:")
      leia(temp)
   fimenquanto
   escolha <- escolha + temp * 10

   // Streaming
   escreval("streaming:")
   leia(temp)
   enquanto (temp < 1) ou (temp > 4) faca
      escreval("Streaming deve ser de 1 a 4!")
      escreval("streaming:")
      leia(temp)
   fimenquanto
   escolha <- escolha + temp

   // Filtrar mídia
   escreval("")
   escreval("Mídia recomendada:")
   se escolha = 11812 entao
      escreval("Everything Everywhere All At Once")
   senao se escolha = 21031 entao
      escreval("Good Omens")
      escreval("Friends")
   senao se escolha = 11821 entao
      escreval("Whiplash")
   senao se escolha = 11842 entao
      escreval("NOPE")
      escreval("Hereditary")
   senao se escolha = 11831 entao
      escreval("Scott Pilgrim Vs. The World")
   senao se escolha = 21023 entao
      escreval("Loki")
   senao se escolha = 21834 entao
      escreval("Smiling Friends")
   senao se escolha = 10032 entao
      escreval("A Minecraft Movie")
   senao
      escreval("Nenhum filme/série encontrado a partir desse filtro.")
   fimse
