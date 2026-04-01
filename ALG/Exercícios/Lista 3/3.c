#include <stdio.h>
#include <stdlib.h>

void main() 
{

    int tam = 0;

    printf("Insira tamanho da lista: ");
    scanf("%i", &tam);

    int valores[tam], menor, maior, amplitude;

    for (int i = 0; i<tam; i++) {
        printf("\nInsira %iº número: ", i+1);
        scanf("%i", &valores[i]);
        if (i>0) {
            if (valores[i] < menor) {
                menor = valores[i];
            }
            if (valores[i] > maior) {
                maior = valores[i];
            }
        } else {
            menor = valores[i];
            maior = valores[i];
        }
    }
    amplitude = maior - menor;
    printf("\n\nMenor valor: %i\nMaior valor: %i\n\nAmplitude: %i\n", menor, maior, amplitude);
}