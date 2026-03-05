#include <stdio.h>

int main() {

    // =========================
    // CARTA 1 - Rio de Janeiro
    // =========================

    char estado_1 = 'A';
    char codigo_Carta_1[22] = "A01";
    char nome_Cidade_1[50] = "Rio de Janeiro";
    int populacao_1 = 6800000;           // Estimativa 2026
    float area_1 = 1200.25;              // Km²
    float pib_1 = 380.75;                // Bilhões de reais (Estimativa 2026)
    int pontos_Turisticos_1 = 45;

    // =========================
    // CARTA 2 - São Paulo
    // =========================
    
    char estado_2 = 'B';
    char codigo_Carta_2[5] = "B02";
    char nome_Cidade_2[50] = "São Paulo";
    int populacao_2 = 12000000;           // Estimativa 2026
    float area_2 = 1521.11;               // Km²
    float pib_2 = 820.50;                 // Bilhões de reais (estimativa 2026)
    int pontos_Turisticos_2 = 60;


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
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_Turisticos_1);

    printf("===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %s\n", codigo_Carta_2);
    printf("Nome da Cidade: %s\n", nome_Cidade_2);
    printf("Populacao: %d Milhões de habitantes\n", populacao_2);
    printf("Area: %.2f Km²\n", area_2);
    printf("PIB: %.2f Bilhoes de reais\n", pib_2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_Turisticos_2);

    return 0;
}

