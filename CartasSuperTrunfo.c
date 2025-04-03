#include <stdio.h>

int main()
{
    char estado1;
    char estado2;

    char numero1[3];
    char numero2[3];

    char cidade1[50];
    char cidade2[50];

    float populacao1;
    float populacao2;

    int turismo1;
    int turismo2;

    float area1;
    float area2;

    float pib1;
    float pib2;

    float densidade1;
    float densidade2;

    float percapita1;
    float percapita2;

    // Entrada dos dados

    // Entrada 1 carta

    printf("Entrada 1 carta \n");

    printf("Digite a primeira letra do Estado: ");
    scanf("%c", &estado1);

    printf("Digite um número de 01 a 04: ");
    scanf("%s", &numero1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%f", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto(PIB): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turismo1);

    /*//Entrada 2 carta
    printf("Entrada 2 carta \n");

    printf("Digite a primeira letra do Estado: ");
    scanf(" %c", &estado2);

    printf("Digite um número de 01 a 04: ");
    scanf("%s", &numero2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%f", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto(PIB): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turismo2);
*/

    // Saida 1 carta

    printf("Dados recebidos! Veja os resultados: \n");

    printf("Carta 1: \n");

    printf("Estado: %c \n", estado1);

    printf("Código: %c%s \n", estado1, numero1);

    printf("Nome da Cidade: %s \n", cidade1);

    printf("População: %e \n", populacao1);

    printf("Área: %.2f km² \n", area1);

    printf("PIB: %.e bilhões de reais \n", pib1);

    printf("Número de Pontos Turísticos: %d \n", turismo1);

    densidade1 = (populacao1 / area1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);

    percapita1 = (pib1 / populacao1);
    printf("PIB per Capita: %.2f reais \n", percapita1);



    // Saida Carta 2

    printf("Carta 2: \n");

    printf("Estado: %c \n", estado2);

    printf("Código: %c%s \n", estado2, numero2);

    printf("Nome da Cidade: %s \n", cidade2);

    printf("População: %e \n", populacao2);

    printf("Área: %.2f km² \n", area2);

    printf("PIB: %e bilhões de reais \n", pib2);

    printf("Número de Pontos Turísticos: %d \n", turismo2);

    densidade2 = (populacao2 / area2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);

    percapita2 = (pib2 / populacao2);
    printf("PIB per Capita: %.2f reais \n", percapita2);

    return 0;
}