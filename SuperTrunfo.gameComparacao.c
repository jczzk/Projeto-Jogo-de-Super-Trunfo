#include <stdio.h>

int main() {

    // =====================
    // CARTA 1
    // =====================
    char estado1;
    char codigo_Carta1[5];
    char nome_Cidade1[50];  
    int populacao1;                     // Estimativa 2026
    float area1;                        // km²
    float pib1;                         // Trilhões de reais (Estimativa 2026)
    int pontos_turisticos1; 

    float densidade_1;                  // Hab/km²
    float pib_per_capita_1;             // De reais (Estimativa 2026

    // =====================
    // CARTA 2
    // =====================
    char estado2;
    char codigo_Carta2[5];
    char nome_Cidade2[50]; 
    int populacao2;                     // Estimativa 2026
    float area2;                        // km²
    float pib2;                         // Trilhões de reais (Estimativa 2026) 
    int pontos_turisticos2;

    float densidade_2;                  // Hab/km²
    float pib_per_capita_2;             // De reais (Estimativa 2026)

    int opcao;

    // =====================
    // LEITURA CARTA 1
    // =====================

    printf("=== Cadastro Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo_Carta1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_Cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);


    // =====================
    // LEITURA CARTA 2
    // =====================

    printf("\n=== Cadastro Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo_Carta2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_Cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);


    // =====================
    // MENU
    // =====================

    printf("\n===== SUPER TRUNFO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");

    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nResultado da Comparacao:\n");

    // =====================
    // COMPARAÇÃO
    // =====================

    switch(opcao)
    {
        case 1:
            printf("Atributo: Populacao\n");

            if(populacao1 > populacao2)
                printf("Carta 1 (%s) venceu!\n", nome_Cidade1);
            else if(populacao2 > populacao1)
                printf("Carta 2 (%s) venceu!\n", nome_Cidade2);
            else
                printf("Empate!\n");

        break;

        case 2:
            printf("Atributo: Area\n");

            if(area1 > area2)
                printf("Carta 1 (%s) venceu!\n", nome_Cidade1);
            else if(area2 > area1)
                printf("Carta 2 (%s) venceu!\n", nome_Cidade2);
            else
                printf("Empate!\n");

        break;

        case 3:
            printf("Atributo: PIB\n");

            if(pib1 > pib2)
                printf("Carta 1 (%s) venceu!\n", nome_Cidade1);
            else if(pib2 > pib1)
                printf("Carta 2 (%s) venceu!\n", nome_Cidade2);
            else
                printf("Empate!\n");

        break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");

            if(pontos_turisticos1 > pontos_turisticos2)
                printf("Carta 1 (%s) venceu!\n", nome_Cidade1);
            else if(pontos_turisticos2 > pontos_turisticos1)
                printf("Carta 2 (%s) venceu!\n", nome_Cidade2);
            else
                printf("Empate!\n");

        break;

        default:
            printf("Opcao invalida!\n");
    }

    // =====================
    // EXEMPLO OPERADOR TERNÁRIO
    // =====================

    printf("\nComparacao extra (Populacao - operador ternario):\n");

    (populacao1 > populacao2) ?
    printf("Carta 1 venceu!\n") :
    (populacao2 > populacao1) ?
    printf("Carta 2 venceu!\n") :
    printf("Empate!\n");

    return 0;
}


