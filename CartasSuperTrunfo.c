#include <stdio.h>

int main() {
  char first_card_state, first_card_code[5], first_card_city[50];
  char second_card_state, second_card_code[5], second_card_city[50];
  int first_card_population, first_card_atractions;
  int second_card_population, second_card_atractions;
  float first_card_area, first_card_gdp, first_card_population_density, first_card_gdp_percapita;
  float second_card_area, second_card_gdp, second_card_population_density, second_card_gdp_percapita;

  // First card input
  printf("CARTA 1\n");

  printf("Insira o estado(letra A~H): ");
  scanf("%c", &first_card_state);

  printf("Insira o número da carta: ");
  scanf("%s", first_card_code);

  printf("Insira o nome da cidade: ");
  scanf("%s", first_card_city);

  printf("População: ");
  scanf("%d", &first_card_population);

  printf("Área em Km^2: ");
  scanf("%f", &first_card_area);
  first_card_population_density = first_card_area / first_card_population;

  printf("PIB: ");
  scanf("%f", &first_card_gdp);
  first_card_gdp_percapita = first_card_gdp / first_card_population;

  printf("Número de pontos turísticos: ");
  scanf("%d", &first_card_atractions);



  // Second card input
  printf("\n\n");
  printf("CARTA 2\n");

  printf("Insira o estado(letra A~H): ");
  scanf(" %c", &second_card_state);

  printf("Insira o número da carta: ");
  scanf("%s", first_card_code);

  printf("Insira o nome da cidade: ");
  scanf("%s", second_card_city);

  printf("População: ");
  scanf("%d", &first_card_population);

  printf("Área em Km^2: ");
  scanf("%f", &second_card_area);
  second_card_population_density = second_card_area / second_card_population;

  printf("PIB: ");
  scanf("%f", &second_card_gdp);
  second_card_gdp_percapita = second_card_gdp / second_card_population;

  printf("Número de pontos turísticos: ");
  scanf("%d", &second_card_atractions);

  // First card output
  printf("\n\n");
  printf("CARTA 1:\n");
  printf("Estado: %c\n", first_card_state);
  printf("Código: %c%s\n", first_card_state, first_card_code);
  printf("Nome da cidade: %s\n", first_card_city);
  printf("População: %d\n", first_card_population);
  printf("Área: %.2f Km^2\n", first_card_area);
  printf("PIB: %.2f bilhoẽs de reais\n", first_card_gdp);
  printf("Número de pontos turísticos: %d\n", first_card_atractions);
  printf("O PIB per capita é: %.2f\n", first_card_gdp_percapita);
  printf("A Densidade populacional é de: %.2f", first_card_population_density);

  // Second card output
  printf("\n\n");
  printf("CARTA 2:\n");
  printf("Estado: %c\n", second_card_state);
  printf("Código: %c%s\n", second_card_state, second_card_code);
  printf("Nome da cidade: %s\n", second_card_city);
  printf("População: %d\n", second_card_population);
  printf("Área: %.2f Km^2\n", second_card_area);
  printf("PIB: %.2f bilhoẽs de reais\n", second_card_gdp);
  printf("Número de pontos turísticos: %d\n", second_card_atractions);
  printf("O PIB per capita é: %.2f\n", second_card_gdp_percapita);
  printf("A Densidade populacional é de: %.2f", second_card_population_density);
  
  return 0;
}
