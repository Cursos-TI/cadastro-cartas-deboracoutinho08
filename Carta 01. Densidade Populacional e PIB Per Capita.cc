#include <stdio.h>
#include <string.h>

int main() {

  // Carta 01
    printf("Carta 01 - Super trunfo / Calculo de Densidade e PIB per capita\n");
    
    int populacao = 2343534;  // Em habitantes
    int numero = 50;
    float area =  8516.73; // Em km²
    float PIB = 9.948730; // Em trilhoes de dolares
    char nome[30] = "Belo Horizonte";
    char codigo[30] = "A01";


    printf("Populacao: %d\n", populacao);
    printf("Numero de pontos turisticos: %d turistas\n", numero);
    printf("area: %.2f km²\n", area);
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