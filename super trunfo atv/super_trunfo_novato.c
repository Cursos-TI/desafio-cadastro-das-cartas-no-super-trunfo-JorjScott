#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char codigo1[5];
    int populacao1, pontos1;
    float area1, pib1;

    // Variáveis da Carta 2
    char codigo2[5];
    int populacao2, pontos2;
    float area2, pib2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Codigo da carta: ");
    scanf("%s", codigo1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2\n");
    printf("Codigo da carta: ");
    scanf("%s", codigo2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    printf("\n--- Dados das Cartas ---\n");

    // Exibição da Carta 1
    printf("Carta 1 - %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\n");

    // Exibição da Carta 2
    printf("Carta 2 - %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;
}
