#include <stdio.h>

int main() {
    char estado1 = 'A';
    char estado2 = 'A';

    char numero1[3] = "04";
    char numero2[3] = "04";

    char cidade1[50] = "PortoAlegre";
    char cidade2[50] = "PortoAlegre";

    int populacao1 = 6;
    int populacao2 = 6;

    int turismo1 = 10;
    int turismo2 = 10;
    
    float area1 = 10.000;
    float area2 = 10.000;

    float pib1 = 20.000;
    float pib2 = 20.000;
    
    //Entrada dos dados

    //Entrada 1 carta

    printf("Entrada 1 carta \n");

    printf("Digite a primeira letra do Estado: ");
    scanf("%c", &estado1);

    printf("Digite um número de 01 a 04: ");
    scanf("%s", &numero1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto(PIB): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turismo1);


    //Entrada 2 carta
    printf("Entrada 2 carta \n");

    printf("Digite a primeira letra do Estado: ");
    scanf(" %c", &estado2);

    printf("Digite um número de 01 a 04: ");
    scanf("%s", &numero2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto(PIB): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turismo2);



    //Saida dos dados 1 carta

    printf("Dados recebidos! Veja os resultados: \n");

    printf("Carta 1: \n");

    printf("Estado: %c \n", estado1);

    printf("Código: %c%s \n", estado1, numero1);
  
    printf("Nome da Cidade: %s \n", cidade1);

    printf("População: %d \n", populacao1);

    printf("Área: %.2f km² \n", area1);

    printf("PIB: %.2f bilhões de reais \n", pib1);

    printf("Número de Pontos Turísticos: %d \n", turismo1);

    //Saida Carta 2

    printf("Carta 2: \n");

    printf("Estado: %c \n", estado2);

    printf("Código: %c%s \n", estado2, numero2);
  
    printf("Nome da Cidade: %s \n", cidade2);

    printf("População: %d \n", populacao2);

    printf("Área: %.2f km² \n", area2);

    printf("PIB: %.2f bilhões de reais \n", pib2);

    printf("Número de Pontos Turísticos: %d \n", turismo2);

    return 0;

}