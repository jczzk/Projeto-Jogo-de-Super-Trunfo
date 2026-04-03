#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {    

    // ======================
    // Cartas pré-cadastradas
    // ======================
    char pais1[30] = "Brasil";
    char pais2[50] = "Argentina";

    int populacao1 = 214000000;
    int populacao2 = 45000000;

    float area1 = 8515767;
    float area2 = 2780400;

    float pib1 = 1.92;
    float pib2 = 0.63;

    float densidade1 = 25.1;
    float densidade2 = 16.2;

    int opcao1, opcao2;

    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    
    // ===============
    // Início do jogo
    // ===============
    printf("===== SUPER TRUNFO - COMPARAÇÃO DE PAÍSES =====\n");
    printf("===== SEJA MUITO BEM-VINDO JOGADOR!!! =====\n\n");

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    switch(opcao1) {

        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
        break;

        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
        break;

        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
        break;

        case 4:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
        break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }

    printf("\nEscolha o SEGUNDO atributo:\n");

    if(opcao1 != 1) printf("1 - População\n");
    if(opcao1 != 2) printf("2 - Área\n");
    if(opcao1 != 3) printf("3 - PIB\n");
    if(opcao1 != 4) printf("4 - Densidade Demográfica\n");

    printf("Opção: ");
    scanf("%d", &opcao2);

    if(opcao2 == opcao1) {
        printf("Erro: você não pode escolher o mesmo atributo!\n");
        return 0;
    }

    switch(opcao2) {

        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
        break;

        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
        break;

        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
        break;

        case 4:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
        break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }
    
    // ======================
    // Comparação atributo 1
    // ======================
    int ponto1 = 0, ponto2 = 0;

    if(opcao1 == 4) {
        ponto1 = (valor1_carta1 < valor1_carta2) ? 1 : 0;
        ponto2 = (valor1_carta2 < valor1_carta1) ? 1 : 0;
    } else {
        ponto1 = (valor1_carta1 > valor1_carta2) ? 1 : 0;
        ponto2 = (valor1_carta2 > valor1_carta1) ? 1 : 0;
    }

    // ======================
    // Comparação atributo 2
    // ======================
    if(opcao2 == 4) {
        ponto1 += (valor2_carta1 < valor2_carta2) ? 1 : 0;
        ponto2 += (valor2_carta2 < valor2_carta1) ? 1 : 0;
    } else {
        ponto1 += (valor2_carta1 > valor2_carta2) ? 1 : 0;
        ponto2 += (valor2_carta2 > valor2_carta1) ? 1 : 0;
    }

    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\n===== RESULTADO =====\n");

    printf("%s -> %.2f + %.2f = %.2f\n", pais1, valor1_carta1, valor2_carta1, soma1);
    printf("%s -> %.2f + %.2f = %.2f\n", pais2, valor1_carta2, valor2_carta2, soma2);

    if(soma1 > soma2) {
        printf("\nVencedor: %s\n", pais1);
    }
    else if(soma2 > soma1) {
        printf("\nVencedor: %s\n", pais2);
    }
    else {
        printf("\nEmpate!\n");
    }

    return 0;
}