#include <stdio.h>

int main() {
  char first_card_state, first_card_code[5], first_card_city[50];
  char second_card_state, second_card_code[5], second_card_city[50];

  int first_card_population, first_card_atractions;
  int second_card_population, second_card_atractions;

  float first_card_area, first_card_gdp, first_card_population_density;
  float first_card_gdp_percapita, first_card_power;

  float second_card_area, second_card_gdp, second_card_population_density;
  float second_card_gdp_percapita, second_card_power;

  int menu_choice;

  // CARTA 1
  printf("CARTA 1\n");

  printf("Insira o estado(letra A~H): ");
  scanf(" %c", &first_card_state);
  
  printf("Insira o número da carta: ");
  scanf("%s", first_card_code);

  printf("Insira o nome da cidade: ");
  scanf("%s", first_card_city);

  printf("População: ");
  scanf("%d", &first_card_population);

  printf("Área em Km^2: ");
  scanf("%f", &first_card_area);

  printf("PIB: ");
  scanf("%f", &first_card_gdp);

  printf("Número de pontos turísticos: ");
  scanf("%d", &first_card_atractions);

  first_card_population_density = first_card_area / first_card_population;
  first_card_gdp_percapita = first_card_gdp / first_card_population;

  first_card_power =
    first_card_population +
    first_card_area -
    first_card_population_density +
    first_card_gdp +
    first_card_gdp_percapita +
    first_card_atractions;

  // CARTA 2
  printf("\nCARTA 2\n");

  printf("Insira o estado(letra A~H): ");
  scanf(" %c", &second_card_state);

  printf("Insira o número da carta: ");
  scanf("%s", second_card_code);

  printf("Insira o nome da cidade: ");
  scanf("%s", second_card_city);

  printf("População: ");
  scanf("%d", &second_card_population);

  printf("Área em Km^2: ");
  scanf("%f", &second_card_area);

  printf("PIB: ");
  scanf("%f", &second_card_gdp);

  printf("Número de pontos turísticos: ");
  scanf("%d", &second_card_atractions);

  second_card_population_density = second_card_area / second_card_population;
  second_card_gdp_percapita = second_card_gdp / second_card_population;

  second_card_power =
    second_card_population +
    second_card_area -
    second_card_population_density +
    second_card_gdp +
    second_card_gdp_percapita +
    second_card_atractions;

  printf("######## Comparar cartas ########\n");
  printf("1. Código\n");
  printf("2. Nome\n");
  printf("3. População\n");
  printf("4. Área\n");
  printf("5. PIB\n");
  printf("6. Pontos turísticos\n");
  printf("7. Densidade populacional\n");
  printf("8. PIB Per Capita\n");
  printf("\n");
  printf("Qual atributo deseja comparar?\n");
  scanf("%d", &menu_choice);

  switch (menu_choice) {
    case 1:
      printf("Código\n");
      printf("Carta 1: %s\nCarta 2: %s\n", first_card_code, second_card_code);
      break;
    case 2:
      printf("Cidade\n");
      printf("Carta 1: %s\nCarta 2: %s\n", first_card_city, second_card_city);
      break;
    case 3:
      printf("População\n");
      printf("Carta 1: %d - Carta 2: %d\n", first_card_population, second_card_population);
      printf("População: Carta %d venceu!\n", 1 + (second_card_population > first_card_population));
      break;
    case 4:
      printf("Área\n");
      printf("Carta 1: %.2f - Carta 2: %.2f\n", first_card_area, second_card_area);
      printf("Área: Carta %d venceu (%d)\n", 1 + (second_card_area > first_card_area));
      break;
    case 5:
      printf("PIB\n");
      printf("Carta 1: %.2f - Carta 2: %.2f\n", first_card_gdp, second_card_gdp);
      printf("PIB: Carta %d venceu (%d)\n", 1 + (second_card_gdp > first_card_gdp));
      break;
    case 6:
      printf("Pontos turísticos\n");
      printf("Carta 1: %d - Carta 2: %d\n", first_card_atractions, second_card_atractions);
      printf("Pontos turísticos: Carta %d venceu (%d)\n", 1 + (second_card_atractions > first_card_atractions));
      break;
    case 7:
      printf("Densidade Populacional\n");
      printf("Carta 1: %.2f - Carta 2: %.2f\n", first_card_population_density, second_card_population_density);
      printf("Densidade populacional: Carta %d venceu (%d)\n", 1 + (second_card_population_density < first_card_population_density));
      break;
    case 8:
      printf("PIB Per Capita\n");
      printf("Carta 1: %.2f - Carta 2: %.2f\n", first_card_gdp_percapita, second_card_gdp_percapita);
      printf("PIB per capita: Carta %d venceu (%d)\n", 1 + (second_card_gdp_percapita > first_card_gdp_percapita));
      break;
    default:
      printf("Opção inválida!");
      break;
  }

  return 0;
}
