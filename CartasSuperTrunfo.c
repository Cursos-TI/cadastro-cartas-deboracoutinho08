#include <stdio.h>
#include <string.h>

int main() {

  // Carta 01
    printf("Carta 01 - Super trunfo\n");
    
    int populacao = 2343534;
    int numero = 50;
    float area = 8516.73;
    float PIB = 9.948730;
    char nome[30] = "Belo Horizonte";
    char codigo[30] = "A01";

    printf("População: %d\n", populacao);
    printf("Número de pontos turísticos: %d turistas\n", numero);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f trilhões de dólares\n", PIB);
    printf("Código da carta: %s\n", codigo);
    printf("Nome: %s\n", nome);

    return 0;
}

