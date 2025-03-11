#include <stdio.h>

int main()
{
    // Declaração de variáveis
    char    estado1, estado2, cod1[3], cod2[3], cidade1[50], cidade2[50];
    float   area1, area2, pib1, pib2, densidadep1, densidadep2, pibpc1, pibpc2, superpoder1, superpoder2,
            comparacao_populacao, comparacao_area, comparacao_pib, comparacao_npontot,
            comparacao_densidadep, comparacao_pibpc, comparacao_superpoder;
    int     npontot1, npontot2;  
    unsigned long int  populacao1, populacao2;         
    
    // Leitura dos dados das cartas
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("Digite os dados solicitados a seguir para criar a CARTA 1\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    
    printf("\n");
    printf("Escolha uma letra de A a H para representar o estado:");
    scanf(" %c", &estado1);
    printf("Escolha entre 01 a 04 para definir o numero da carta:");
    scanf(" %s", cod1);
    printf("Escolha o nome da cidade:");
    scanf(" %s", cidade1);
    printf("Digite a populacao:");
    scanf(" %u", &populacao1);
    printf("Digite a area da cidade:");
    scanf(" %f", &area1);
    printf("Digite o PIB:");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade:");
    scanf(" %d", &npontot1);

    printf("\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("Digite os dados solicitados a seguir para criar a CARTA 2\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    
    printf("\n");
    printf("Escolha uma letra de A a H para representar o estado:");
    scanf(" %c", &estado2);
    printf("Escolha entre 01 a 04 para definir o numero da carta:");
    scanf(" %s", cod2);
    printf("Escolha o nome da cidade:");
    scanf(" %s", cidade2);
    printf("Digite a populacao:");
    scanf(" %u", &populacao2);
    printf("Digite a area da cidade:");
    scanf(" %f", &area2);    
    printf("Digite o PIB:");
    scanf(" %f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade:");
    scanf(" %d", &npontot2);
    
    
    // Cálculo da densidade populacional e PIB per capita
    densidadep1 = (float) populacao1/area1;
    pibpc1 =      (float) pib1/populacao1;
    densidadep2 = (float) populacao2/area2;
    pibpc2 =      (float) pib2/populacao2;

    // Cálculo do Super Poder
    superpoder1 = (float) populacao1 + area1 + pib1 + npontot1 + pibpc1 + (1 / densidadep1);
    superpoder2 = (float) populacao2 + area2 + pib2 + npontot2 + pibpc2 + (1 / densidadep2);
    
    // Exibição dos dados das cartas
    printf("\n");
    printf("- - - - - - - - - - DADOS DAS CARTAS  - - - - - - - - -\n");
    printf("\n");
    printf("Carta 1\n");
    printf("Estado:%c\n", estado1);
    printf("Codigo:%c%s\n", estado1, cod1);
    printf("Cidade:%s\n", cidade1);
    printf("Populacao:%u\n", populacao1);
    printf("Area:%.2f m2\n", area1);
    printf("PIB:%.2f\n", pib1);
    printf("Pontos turisticos:%d\n", npontot2);
    printf("Densidade Populacional:%.2f\n", densidadep1);
    printf("PIB per Capita:%.2f\n", pibpc1);

    printf("\n");
    printf("Carta 2\n");
    printf("Estado:%c\n", estado2);
    printf("Codigo:%c%s\n", estado2, cod2);
    printf("Cidade:%s\n", cidade2);
    printf("Populacao:%u\n", populacao2);
    printf("Area:%.2f m2\n", area2);
    printf("PIB:%.2f\n", pib2);
    printf("Pontos turisticos:%d\n", npontot2);
    printf("Densidade Populacional:%.2f\n", densidadep2);
    printf("PIB per Capita:%.2f\n", pibpc2);

    printf("\n");

    // Comparação das cartas
    printf("\n");
    printf("- - - - - - - - - - COMPARACAO DAS CARTAS - - - - - - - - - -\n");

    printf("\n");
    printf("OBS! Quando o resultado for ( 1 ) a CARTA 1 sera a vencedora!\n");
    printf("OBS! Quando o resultado for ( 0 ) a CARTA 2 sera a vencedora!\n");
    
    printf("\n");
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", npontot1 > npontot2);
    printf("Densidade Populacional: %d\n", densidadep1 < densidadep2);
    printf("PIB per Capita: %d\n", pibpc1 > pibpc2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);

    return 0;

}