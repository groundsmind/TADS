#include <stdio.h>
#include <stdlib.h>

void main() 
{

    int total = 0;
    float maior_m, maior_f = 0;
    printf("insira total: ");
    scanf("%i", &total);

    for (int i = 0; i<=total; i++) {
        char sexo; 
        float altura;
        printf("\nInsira sexo e altura %i: ", i+1);
        scanf("%c %i", &sexo, &altura);

        if (sexo == 'm') {
            if (altura > maior_m) {
                maior_m = altura;
            }
        } else {
            if (altura > maior_f) {
                maior_f = altura;
            }
        }
    }

    printf("\n\nMaior altura H: %.1f\nMaior altura F: %.1f", maior_m, maior_f);
}