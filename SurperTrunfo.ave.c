#include <stdio.h>

int main() {
    
    // =========================
    // CARTA 1 - Rio de Janeiro
    // =========================

    char estado_1 = 'A';
    char codigo_Carta_1[22] = "A01";
    char nome_Cidade_1[50] = "Rio de Janeiro";
    int populacao_1 = 11900000;                // Estimativa 2026
    float area_1 = 1200.25;                    // km²
    float pib_1 = 1.5;                         // Trilhões de reais (Estimativa 2026)
    int pontos_turiticos_1 = 45; 
    float densidade_populacional_1 = 5.170;    // Hab/km²
    float pib_per_capita_1 = 2.794;            // De reais (Estimativa 2026)
    
    
    
    // =========================
    // CARTA 2 - São Paulo
    // =========================

    char estado_2 = 'B';
    char codigo_Carta_2[5] = "B02";
    char nome_Cidade_2[50] = "São Paulo";
    int populacao_2 = 11950000;                // Estimativa 2026
    float area_2 = 1521.11;                    // Km²
    float pib_2 = 4.3;                         // Trilhões de reais (Estimativa 2026)
    int pontos_turiticos_2 = 60;  
    float densidade_populacional_2 = 7.600;    // Hab/km²
    float pib_per_capita_2 = 3.090;            // De reais (Estimativa 2026)

 

    // =============================
    // Leitura dos dados da Carta 1
    // =============================

    printf("===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_Carta_1);
    printf("Nome da Cidade: %s\n", nome_Cidade_1);
    printf("População: %d Milhões de pessoas\n", populacao_1);
    printf("Área: %.2f Km²\n", area_1);
    printf("PIB: %.1f Trilhões de Reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turiticos_1);
    printf("Densidade Populacional: %.3f  Habitantes/km²\n", densidade_populacional_1);
    printf("PIB Per Capital: %.3f Reais\n\n", pib_per_capita_1);
    

    
    

    // ============================
    // Cálculos Carta 1
    // ============================ 

    densidade_populacional_1 = populacao_1 / area_1;
    pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;



    // =============================
    // Leitura dos dados da Carta 2
    // =============================

    printf("===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_Carta_2);
    printf("Nome da Cidade: %s\n", nome_Cidade_2);
    printf("População: %d Milhões de pessoas\n", populacao_2);
    printf("Área: %.2f Km²\n", area_2);
    printf("PIB: %.1f Trilhões de Reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d Pontos Turísticos\n", pontos_turiticos_2);
    printf("Densidade Populacional: %.3f  Habitantes/km²\n", densidade_populacional_2);
    printf("PIB Per Capital: %.3f Reais\n", pib_per_capita_2);


    
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
    printf("Pontos Turisticos: %d Pontos Turísticos\n", pontos_turiticos_1);
    printf("Densidade Populacional: %.2f Habitantes/km²\n", densidade_populacional_1);
    printf("PIB per capita: %.2f Reais\n", pib_per_capita_1);


     
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
    printf("Pontos Turisticos: %d Pontos Turísticos\n", pontos_turiticos_2);
    printf("Densidade Populacional: %.2f Habitantes/km²\n", densidade_populacional_2);
    printf("PIB per capita: %.2f Reais\n", pib_per_capita_2);

    return 0;
}

