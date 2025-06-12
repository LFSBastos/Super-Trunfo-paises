#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1 = 'A';
    char codigo1[4] = 'A01';
    char cidade1[50] = "São Paulo";
    int populacao1 = '12325000';
    float area1 = '1521.11 km²';
    float pib1 = '699.28 bilhões de reais';
    int pontos_turisticos1 = '50';

    // Variáveis para a Carta 2
    char estado2 = 'B';
    char codigo2[4] = "A02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = '6748000';
    float area2 = '1200.25 km²';
    float pib2 = '300.50 bilhões de reais';
    int pontos_turisticos2 = '30';

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Espaço antes do %c para evitar problemas com buffer
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s[^\n]s", cidade1); // Lê até a quebra de linha
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s[^\n]s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
