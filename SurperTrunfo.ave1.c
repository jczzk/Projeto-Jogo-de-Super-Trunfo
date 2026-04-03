#include <stdio.h>  
/* 
Desafio: Nível Aventureiro - Casdastrando as Cartas do Super Trunfo

Agora, vamos adicionar mais detalhes e complexidade ao nosso jogo!
Neste nível, você implementará a lógica para calcular e exibir duas novas propriedades importantes para cada cidade:
A densidade populacional e o PIB per capita.
*/

int main() {

    // ==========================
    // CARTA 1 - Rio de Janeiro
    // ==========================
    char estado_1;
    char codigo_Carta_1[5];
    char nome_Cidade_1[50];
    int populacao_1;                // Estimativa 2026
    float area_1;                    // km²
    float pib_1;                         // Trilhões de reais (Estimativa 2026)
    int pontos_turisticos_1; 
    float densidade_populacional_1;    // Hab/km²
    float pib_per_capita_1;            // De reais (Estimativa 2026)



    // ===========================
    // CARTA 2 - São Paulo
    // ===========================
    char estado_2 = 'B';
    char codigo_Carta_2[5] = "B02";
    char nome_Cidade_2[50] = "São Paulo";
    int populacao_2 = 11950000;
    float area_2 = 1521.11;
    float pib_2 = 4.3;
    int pontos_turisticos_2 = 60;
    float densidade_populacional_2 = 7.600;
    float pib_per_capita_2 = 3.090;



    // ============================
    // Entrada de dados Carta 1
    // ============================
    printf("===== CARTA 1 =====\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado_1);

    printf("Codigo da carta: ");
    scanf("%4s", codigo_Carta_1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_Cidade_1);

    printf("Populacao: ");
    scanf("%d", &populacao_1);

    printf("Area (km²): ");
    scanf("%f", &area_1);

    printf("PIB (em Trilhões): ");
    scanf("%f", &pib_1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_1);



    // ============================
    // Cálculos Carta 1
    // ============================
    densidade_populacional_1 = populacao_1 / area_1;
    pib_per_capita_1 = (pib_1 * 1000000000000) / populacao_1;



    // =============================
    // Entrada de dados Carta 2
    // =============================
    printf("\n===== CARTA 2 =====\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado_2);

    printf("Codigo da carta: ");
    scanf("%4s", codigo_Carta_2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_Cidade_2);

    printf("Populacao: ");
    scanf("%d", &populacao_2);

    printf("Area (km²): ");
    scanf("%f", &area_2);

    printf("PIB (em Trilhões): ");
    scanf("%f", &pib_2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_2);



    // ============================
    // Cálculos Carta 2
    // ============================
    densidade_populacional_2 = populacao_2 / area_2;
    pib_per_capita_2 = (pib_2 * 1000000000000) / populacao_2;



    // =============================
    // Exibir Carta 1
    // =============================
    printf("\n===== Dados da Carta 1 =====\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %s\n", codigo_Carta_1);
    printf("Cidade: %s\n", nome_Cidade_1);
    printf("Populacao: %d Milhões de Pessoas\n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("PIB: R$ %.2f Trilhões de Reais\n", pib_1);
    printf("Pontos Turisticos: %d Pontos Turísticos\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f Habitantes/km²\n", densidade_populacional_1);
    printf("PIB per capita: R$ %.2f Reais\n", pib_per_capita_1);



    // =============================
    // Exibir Carta 2
    // =============================
    printf("\n===== Dados da Carta 2 =====\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %s\n", codigo_Carta_2);
    printf("Cidade: %s\n", nome_Cidade_2);
    printf("Populacao: %d Milhões de Pessoas\n", populacao_2);
    printf("Area: %.2f km²\n", area_2);
    printf("PIB: R$ %.2f Trilhões de Reais\n", pib_2);
    printf("Pontos Turisticos: %d Pontos Turísticos\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f Habitantes/km²\n", densidade_populacional_2);
    printf("PIB per capita: R$ %.2f Reais\n", pib_per_capita_2);

    return 0;
}
