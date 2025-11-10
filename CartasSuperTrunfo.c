#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[50], estado2[50];
  char codigo1[50], codigo2[50];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float PIB1, PIB2;
  int turisticos1, turisticos2;
  
  // Área para entrada de dados

  printf("Vamos cadastrar a primeira carta?\n");

  printf("Digite o nome do estado da primeira carta: \n");
  scanf("%s", &estado1);

  printf("Digite o código da carta da primeira carta: \n");
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade da primeira carta: \n");
  scanf("%s", &cidade1);

  printf("Digite a quantidade de população da primeira carta: \n");
  scanf("%d", &populacao1);

  printf("Digite a área da primeira carta: \n");
  scanf("%f", &area1);

  printf("Digite o PIB da primeira carta: \n");
  scanf("%f", &PIB1);

  printf("Digite a quantidade de pontos turísticos da primeira carta: \n");
  scanf("%i", &turisticos1);

  printf("Iremos cadastrar agora a segunda carta!\n");
  
  printf("Digite o nome do estado da segunda carta: \n");
  scanf("%s", &estado2);

  printf("Digite o código da carta da segunda carta: \n");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade da segunda carta: \n");
  scanf("%s", &cidade2);

  printf("Digite a quantidade de população da segunda carta: \n");
  scanf("%d", &populacao2);

  printf("Digite a área da segunda carta: \n");
  scanf("%f", &area2);

  printf("Digite o PIB da segunda carta: \n");
  scanf("%f", &PIB2);

  printf("Digite a quantidade de pontos turísticos da segunda carta: \n");
  scanf("%i", &turisticos2);

  // Área para exibição dos dados da cidade

  float densidade1 = populacao1 / area1;
  float densidade2 = populacao2 / area2;

  float pibc1 = PIB1 / populacao1;
  float pibc2 = PIB2 / populacao2;


  printf("Aqui estão os dados da primeira carta: \n");

  printf("O código da carta é: %s\n", codigo1); 
  printf("O estado é: %s - Cidade: %s\n", estado1, cidade1);
  printf("População de: %d habitantes - PIB: %.2f bilhões\n", populacao1, PIB1);
  printf("Área: %.2f km²\n", area1);
  printf("Número de pontos turísticos: %i\n", turisticos1);
  printf("Densidade populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per capita: %.2f\n", pibc1);


  printf("Aqui estão os dados da segunda carta: \n");
  
  printf("O código da carta é: %s\n", codigo2); 
  printf("O estado é: %s - Cidade: %s\n", estado2, cidade2);
  printf("População de: %d habitantes - PIB: %.2f bilhões\n", populacao2, PIB2);
  printf("Área: %.2f km²\n", area2);
  printf("Número de pontos turísticos: %i\n", turisticos2);
  printf("Densidade populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per capita: %.2f\n", pibc2);

  return 0;
} 