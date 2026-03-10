#include <stdio.h>
#include <string.h>

int main() {

    // ======================
    // CARTA 1 - BRASIL
    // ======================

    char pais1[30];
    int populacao1;
    float area1;
    float pib1; // em trilhões
    int pontos_turisticos1;

    float densidade1 = populacao1 / area1;


    // ======================
    // CARTA 2 - ESTADOS UNIDOS
    // ======================

    char pais2[30]";
    int populacao2;
    float area2;
    float pib2; // em trilhões
    int pontos_turisticos2;

    float densidade2 = populacao2 / area2;


    int opcao;

    // ======================
    // MENU
    // ======================

    printf("\n=== SUPER TRUNFO - PAISES ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);


    printf("\nComparando %s x %s\n\n", pais1, pais2);

    // ======================
    // SWITCH
    // ======================

    switch(opcao) {

        case 1:

            printf("Atributo: Populacao\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if(populacao1 > populacao2)
                printf("\nVencedor: %s\n", pais1);
            else if(populacao2 > populacao1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");

        break;


        case 2:

            printf("Atributo: Area\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if(area1 > area2)
                printf("\nVencedor: %s\n", pais1);
            else if(area2 > area1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");

        break;


        case 3:

            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhoes\n", pais1, pib1);
            printf("%s: %.2f trilhoes\n", pais2, pib2);

            if(pib1 > pib2)
                printf("\nVencedor: %s\n", pais1);
            else if(pib2 > pib1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");

        break;


        case 4:

            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontos_turisticos1);
            printf("%s: %d\n", pais2, pontos_turisticos2);

            if(pontos_turisticos1 > pontos_turisticos2)
                printf("\nVencedor: %s\n", pais1);
            else if(pontos_turisticos2 > pontos_turisticos1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");

        break;


        case 5:

            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n", pais2, densidade2);

            // REGRA INVERTIDA
            if(densidade1 < densidade2)
                printf("\nVencedor: %s\n", pais1);
            else if(densidade2 < densidade1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");

        break;


        default:
            printf("\nOpcao invalida!\n");

    }

    return 0;
}