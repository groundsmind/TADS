#include <stdio.h>
#include <stdlib.h>

/* Tabela de filmes e séries:

┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━┳━━━━━━━━━┳━━━━━━━━━━━┳━━━━━━━━━━━┓
┃               Título               ┃ Tipo ┃ Censura ┃ Categoria ┃ Streaming ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╋━━━━━━╋━━━━━━━━━╋━━━━━━━━━━━╋━━━━━━━━━━━┫
┃"Everything Everywhere All At Once" ┃  01  ┃   +18   ┃     1     ┃     2     ┃
┃"Good Omens"                        ┃  02  ┃   +10   ┃     3     ┃     1     ┃
┃"Whiplash"                          ┃  01  ┃   +18   ┃     2     ┃     1     ┃
┃"Friends"                           ┃  02  ┃   +10   ┃     3     ┃     1     ┃
┃"NOPE"                              ┃  01  ┃   +18   ┃     4     ┃     2     ┃
┃"Scott Pilgrim Vs. The World"       ┃  01  ┃   +18   ┃     3     ┃     1     ┃
┃"Loki"                              ┃  02  ┃   +10   ┃     2     ┃     3     ┃
┃"Hereditary"                        ┃  01  ┃   +18   ┃     4     ┃     2     ┃
┃"Smiling Friends"                   ┃  02  ┃   +18   ┃     3     ┃     4     ┃
┃"A Minecraft Movie"                 ┃  01  ┃    0    ┃     3     ┃     2     ┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━┻━━━━━━━━━┻━━━━━━━━━━━┻━━━━━━━━━━━┛

┏━━ Tipo:
┣ 1 - Filme
┗ 2 - Série

┏━━ Categoria:
┣ 1 - Ação
┣ 2 - Drama
┣ 3 - Comédia
┗ 4 - Terror

┏━ Streaming:
┣ 1 - Netflix
┣ 2 - Prime Video
┣ 3 - Disney+
┗ 4 - HBO Max

*/

void main()
{
    int escolha_usuario = escolher_filtros();

    filtrar_midia(escolha_usuario);
}

int escolher_filtros()
{
    int escolha, temp;
    
    printf("tipo:\n");
    scanf("%i", &temp);
    if ((temp != 1) && (temp != 2))
    {
        printf("\n\nTipo deve ser 1 ou 2!\n");
        escolha = escolher_filtros();
        return escolha;
    }
    escolha += temp * 10000;

    printf("censura:\n");
    scanf("%i", &temp);
    if ((temp != 0) && (temp != 10) && (temp != 18))
    {
        printf("\n\nCensura deve ser 0, 10 ou 18!");
        escolha = escolher_filtros();
        return escolha;
    }
    escolha += temp * 100;

    printf("categoria:\n");
    scanf("%i", &temp);
    if ((temp < 1) || (temp > 4))
    {
        printf("\n\nCategoria deve ser de 1 a 4!");
        escolha = escolher_filtros();
        return escolha;
    }
    escolha += temp * 10;

    printf("streaming:\n");
    scanf("%i", &temp);
    if ((temp < 1) || (temp > 4))
    {
        printf("\n\nStreaming deve ser de 1 a 4!");
        escolha = escolher_filtros();
        return escolha;
    }
    escolha += temp;


    return escolha;
}

void filtrar_midia(int filtro)
{
    printf("\n\nMídia recomendada:\n");
    if (filtro == 11812)
    {
        printf("Everything Everywhere All At Once");
    }
    else if (filtro == 21031)
    {
        printf("Good Omens");
        printf("Friends");
    }
    else if (filtro == 11821)
    {
        printf("Whiplash");
    }
    else if (filtro == 11842)
    {
        printf("NOPE");
        printf("\nHereditary");
    }
    else if (filtro == 11831)
    {
        printf("Scott Pilgrim Vs. The World");
    }
    else if (filtro == 21023)
    {
        printf("Loki");
    }
    else if (filtro == 21834)
    {
        printf("Smiling Friends");
    }
    else if (filtro == 10032)
    {
        printf("A Minecraft Movie");
    }
    else
    {
        printf("\n\nNenhum filme/série encontrado a partir desse filtro.");
    }
    printf("\n");
}
