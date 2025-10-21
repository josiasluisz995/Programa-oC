#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
    // Carta 1
    int populacao1, pontos1;
    float area1, pib1;
    char estado1[50], codigo1[50], cidade1[50];

    // Carta 2
    int populacao2, pontos2;
    float area2, pib2;
    char estado2[50], codigo2[50], cidade2[50];

    // Entrada de dados - Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o nome correspondente ao Estado:\n");
    scanf("%s", estado1);

    printf("Digite o Código da carta:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²:\n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto (PIB) da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos1);

    // Entrada de dados - Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o nome correspondente ao Estado:\n");
    scanf("%s", estado2);

    printf("Digite o Código da carta:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto (PIB) da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos2);

    // Exibição dos dados
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %s | Código: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %s | Código: %s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
} 

