#include <stdio.h>

int main()
{
 
    char    estado1;
    char    cod1[3];        //Código da Carta
    char    cidade1[50];
    float   area1;
    float   pib1;
    int     hab1;           //População
    int     npt1;           //Número de Pontos Turísticos

    char    estado2;
    char    cod2[3];        //Código da Carta
    char    cidade2[50];
    float   area2;
    float   pib2;
    int     hab2;           //População
    int     npt2;           //Número de Pontos Turísticos

    

    printf("--------------------------------------------------------------------\n");
    printf("Digite os dados solicitados a seguir para criar a - Primeira carta - \n");
    printf("--------------------------------------------------------------------\n");
    
    printf("Escolha uma letra de A a H para representar o estado:");
    scanf(" %c", &estado1);

    printf("Escolha entre 01 a 04 para definir o número da carta:");
    scanf(" %s", cod1);

    printf("Escolha o nome da cidade:");
    scanf(" %s", cidade1);

    printf("Digite a população:");
    scanf(" %i", &hab1);

    printf("Digite a área da cidade:");
    scanf(" %f", &area1);

    printf("Digite o PIB:");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade:");
    scanf(" %d", &npt1);

    printf("\n");

    printf("-------------------------------------------------------------------\n");
    printf("Digite os dados solicitados a seguir para criar a - Segunda carta - \n");
    printf("-------------------------------------------------------------------\n");
    
    printf("Escolha uma letra de A a H para representar o estado:");
    scanf(" %c", &estado2);

    printf("Escolha entre 01 a 04 para definir o número da carta:");
    scanf(" %s", cod2);

    printf("Escolha o nome da cidade:");
    scanf(" %s", cidade2);

    printf("Digite a população:");
    scanf(" %i", &hab2);

    printf("Digite a área da cidade:");
    scanf(" %f", &area2);

    printf("Digite o PIB:");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade:");
    scanf(" %d", &npt2);

    printf("\n");

    printf("Carta 1\n");
    printf("Estado:%c\n", estado1);
    printf("Código:%c%s\n", estado1, cod1);
    printf("Cidade:%s\n", cidade1);
    printf("População:%i\n", hab1);
    printf("Área:%.2f m²\n", area1);
    printf("PIB:%.2f\n", pib1);
    printf("Pontos turísticos:%d\n", npt1);

    printf("\n");

    printf("Carta 2\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%c%s\n", estado2, cod2);
    printf("Cidade:%s\n", cidade2);
    printf("População:%i\n", hab2);
    printf("Área:%.2f m²\n", area2);
    printf("PIB:%.2f\n", pib2);
    printf("Pontos turísticos: %d\n", npt2);

    printf("\n");

    return 0;

}