#include <stdio.h>

int main()
{
 
    char    estado1, estado2, cod1[3], cod2[3], cidade1[50], cidade2[50];
    float   area1, area2, pib1, pib2, dp1, dp2, pc1, pc2;
    int     popul1, popul2, npt1, npt2;           
              
    printf("******************************************************************\n");
    printf("Digite os dados solicitados a seguir para criar a PRIMEIRA CARTA\n");
    printf("******************************************************************\n");
    printf("\n");
    printf("Escolha uma letra de A a H para representar o estado:");
    scanf(" %c", &estado1);

    printf("Escolha entre 01 a 04 para definir o número da carta:");
    scanf(" %s", cod1);

    printf("Escolha o nome da cidade:");
    scanf(" %s", cidade1);

    printf("Digite a população:");
    scanf(" %i", &popul1);

    printf("Digite a área da cidade:");
    scanf(" %f", &area1);

    printf("Digite o PIB:");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade:");
    scanf(" %d", &npt1);

    printf("\n");

    printf("***************************************************************\n");
    printf("Digite os dados solicitados a seguir para criar a SEGUNDA CARTA\n");
    printf("***************************************************************\n");
    printf("\n");
    printf("Escolha uma letra de A a H para representar o estado:");
    scanf(" %c", &estado2);

    printf("Escolha entre 01 a 04 para definir o número da carta:");
    scanf(" %s", cod2);

    printf("Escolha o nome da cidade:");
    scanf(" %s", cidade2);
    
    printf("Digite a população:");
    scanf(" %i", &popul2);
    
    printf("Digite a área da cidade:");
    scanf(" %f", &area2);
    
    printf("Digite o PIB:");
    scanf(" %f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos da cidade:");
    scanf(" %d", &npt2);

    dp1 = (float) popul1/area1;
    pc1 = (float) pib1/popul1;

    dp2 = (float) popul2/area2;
    pc2 = (float) pib2/popul2;

    printf("\n");

    printf("Carta 1\n");
    printf("Estado:%c\n", estado1);
    printf("Código:%c%s\n", estado1, cod1);
    printf("Cidade:%s\n", cidade1);
    printf("População:%i\n", popul1);
    printf("Área:%.2fm²\n", area1);
    printf("PIB:%.2f\n", pib1);
    printf("Pontos turísticos:%d\n", npt1);
    printf("Densidade Populacional:%.2f\n", dp1);
    printf("PIB per Capita:%.2f\n", pc1);

    printf("\n");

    printf("Carta 2\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%c%s\n", estado2, cod2);
    printf("Cidade:%s\n", cidade2);
    printf("População:%i\n", popul2);
    printf("Área:%.2fm²\n", area2);
    printf("PIB:%.2f\n", pib2);
    printf("Pontos turísticos:%d\n", npt2);
    printf("Densidade Populacional:%.2f\n", dp2);
    printf("PIB per Capita:%.2f\n", pc2);

    printf("\n");

    return 0;

}