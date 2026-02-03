#include <stdio.h>

int main() {
  char state, code[5], city[50], state2, code2[5], city2[50];
  int population, atractions, population2, atractions2;
  float area, gdp, area2, gdp2;


  // First card input
  printf("CARTA 1\n");

  printf("Insira o estado(letra A~H): ");
  scanf("%c", &state);

  printf("Insira o número da carta: ");
  scanf("%s", code);

  printf("Insira o nome da cidade: ");
  scanf("%s", city);

  printf("População: ");
  scanf("%d", &population);

  printf("Área em Km^2: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &gdp);

  printf("Número de pontos turísticos: ");
  scanf("%d", &atractions);



  // Second card input
  printf("\n\n");
  printf("CARTA 2\n");

  printf("Insira o estado(letra A~H): ");
  scanf(" %c", &state2);

  printf("Insira o número da carta: ");
  scanf("%s", code);

  printf("Insira o nome da cidade: ");
  scanf("%s", city2);

  printf("População: ");
  scanf("%d", &population);

  printf("Área em Km^2: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &gdp2);

  printf("Número de pontos turísticos: ");
  scanf("%d", &atractions2);

  // First card output
  printf("\n\n");
  printf("CARTA 1:\n");
  printf("Estado: %c\n", state);
  printf("Código: %c%s\n", state, code);
  printf("Nome da cidade: %s\n", city);
  printf("População: %d\n", population);
  printf("Área: %.2f Km^2\n", area);
  printf("PIB: %.2f bilhoẽs de reais\n", gdp);
  printf("Número de pontos turísticos: %d\n", atractions);

  // Second card output
  printf("\n\n");
  printf("CARTA 2:\n");
  printf("Estado: %c\n", state2);
  printf("Código: %c%s\n", state2, code2);
  printf("Nome da cidade: %s\n", city2);
  printf("População: %d\n", population2);
  printf("Área: %.2f Km^2\n", area2);
  printf("PIB: %.2f bilhoẽs de reais\n", gdp2);
  printf("Número de pontos turísticos: %d\n", atractions2);
  
  return 0;
}
