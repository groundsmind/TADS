Algoritmo "triangulo"
Var
   v1,v2,v3, t: real

funcao tipo_triangulo(x,y,z:real): inteiro
inicio
       // 1 - eqlt. 2 - isoc. 3 - escal.
       se (x = y) e (x = z) entao
          retorne 1
       senao se ((x = y) ou (x = z) ou (y = z)) entao
          retorne 2
       senao
            retorne 3
       fimse
fimfuncao

Inicio
      escreval("Insira tamanho do primeiro lado:")
      leia(v1)
      escreval("Insira tamanho do segundo lado:")
      leia(v2)
      escreval("Insira tamanho do terceiro lado:")
      leia(v3)
      
      t <- tipo_triangulo(v1,v2,v3)
      
      escreval("Triângulo ")
      escolha t
      caso 1
           escreva("Equilátero")
      caso 2
           escreva("Isóceles")
      caso 3
            escreva("Escaleno")
      fimescolha
Fimalgoritmo