#include <stdio.h>

int main ()
{

    // Declaraçao da 1 carta em variaveis 
    char estado1[5] = "A", codigocarta1[5] = "01", nomecidade1[20] = "SãoPaulo";
    float pib1 = 699.28,  areakm_1 = 1521.11;
    int populacao1 = 12325000, numerosturisticos1 = 50;
    
    // Declaraçao da 2 carta em variaveis
    char estado2[5] = "B", codigocarta2[5] = "02", nomecidade2[20] = "RiodeJaneiro";
    float pib2 = 300.50, areakm_2 = 1200.25;
    int populacao2 = 6748000, numerosturisticos2 = 30;

    // Interaçao e leitura primeira carta
        printf("Bem vindo ao The city Cards BR!\n");
        printf("Digite o codigo da carta: -> A01 <-\n");
        scanf("%s", estado1);
        printf("Cidade: %s\n", nomecidade1);
        printf("Area em km: %f\n", areakm_1);
        printf("População: %d\n", populacao1);
        printf("Pontos turisticos: %d\n", numerosturisticos1);     
        printf("PIB: %f\n", pib1);
        printf("\n");
    
    // Interaçao e leitura segunda carta   
        printf("Digite o codigo da carta: -> B02 <-\n");
        scanf("%s", estado2);
        printf("Cidade: %s\n", nomecidade2);
        printf("Area em km: %f\n", areakm_2);
        printf("População: %d\n", populacao2);
        printf("Pontos turisticos: %d\n", numerosturisticos2);     
        printf("PIB: %f\n", pib2);
        printf("\n");
        printf("Se Acabou!!");

return 0;

}