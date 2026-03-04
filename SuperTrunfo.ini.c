#include <stdio.h>

int main() {

    // =========================
    // CARTA 1 - Rio de Janeiro
    // =========================

    char estado1 = 'A';
    char codigo_Carta1[5] = "A01";
    char nome_Cidade1[50] = "Rio de Janeiro";
    int populacao1 = 6800000;           // Estimativa 2026
    float area1 = 1200.25;              // Km²
    float pib1 = 380.75;                // Bilhões de reais (Estimativa 2026)
    int pontos_Turisticos1 = 45;

    // =========================
    // CARTA 2 - São Paulo
    // =========================
    
    char estado2 = 'B';
    char codigo_Carta2[5] = "B02";
    char nome_Cidade2[50] = "São Paulo";
    int populacao2 = 12000000;           // Estimativa 2026
    float area2 = 11521.11;              // Km²
    float pib2 = 820.50;                 // Bilhões de reais (estimativa 2026)
    int pontos_Turisticos2 = 60;


    // =========================
    // EXIBIÇÃO DAS CARTAS
    // =========================

    printf("===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_Carta1);
    printf("Nome da Cidade: %s\n", nome_Cidade1);
    printf("Populacao: %d Milhões de habitantes\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_Turisticos1);

    printf("===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_Carta2);
    printf("Nome da Cidade: %s\n", nome_Cidade2);
    printf("Populacao: %d Milhões de habitantes\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_Turisticos2);

    return 0;
}