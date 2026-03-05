#include <stdio.h>

int main() {

    // =========================
    // CARTA 1 - 
    // =========================

    char estado_1 = ;
    char codigo_Carta_1[22] = ;
    char nome_Cidade_1[50] = ;
    int populacao_1 = ;             // Estimativa 2026
    float area_1 =  ;               // km²
    float pib_1 = ;                 // Trilhões de reais (Estimativa 2026)
    int pontos_turisticos_1 = ;

    // =========================
    // CARTA 2 -
    // =========================
    
    char estado_2 = ;
    char codigo_Carta_2[5] = ;
    char nome_Cidade_2[50] = ;
    int populacao_2 = ;              // Estimativa 2026
    float area_2 = ;                 // km²
    float pib_2 = ;                // Trilhões de reais (Estimativa 2026)
    int pontos_turisticos_2 = ;


    // =========================
    // EXIBIÇÃO DAS CARTAS
    // =========================

    printf("===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %s\n", codigo_Carta_1);
    printf("Nome da Cidade: %s\n", nome_Cidade_1);
    printf("Populacao: %d Milhões de habitantes\n", populacao_1);
    printf("Area: %.2f Km²\n", area_1);
    printf("PIB: %.2f Bilhoes de reais\n", pib_1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_turisticos_1);

    printf("===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %s\n", codigo_Carta_2);
    printf("Nome da Cidade: %s\n", nome_Cidade_2);
    printf("Populacao: %d Milhões de habitantes\n", populacao_2);
    printf("Area: %.2f Km²\n", area_2);
    printf("PIB: %.2f Bilhoes de reais\n", pib_2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_2);

    return 0;
}


