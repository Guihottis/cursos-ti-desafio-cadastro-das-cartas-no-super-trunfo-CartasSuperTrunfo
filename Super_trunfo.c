#include <stdio.h>

int main() {
    // Declaração das variáveis para as duas cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[40], nomeCidade2[40];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados da primeira carta
    printf("Insira os dados da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf(" %s", &estado1);

    printf("Código da Carta (Ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("População: ");
    scanf("%lf", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    
    while (getchar() != '\n'); 

    // Entrada de dados da segunda carta
    printf("\nInsira os dados da segunda carta:\n");



    // Entrada do estado (A-H)
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); 
    
    // Entrada do código da carta
    printf("Código da Carta Ex: B03 ");
    scanf(" %s", codigo2);
    
    while (getchar() != '\n'); 
    // Entrada do nome da cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); 
    
    // Entrada da população
    printf("População: ");
    while (getchar() != '\n'); 
    scanf("%lf", &populacao2); 
    
    // Entrada da área
    printf("Área em km²: ");
    while (getchar() != '\n');
    scanf("%lf", &area2); 
    
    // Entrada do PIB
    printf("PIB em bilhões de reais: ");
    while (getchar() != '\n');
    scanf("%f", &pib2); 
    
    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
