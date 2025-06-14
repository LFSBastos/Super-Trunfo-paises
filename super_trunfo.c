#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[50] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões de reais
    int pontos_turisticos1 = 50;

    // Variáveis para a Carta 2
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões de reais
    int pontos_turisticos2 = 30;

    // Cálculo densidade populacional
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    // Cálculo do PIB per capita
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    float super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    float super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // Menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
