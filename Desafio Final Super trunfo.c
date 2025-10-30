#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // inicializa rand uma vez

    // Variaveis para cartas A e B

    char cartaA[30] = "Belo Horizonte";
    char cartaB[30] = "Betim";
    int populacaoA, populacaoB;
    int numeroPontosTuristicosA, numeroPontosTuristicosB;
    float areaA, areaB;
    



    // Menu Principal do Jogo de Super Trunfo


     int opcao_menu;
    printf("\n===================================\n");
    printf("   Menu Principal - Super Trunfo\n");
    printf("===================================\n");
    printf("1. Jogar Super Trunfo\n"); 
    printf("2. Ver regras do jogo\n"); 
    printf("3. Sair\n"); 
    scanf("%d", &opcao_menu);

    if(opcao_menu == 2) {
        printf("Regras do jogo:\n");
        printf("Cada jogador escolhe uma carta e um atributo para comparar.\n");
        printf("O jogador com o maior valor no atributo escolhido vence a rodada.\n");
        printf("O jogo continua até que todas as cartas sejam usadas.\n");
        return 0;
    } else if(opcao_menu == 3) {
        printf("Saindo do jogo. Ate mais!\n");
        return 0;

    } else if(opcao_menu != 1) {
        printf("Opcao invalida!\n");
   
    }
       

     // Definindo o nome das cartas

      
   
    switch(opcao_menu) {
        case 1:
            // Gera cartas aleatórias
            populacaoA = rand() % 1000000 + 50000;
            populacaoB = rand() % 1000000 + 50000;
            numeroPontosTuristicosA = rand() % 100 + 1;
            numeroPontosTuristicosB = rand() % 100 + 1;
            areaA = (float)(rand() % 100000 + 1000) / 10.0;
            areaB = (float)(rand() % 100000 + 1000) / 10.0;


            int Escolha_atributo;

            printf("Escolha um atributo:\n1. Populacao\n2. Area\n3. Pontos turisticos\n");
            scanf("%d", &Escolha_atributo);


              switch(Escolha_atributo) {
       case 1: // População
    if(populacaoA == populacaoB)
        printf("\nEmpate! Ambas as cartas têm %d habitantes\n", populacaoA);
    else
        printf("\n%s vence com %d habitantes! | %s: %d habitantes\n",
               (populacaoA > populacaoB) ? cartaA : cartaB,
               (populacaoA > populacaoB) ? populacaoA : populacaoB,
               (populacaoA > populacaoB) ? cartaB : cartaA,
               (populacaoA > populacaoB) ? populacaoB : populacaoA);
    break;

case 2: // Área
    if(areaA == areaB)
        printf("\nEmpate! Ambas as cartas têm %.2f km²\n", areaA);
    else
        printf("\n%s vence com %.2f km²! | %s: %.2f km²\n",
               (areaA > areaB) ? cartaA : cartaB,
               (areaA > areaB) ? areaA : areaB,
               (areaA > areaB) ? cartaB : cartaA,
               (areaA > areaB) ? areaB : areaA);
    break;

case 3: // Pontos turísticos
    if(numeroPontosTuristicosA == numeroPontosTuristicosB)
        printf("\nEmpate! Ambas as cartas têm %d pontos turísticos\n", numeroPontosTuristicosA);
    else
        printf("\n%s vence com %d pontos turísticos! | %s: %d\n",
               (numeroPontosTuristicosA > numeroPontosTuristicosB) ? cartaA : cartaB,
               (numeroPontosTuristicosA > numeroPontosTuristicosB) ? numeroPontosTuristicosA : numeroPontosTuristicosB,
               (numeroPontosTuristicosA > numeroPontosTuristicosB) ? cartaB : cartaA,
               (numeroPontosTuristicosA > numeroPontosTuristicosB) ? numeroPontosTuristicosB : numeroPontosTuristicosA);
    break;
        }

    }
}
