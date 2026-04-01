Algoritmo "Lista 1 Ex 2"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : 2)	Faça um algoritmo que leia o nome
//de um piloto, uma distância percorrida
//em km e o tempo que o piloto levou para
//percorrê-la (em horas). O programa deve
//calcular a velocidade média (Velocidade = Distância / Tempo)
//em km/h, e exibir a seguinte frase: A velocidade média do <nome do piloto> foi <velocidade media > km/h.
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 04/03/2026
Var
// Seção de Declarações das variáveis 
   V, D, T : real
   nome : caractere
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Insira nome do piloto: ")
   leia(nome)
   escreval("Insira distância percorrida, em Km")
   leia(d)
   escreval("Insira tempo total, em horas")
   leia(t)
   V <- D/T
   escreval("A velocidade média do ", nome, " foi ", v, " km/h.")
Fimalgoritmo