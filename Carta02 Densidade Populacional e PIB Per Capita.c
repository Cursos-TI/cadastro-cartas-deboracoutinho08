#include <stdio.h>
#include <string.h>

int main() {

    //Carta 02//
   printf("Carta 02 - Super Trunfo / Calculo de Densidade e PIB per capita\n");

    int populacao = 3343534;
    int numero = 70;
    float area = 4516.73;
    float PIB = 2.948730;
    char nome[30] = "Betim";
    char codigo[30] = "A02";

    printf("Populacao: %d\n", populacao);
    printf("Numero de pontos turisticos: %d turistas\n", numero);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f trilhoes de dolares\n", PIB);
    printf("Codigo da carta: %s\n", codigo);
    printf("Nome: %s\n", nome);


    //Calculo da Densidade populacional = População / Área por km²

     float densidade = populacao / area;
     printf("Densidade populacional: %.2f habitantes/km²\n", densidade);

     //Calculo do PIB per capita = PIB / População
      float pib_per_capita = (PIB * 1000000000000) / populacao;
      printf("PIB per capita: %.2f dolares\n", pib_per_capita);



    return 0;
}