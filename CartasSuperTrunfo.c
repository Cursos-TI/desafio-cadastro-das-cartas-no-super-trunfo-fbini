#include <stdio.h>
 
 int main() {
     char estado = 'A';
     char codigo[20] = "";
     char cidade[20] = "";
     int populacao = 6;
     float area = 10.000;
     char estado1 = 'A';
     char estado2 = 'A';
 
     char codigo1[] = "04";
     char codigo2[] = "04";
 
     char cidade1[] = "PortoAlegre";
     char cidade2[] = "PortoAlegre";
 
     int populacao1 = 6;
     int populacao2 = 6;
 
     int turismo1 = 10;
     int turismo2 = 10;
     
     float area1 = 10.000;
     float area2 = 10.000;
 
     float pib1 = 20.000;
     float pib2 = 20.000;
     
     //perguntas
 
     printf("Carta: 1 \n");
 
     printf("Digite a primeira letra do Estado: ");
     scanf("%c", &estado1);
 
     //talvez mudar o nome para numero para juntar na variavel codigo 
     printf("Digite um número de 01 a 04: ");
     scanf("%s", &codigo1);
 
     printf("Digite o nome da cidade: ");
     scanf("%s", &cidade1);
 
     printf("Digite o número de habitantes da cidade: ");
     scanf("%d", &populacao1);
 
     printf("Digite a área da cidade em km²: ");
     scanf("%f", &area1);
 
     printf("Digite o Produto Interno Bruto(PIB): ");
     scanf("%f", &pib1);
 
     printf("Digite a quantidade de pontos turísticos na cidade: ");
     scanf("%d", turismo1);
 
 
 
 
 
    // printf("Estado: %c \n", estado1);
     //scanf("%c", &estado1);
 
     return 0;
 
  
 }