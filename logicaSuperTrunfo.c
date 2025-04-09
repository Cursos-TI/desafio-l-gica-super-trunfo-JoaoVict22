#include <stdio.h>

int main() {
    char estado1[20], estado2[20];
    
    char codigo1[20], codigo2[20];
    
    char cidade1[50], cidade2[50];

    int populacao1, populacao2;

    float area1, area2;

    float pib1, pib2;
    
    int pontos_turisticos1, pontos_turisticos2;

    float desidadePopulacional1, desidadePopulacional2;

    float Pibporcapital1, Pibporcapital2;

    //carta 1

    printf("Digite o estado: ");
    scanf(" %s", estado1);  

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1); 

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    desidadePopulacional1 = populacao1 / area1;

    Pibporcapital1 = pib1 / populacao1;

    // Carta 2

    printf("\nDigite o estado: ");
    scanf(" %s", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    desidadePopulacional2 = populacao2 / area2;

    Pibporcapital2 = pib2 / populacao2;

    //saida da carta 1

    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("area: %.2f km\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("a densidade populacional e: %f\n", desidadePopulacional1);
    printf("o pib por capital e: %f\n", Pibporcapital1);

    //saida da carta 2

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("a densidade populacional e: %f\n", desidadePopulacional2);
    printf("o pib por capital e: %f\n", Pibporcapital2);

    //comparcao das cartas

    if (Pibporcapital1 > Pibporcapital2)
    {
        printf("Carta 1 venceu");
    } else{
        printf("Carta 2 venceu");
    }
    

    return 0;
}