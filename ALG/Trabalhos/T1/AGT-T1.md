## Ideia
Dada a natureza peculiar das restrições desse trabalho, decidi encarar o problema atribuindo à cada título um ID de 5 dígitos, composto de:
|Dígito            |Peso                |Função                 |
|------------------|----------------------------|-----------------------|
|Primeiro          |  (x10.000) |Filme (1) ou série (2) |
|Segundo e terceiro|  (x100)             |Censura/classificação indicativa (00, 10, 18) |
|Quarto            |  (x10)               |Categoria; Ação, drama, comédia, terror (1 a 4, respectivamente)|
|Quinto            |  (x1)               |Plataforma disponível; Netflix, Prime Video, Disney+, HBO Max (1 a 4, respectivamente)|

Como exemplo, o filme *Whiplash* possui o código **11821**:
* Filme: 1 * 10000 = 10000
* classificação +18: 18 * 100 = 1800
* Drama: 2 * 10 = 20
* disponível na Netflix: 1 * 1 = 1
> 10000 + 1800 + 20 + 1 = 11821

## Execução
Já que o código em *VisuAlg* funciona de maneira idêntica, comentarei apenas a respeito da minha execução do algoritmo em *C*, de linha a linha (considerando comentários):

* **Linhas 39-44**
A Seção `main()`, que é rodada quando o programa é inicializado atribui à variável `escolha_usuário` o resultado da função `escolher_filtros()`;
Chama a função `filtrar_midia()`utilizando `escolha_usuário` como parâmetro;
 > Não se espera que a função `main()`, e, subsequentemente, `filtrar_midia()`, retornem qualquer valor, visto que a saída no terminal é o objetivo final. Assim, foram declaradas com retorno `void` para clareza.

* **Linhas 46-92**
Função `escolher_filtros()`, recebe do usuário os filtros desejados um a um, tendo contingências para possíveis erros de entrada. Mais especificamente, números fora do esperado chamam a função novamente, e retornam a nova escolha;
Cada escolha possui seus "pesos" multiplicados à entrada, vide seção **Ideia** acima.
 >Apenas duas variáveis são declaradas: `escolha`, que recebe a soma de todos os dígitos do ID, e `temp`, que recebe a entrada do usuário. Essas variáveis são reutilizadas pela função, dado que seria desnecessário reservar mais espaço na memória para valores que seriam feitos inúteis após seu propósito poucas linhas depois.

* **Linhas 94-139**
Função `filtrar_midia`, recebe como parâmetro o filtro e imprime na tela a mídia com ID igual, checando caso por caso utilizando numerosos comandos `if-else if-else`;
Filmes e séries com ID iguais são apresentados juntos;
Caso o filtro não possua correspondente, a função simplesmente imprime *"Nenhum filme/série encontrado a partir desse filtro."*
 > Esse design torna a "lista" facilmente expansível, precisando apenas de mais uma entrada `else if` para cada título novo.