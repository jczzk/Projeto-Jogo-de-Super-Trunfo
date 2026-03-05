#include <stdio.h>

int main() {
    
    // =========================
    // CARTA 1 - Rio de Janeiro
    // =========================

    char estado_1;
    char codigo_Carta_1[5];
    char nome_Cidade_1[50];
    int populacao_1;                // Estimativa 2026
    float area_1;                    // km²
    float pib_1;                         // Trilhões de reais (Estimativa 2026)
    int pontos_turisticos_1; 
    float densidade_populacional_1;    // Hab/km²
    float pib_per_capita_1;            // De reais (Estimativa 2026)
    
    
    
    // =========================
    // CARTA 2 - São Paulo
    // =========================

    char estado_2;
    char codigo_Carta_2[5];
    char nome_Cidade_2[50];
    int populacao_2;               // Estimativa 2026
    float area_2;                   // Km²
    float pib_2;                        // Trilhões de reais (Estimativa 2026)
    int pontos_turisticos_2;
    float densidade_populacional_2;   // Hab/km²
    float pib_per_capita_2;           // De reais (Estimativa 2026)
 

    // =============================
    // Leitura dos dados da Carta 1
    // =============================

    printf("===== CARTA 1 =====\n");
    
    printf("Insira os dados da Carta 1: \n");
    printf("Estado: %c\n", estado_1);
    scanf(" %c", &estado_1);
    
    printf("Código: %s\n", codigo_Carta_1);
    scanf(" %s", codigo_Carta_1);
    
    printf("Nome da Cidade: %s\n", nome_Cidade_1);
    scanf(" %c[^\n]", nome_Cidade_1);
    
    printf("População: %d Milhões de pessoas\n", populacao_1);
    scanf(" %d", &populacao_1);
    
    printf("Área: %.2f Km²\n", area_1);
    scanf("%f", &area_1);
    
    printf("PIB: %.1f Trilhões de Reais\n", pib_1);
    scanf("%f", &pib_1);
    
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    scanf("%d", &pontos_turisticos_1);
    
    

    // ============================
    // Cálculos Carta 1
    // ============================ 

    densidade_populacional_1 = populacao_1 / area_1;
    pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;



    // =============================
    // Leitura dos dados da Carta 2
    // =============================

    printf("\n===== CARTA 2 =====\n");
    
    printf("Insira os dados da Carta 2: \n");
    printf("Estado: %c\n", estado_2);
    scanf(" %c", &estado_2);
    
    printf("Código: %s\n", codigo_Carta_2);
    scanf(" %s", codigo_Carta_2);
    
    printf("Nome da Cidade: %s\n", nome_Cidade_2);
    scanf(" %c[^\n]", nome_Cidade_2);
    
    printf("População: %d Milhões de pessoas\n", populacao_2);
    scanf(" %d", &populacao_2);
    
    printf("Área: %.2f Km²\n", area_2);
    scanf("%f", &area_2);
    
    printf("PIB: %.1f Trilhões de Reais\n", pib_2);
    scanf("%f", &pib_2);
    
    printf("Número de Pontos Turísticos: %d Pontos Turísticos\n", pontos_turisticos_2);
    scanf("%d", &pontos_turisticos_2);
    

    
    // =============================
    // Cálculos da Carta 2
    // =============================

    densidade_populacional_2 = populacao_2 / area_2;
    pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;
    

    

    // =============================
    // Exibição dos dados da Carta 1
    // =============================

    printf("\n===== Dados da Carta 1 =====\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo do Estado: %s\n", codigo_Carta_1);
    printf("Nome da Cidade: %s\n", nome_Cidade_1);
    printf("Populacao: %d Milhões de pessoas\n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("PIB: %.1f Trilhões de Reais\n", pib_1);
    printf("Pontos Turisticos: %d Pontos Turísticos\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f Habitantes/km²\n", densidade_populacional_1);
    printf("PIB per Capita: %.2f Reais\n", pib_per_capita_1);

     
    // =============================
    // Exibição dos dados da Carta 2
    // =============================

    printf("\n===== Dados da Carta 2 =====\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo do Estado: %s\n", codigo_Carta_2);
    printf("Nome da Cidade: %s\n", nome_Cidade_2);
    printf("Populacao: %d Milhões de pessoas\n", populacao_2);
    printf("Area: %.2f km²\n", area_2);
    printf("PIB: %.1f Trilhões de Reais\n", pib_2);
    printf("Pontos Turisticos: %d Pontos Turísticos\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f Habitantes/km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f Reais\n", pib_per_capita_2);

    return 0;
}





