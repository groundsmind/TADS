#include <stdio.h>

void main()
{
    char cat, subcat;
    printf("Insira categoria:\n[F]ilmes, [S]éries, [D]ocumentários\n");
    scanf("%c", &cat);

    switch (cat)
    {
        case 'F':
            printf("Insira subcategoria:\n[S]uspense, [A]ção\n");
            scanf("%c", &subcat);

            switch (subcat)
            {
                case 'S':
                    printf("A órfã\n");
                    break;
                case 'A':
                    printf("Batman: O cavaleiro das trevas\n");
                    break;

                /*
                default:
                    printf("Subcategoria não encontrada.\n");
                    break;
                */
            }
            break;

        case 'S':
            printf("Insira subcategoria:\n[D]rama, [C]omédia\n");
            scanf("%c", &subcat);
            switch (subcat)
            {
                case 'D':
                    printf("Revenge\n");
                    break;
                case 'C':
                    printf("How I met your mother\n");
                    break;
                default:
                    printf("Subcategoria não encontrada.");
                    break;
            }
            break;

        case 'D':
            printf("Insira subcategoria:\n[I]nvestigação, [C]iência\n");
            scanf("%c", &subcat);
            switch (subcat)
            {
                case 'I':
                    printf("Deep Web\n");
                    break;
                case 'C':
                    printf("Terra\n");
                    break;
                default:
                    printf("Subcategoria não encontrada.");
                    break;
            }
            break;

        default:
            printf("Categoria não encontrada");
            break;
    }
}