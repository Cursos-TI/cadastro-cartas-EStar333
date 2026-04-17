#include <stdio.h>

int main(){
    
    // Cadastro da Carta 1
    
    char estado1; // Uma letra de 'A' a 'H'
    char codigo_carta1[4]; // A letra do estado seguida de um número de 01 a 04 (ex.:A01)
    char nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area_cidade1, PIB1, densidade_populacional1, PIB_percapita1; 
    
    printf(" Carta 1 \n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex.: A01): "); 
    scanf("%s", codigo_carta1);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);
    
    printf("Digite o número da população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área da cidade (em Km2): ");
    scanf("%f", &area_cidade1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1); 
    
    densidade_populacional1 = populacao1 / area_cidade1;
    PIB_percapita1 = PIB1 / populacao1;
    
     // Cadastro da Carta 2
    
    char estado2; // Uma letra de 'A' a 'H'
    char codigo_carta2[4]; // A letra do estado seguida de um número de 01 a 04 (ex.:A01)
    char nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area_cidade2, PIB2, densidade_populacional2, PIB_percapita2; 
    
    printf("\n Carta 2 \n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (ex.: A01): "); 
    scanf("%s", codigo_carta2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);
    
    printf("Digite o número da população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade (em Km2): ");
    scanf("%f", &area_cidade2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    densidade_populacional2 = populacao2 / area_cidade2;
    PIB_percapita2 = PIB2 / populacao2;
    
    printf("\n Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area_cidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", PIB_percapita1);
    
    printf("\n Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area_cidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", PIB_percapita2);
    
    return 0;
}
