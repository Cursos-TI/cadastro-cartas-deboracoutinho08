#include <stdio.h>
#include <string.h>

int main() {



    printf("\n=================================\n");
    printf("    Carta 02 - Super Trunfo\n");
    printf("=================================\n\n");

    
    int populacao1 = 2343534;  // Em habitantes
    int numero1 = 50;
    float area1 =  8516.73; // Em km²
    float PIB1 = 9.948730; // Em trilhoes de dolares
    char nome1[30] = "Belo Horizonte";
    char codigo1[30] = "A01";


    printf("Populacao: %d\n", populacao1);
    printf("Numero de pontos turisticos: %d turistas\n", numero1);
    printf("area: %.2f km2\n", area1);
    printf("PIB: %.2f trilhoes de dolares\n", PIB1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome: %s\n", nome1);


    //Calculo da Densidade populacional = População / Área por km²

     float densidade1 = populacao1 / area1;
     printf("Densidade populacional: %.3lf habitantes/km2\n", densidade1);

     //Calculo do PIB per capita = PIB / População

    unsigned long long int pib_em_dolares = (unsigned long long int)(PIB1 * 1000000000000.0); // 1e12
    float pib_per_capita = (float)pib_em_dolares / populacao1;

    printf("PIB per capita: %.2f dolares\n", pib_per_capita);


    
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    printf("\n=================================\n");
    printf("    Carta 02 - Super Trunfo\n");
    printf("=================================\n\n");

    int populacao2 = 3343534; // Em habitantes
    int numero2 = 70;
    float area2 = 4516.73; // Em km ²
    float PIB2 = 2.948730; // Em trilhoes de dolares
    char nome2[30] = "Betim";
    char codigo2[30] = "A02";

// Exibir informações da carta 2
    printf("Populacao: %d\n", populacao2);
    printf("Numero de pontos turisticos: %d turistas\n", numero2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f trilhoes de dolares\n", PIB2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome: %s\n", nome2);

    //Calculo da Densidade populacional = População / Área por km²

     float densidade2 = populacao2 / area2;
     printf("Densidade populacional: %.2f habitantes/km2\n", densidade2);

     //Calculo do PIB per capita = PIB / População

    unsigned long long int pib_em_dolares2 = (unsigned long long int)(PIB2 * 1000000000000.0); // 1e12
    float pib_per_capita2 = (float)pib_em_dolares2 / populacao2;
    printf("PIB per capita Carta 2: %.2f dolares\n", pib_per_capita2);

   
    // Comparações entre as cartas

    int resultado_populacao = (populacao1 > populacao2);
    int resultado_numero = (numero1 > numero2); 
    int resultado_area = (area1 > area2);
    int resultado_PIB = (PIB1 > PIB2);  
    int resultado_densidade = (densidade1 > densidade2);
    int resultado_pib_per_capita = (pib_per_capita > pib_per_capita2);

    printf("\nComparacoes entre as cartas:\n");
    printf("A carta 1 tem maior populacao que a carta 2? %d\n", resultado_populacao);
    printf("A carta 1 tem maior numero de pontos turisticos que a carta 2? %d\n", resultado_numero);
    printf("A carta 1 tem maior area que a carta 2? %d\n", resultado_area);
    printf("A carta 1 tem maior PIB que a carta 2? %d\n", resultado_PIB);
    printf("A carta 1 tem maior densidade populacional que a carta 2? %d\n", resultado_densidade);
    printf("A carta 1 tem maior PIB per capita que a carta 2? %d\n", resultado_pib_per_capita); 



    return 0;
}