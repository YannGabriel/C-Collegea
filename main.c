#include <stdio.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese_Brazil.1252");

  char animalName[50];
  int animalNumbers;
  float foodPrice, foodNumberDay, foodNumberMonth;

  printf("----- Zoologico Aventuras -----");
  printf("\n\nInsira o nome do animal que deseja cadastrar: ");
  scanf("%s", &animalName);

  printf("\nQuantos quilos por dia (KG/D) esse animal consome? Insira: ");
  scanf("%f", &foodNumberDay);

  printf("\nQuantos deste animal o zoologico possui? Insira: ");
  scanf("%d", &animalNumbers);

  printf("\nQuanto custa o Kg de comida desse animal? Insira: ");
  scanf("%f", &foodPrice);

foodNumberDay = animalNumbers * foodNumberDay;
foodNumberMonth = foodNumberDay * 30;
foodPrice = foodPrice * foodNumberDay  * 30;
  
  printf("\n\n--- Resumo do Cadastro ---");
  printf("\nAnimal: %s", animalName);
  printf("\nQuantidade: %d", animalNumbers);
  printf("\nConsumo diário %.2f kg", foodNumberDay);
  printf("\nConsumo mensal %.2f kg", foodNumberMonth);
  printf("\nCusto de comida mensal: R$ %.2f", foodPrice);


}