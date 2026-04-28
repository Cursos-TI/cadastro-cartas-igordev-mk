#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Nível Novato
// Objetivo: Comparar duas cartas utilizando estruturas if/else.
// escolhendo o atributo (população) para determinar a carta vencedora.

int main() {

    // =========================
    // DECLARAÇÃO DAS VARIÁVEIS
    // =========================

    // Carta 1
    unsigned long int populacao1;
    int ponto_turistico1;
    float pib1, area1;
    char estado1;
    char codigo1[20], cidade1[50];
    float densidade1, pib_per_capita1;

    // Carta 2
    unsigned long int populacao2;
    int ponto_turistico2;
    float pib2, area2;
    char estado2;
    char codigo2[20], cidade2[50];
    float densidade2, pib_per_capita2;

    // ===================
    // ENTRADA - CARTA 1
    // ===================

    printf("\nCarta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &ponto_turistico1);

    // ===================
    // ENTRADA - CARTA 2
    // ===================

    printf("\nCarta 2\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &ponto_turistico2);

    // ========================================
    // CÁLCULANDO A DENSIDADE E PIB PER CAPITA
    // ========================================

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    // ======================
    // EXIBIÇÃO DOS CÁLCULOS
    // ======================

    printf("\n--- Dados Calculados ---\n");

    printf("\nCarta 1 - %s (%c)\n", cidade1, estado1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("\nCarta 2 - %s (%c)\n", cidade2, estado2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    // ===========================
    // COMPARAÇÃO (POPULAÇÃO)
    // ===========================

    printf("\n--- Comparação de Cartas (Atributo: População) ---\n\n");

    printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    //Finaliza o programa com sucesso
    return 0;
}