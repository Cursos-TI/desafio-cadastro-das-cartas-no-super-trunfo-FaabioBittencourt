#include <stdio.h>

int main ()
{

    // Declaraçao da 1 carta em variaveis
    char estado1[5] = "A", codigocarta1[5] = "01", nomecidade1[20] = "SãoPaulo";
    float pib1 = 799.28,  areakm_1 = 1521.11;
    int populacao1 = 12325000, numerosturisticos1 = 50;
    float densidade_populacional1 = pib1 / areakm_1;
    float pib_per_capita1 = pib1 / populacao1;

    // Declaraçao da 2 carta em variaveis
    char estado2[5] = "B", codigocarta2[5] = "02", nomecidade2[20] = "RiodeJaneiro";
    float pib2 = 600.50, areakm_2 = 1200.25;
    int populacao2 = 6748000, numerosturisticos2 = 30;
    float densidade_populacional2 = pib2 / areakm_2;
    float pib_per_capita2 = pib2 / populacao2;

    // Declaração da 3 carta em variaveis
    char estado3[5] = "C", codigocarta3[5] = "03", nomecidade3[20] = "PortoAlegre";
    float pib3 = 677.80, areakm_3 = 496.80;
    int populacao3 = 1335600, numerosturisticos3 = 47;
    float densidade_populacional3 = pib3 / areakm_3;
    float pib_per_capita3 = pib3 / populacao3;

    // Interaçao e leitura primeira carta
        printf("Bem vindo ao The city Cards BR!\n");
        printf("Digite o codigo da carta: -> A01 <-\n");
        scanf("%s", estado1);
        printf("Cidade: %s\n", nomecidade1);
        printf("Area em km: %f\n", areakm_1);
        printf("População: %d\n", populacao1);
        printf("Pontos turisticos: %d\n", numerosturisticos1);     
        printf("PIB: %f\n", pib1);
        printf("Densidade Populacional: %.2f\n", densidade_populacional1);
        printf("PIB Per Capita: %.2f\n", pib_per_capita1);
        printf("\n");
    
    // Interaçao e leitura segunda carta   
        printf("Digite o codigo da carta: -> B02 <-\n");
        scanf("%s", estado2);
        printf("Cidade: %s\n", nomecidade2);
        printf("Area em km: %f\n", areakm_2);
        printf("População: %d\n", populacao2);
        printf("Pontos turisticos: %d\n", numerosturisticos2);     
        printf("PIB: %f\n", pib2);
        printf("Densidade Populacional: %.2f\n", densidade_populacional2);
        printf("PIB Per Capita: %.2f\n", pib_per_capita2);
        printf("\n");
    
    // Interação e leitura terceira carta
        printf("Digite o codigo da carta: -> C03 <-\n");
        scanf("%s", estado3);
        printf("Cidade: %s\n", nomecidade3);
        printf("Area em Km: %f\n", areakm_3);
        printf("População: %d\n", populacao3);
        printf("Pomtos turisticos: %d\n", numerosturisticos3);
        printf("PIB: %f\n", pib3);
        printf("Densidade Populacional: %.2f\n", densidade_populacional3);
        printf("PIB Per Capita: %.2f\n", pib_per_capita3);
        printf("\n");
    


return 0;

}
