#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nível Mestre
// Objetivo: Calcular o Super Poder de cada carta e compará-las exibindo os resultados

int main() {
  // =========================
  // DECLARAÇÃO DAS VARIÁVEIS
  // =========================

  //Dados da Carta 1
    unsigned long int populacao1;
    int ponto_turistico1;
    float pib1, area1;
    char estado1;
    char codigo1[20], cidade1[50];
    float densidade1, pib_per_capita1;
    float superPoder1;
    
  //Dados da Carta 2
    unsigned long int populacao2;
    int ponto_turistico2;
    float pib2, area2;
    char estado2;
    char codigo2[20], cidade2[50];
    float densidade2, pib_per_capita2;
    float superPoder2;

  // ===========================
  // ENTRADA DE DADOS - CARTA 1
  // ===========================
  
    printf("\nCarta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ponto_turistico1);

  // ===========================
  // ENTRADA DE DADOS - CARTA 2
  // ===========================

    printf("\nCarta 2\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ponto_turistico2);

  // ==========================================
  // CÁLCULANDO A DENSIDADE E O PIB PER CAPITA
  // ==========================================

  //Densidade populacional = população / área
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

  //PIB per capita = PIB / população
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

  // =======================================
  // SOMANDO O SUPER PODER DAS CARTAS 1 e 2
  // =======================================
  
    superPoder1 = populacao1 + area1 + pib1 + ponto_turistico1 + pib_per_capita1 + (1.0 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + ponto_turistico2 + pib_per_capita2 + (1.0 / densidade2);

  // ===============
  // SAÍDA DE DADOS
  // ===============

  //Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super poder: %.2f\n", superPoder1);

  //Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super poder: %.2f\n", superPoder2);

  // ======================
  // COMPARAÇÃO DAS CARTAS
  // ======================

    printf("\nComparação de Cartas:\n");

  //maior vence
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", ponto_turistico1 > ponto_turistico2);

  //menor vence (densidade)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

  //maior vence

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

  //Finaliza o programa com sucesso
return 0;

} 
