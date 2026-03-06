#include <stdio.h>

/*
 * Desafio: Nível Novato - Casdastrando as Cartas do Super Trunfo
 * 
 * O bjetivo desse desafio é construir a base do jogo Super Trunfo de Países.
 * Criar Um sistema para cadastrar as cartas com informações sobre as cidades.
 * Praticar a leitura de dados do usuário, o armazenamento em variáveis e a exibição dessas informações na tela.
 * */

int main() {

    // =========================
    // CARTA 1 - Rio de Janeiro
    // =========================
    char estado_1 = 'A';
    char codigo_carta_1[22] = "A01";
    char nome_cidade_1[50] = "Rio de Janeiro";
    int populacao_1 = 11900000;                // Estimativa 2026
    float area_1 = 1200.25;                    // km²
    float pib_1 = 1.5;                         // Trilhões de reais (Estimativa 2026)
    int pontos_turisticos_1 = 45; 


    
    // =========================
    // CARTA 2 - São Paulo
    // =========================
    char estado_2 = 'B';
    char codigo_carta_2[5] = "B02";
    char nome_cidade_2[50] = "São Paulo";
    int populacao_2 = 11950000;               // Estimativa 2026
    float area_2 = 1521.11;                   // Km²
    float pib_2 = 4.3;                        // Trilhões de reais (Estimativa 2026)
    int pontos_turisticos_2 = 60;



    // =========================
    // EXIBIÇÃO DAS CARTAS
    // =========================
    printf("===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %s\n", codigo_carta_1);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("Populacao: %d Milhões de habitantes\n", populacao_1);
    printf("Area: %.2f Km²\n", area_1);
    printf("PIB: R$ %.2f Bilhoes de reais\n", pib_1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_turisticos_1);

    printf("===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %s\n", codigo_carta_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("Populacao: %d Milhões de habitantes\n", populacao_2);
    printf("Area: %.2f Km²\n", area_2);
    printf("PIB: R$ %.2f Bilhoes de reais\n", pib_2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_2);

    return 0;
}