#include <stdio.h>

int main() {

    // =========================
    // CARTA 1 - Rio de Janeiro
    // =========================

    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6800000;           // estimativa 2026
    float area2 = 1200.25;              // km²
    float pib2 = 380.75;                // em bilhões de reais (estimativa 2026)
    int pontosTuristicos2 = 45;

    // =========================
    // CARTA 2 - São Paulo
    // =========================
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Sao Paulo";
    int populacao1 = 12400000;          // estimativa 2026
    float area1 = 1521.11;              // km²
    float pib1 = 820.50;                // em bilhões de reais (estimativa 2026)
    int pontosTuristicos1 = 60;


    // =========================
    // EXIBIÇÃO DAS CARTAS
    // =========================

    printf("===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
