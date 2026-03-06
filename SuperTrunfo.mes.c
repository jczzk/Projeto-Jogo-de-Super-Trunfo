#include <stdio.h>

/**
 * Desafio: Nível Mestre - Comparando Cartas do Super Trunfo
 * 
 * Este programa permite o cadastro de duas cartas de cidades para o jogo Super Trunfo e
 * realiza a comparação entre elas baseada em um único atributo (População).
 * 
 * Atributos: Estado, Código da Carta, Nome da Cidade, População, Área, PIB, Pontos Turísticos.
 * Cálculos: Densidade Populacional (População / Área) e PIB per capita (PIB / População).
 */

int main() {


    // ===========================
    //  CARTA 1 
    // ===========================
    char estado_1;
    char codigo_carta_1[5];
    char nome_cidade_1[50];
    int populacao_1;                     // Estimativa 2026
    float area_1;                        // km²
    float pib_1;                         // Trilhões de reais (Estimativa 2026)
    int pontos_turisticos_1; 
    float densidade_populacional_1;      // Hab/km²
    float pib_per_capita_1;              // De reais (Estimativa 2026)



    // ============================
    //   CARTA 2 
    // ============================
    char estado_2;
    char codigo_carta_2[5];
    char nome_cidade_2[50];
    int populacao_2;                    // Estimativa 2026
    float area_2;                       // km²
    float pib_2;                        // Trilhões de reais (Estimativa 2026)
    int pontos_turisticos_2;
    float densidade_populacional_2;     // Hab/km²
    float pib_per_capita_2;             // De reais (Estimativa 2026)


    // =============================
    // --- Cadastro da Carta 1 ---
    // =============================
    printf("\n--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (ex: RJ): ");
    scanf("%s", &estado_1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo_carta_1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", nome_cidade_1); 

    printf("Digite a População: ");
    scanf("%d", &populacao_1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area_1);

    printf("Digite o PIB (em Trilhões de reais): ");
    scanf("%f", &pib_1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_1);


    // =============================
    //     Cálculos da Carta 1
    // =============================
    densidade_populacional_1 = (float)populacao_1 / area_1;
    pib_per_capita_1 = (pib_1 * 1000000000000) / (float)populacao_1;


    // =============================
    // --- Cadastro da Carta 2 ---
    // =============================
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (ex: SP): ");
    scanf("%s", &estado_2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo_carta_2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", nome_cidade_2);
                             
    printf("Digite a População: ");
    scanf("%d", &populacao_2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area_2);

    printf("Digite o PIB (em Trilhões de reais): ");
    scanf("%f", &pib_2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_2);


    // =============================
    //     Cálculos da Carta 2
    // =============================
    densidade_populacional_2 = (float)populacao_2 / area_2;
     pib_per_capita_2 = (pib_2 * 1000000000000) / (float)populacao_2;


    // --- Exibição dos Dados e Comparação ---
    // Atributo escolhido para comparação: POPULAÇÃO
    // Obs: A escolha do atributo é feita diretamente no código, conforme os requisitos.
    
    printf("\n========================================\n");
    printf("   COMPARAÇÃO DE CARTAS (Atributo: População)\n");
    printf("========================================\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", nome_cidade_1, &estado_1, &populacao_1);
    printf("Carta 2 - %s (%s): %d habitantes\n", nome_cidade_2, &estado_2, &populacao_2);
    printf("----------------------------------------\n");
       /**
     * Lógica de Decisão: Para o atributo População, a carta com o maior valor vence.
     * Estamos utilizando a estrutura if-else para realizar essa comparação.
     */
    if (populacao_1 > populacao_2) {
        printf("Resultado: CARTA 1 (%s) VENCEU!\n", nome_cidade_1);
    } else if (populacao_2 > populacao_1) {
        printf("Resultado: CARTA 2 (%s) VENCEU!\n", nome_cidade_2);
    } else {
        printf("Resultado: EMPATE!\n");
    }
    printf("========================================\n");

    // =======================================================
    // Exibindo os cálculos adicionais solicitados no desafio
    // =======================================================
    printf("\nValores calculados para referência:\n");
    printf("Carta 1 [%s]: Densidade Populacional = %.2f hab/km², PIB per Capita = %.2f Reais\n", nome_cidade_1, densidade_populacional_1, pib_per_capita_1);
    printf("Carta 2 [%s]: Densidade Populacional = %.2f hab/km², PIB per Capita = %.2f Reais\n", nome_cidade_2, densidade_populacional_2, pib_per_capita_2);

    return 0;
}
