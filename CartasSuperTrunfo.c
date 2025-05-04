#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    unsigned long int populacao1, populacao2;
    int numpontosturisticos1, numpontosturisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidadepop1, densidadepop2;
    float pibpercapta1, pibpercapta2;
    float superpoder1, superpoder2;
    
    // Cadastro das Cartas:
    // Carta 1
    // Cadastro de atributos
    printf("--- Nos passos a seguir, defina os atributos para a primeira carta. --- \n");
    printf("Insira a população: \n");
    scanf("%lu", &populacao1);
    printf("Insira a área: \n");
    scanf("%f", &area1);
    printf("Insira o PIB: \n");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &numpontosturisticos1);
    // Cálculo dos atributos secundários
    densidadepop1 = (float)populacao1/area1;
    pibpercapta1 = pib1/(float)populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)numpontosturisticos1 + 1/densidadepop1 + pibpercapta1;
    printf("Atributos da primeira carta cadastrados com sucesso! \n\n");
    
    // Carta 2
    // Cadastro de atributos
    printf("--- Agora, defina os atributos para a segunda carta. ---\n");
    printf("Insira a população: \n");
    scanf("%lu", &populacao2);
    printf("Insira a área: \n");
    scanf("%f", &area2);
    printf("Insira o PIB: \n");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &numpontosturisticos2);
    // Cálculo dos atributos secundários
    densidadepop2 = (float)populacao2/area2;
    pibpercapta2 = pib2/(float)populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)numpontosturisticos2 + 1/densidadepop2 + pibpercapta2;
    printf("Atributos da segunda carta cadastrados com sucesso! \n\n");
    
    // Exibição dos Dados das Cartas:
    printf("Os atributos cadastrados para as cartas foram os seguintes: \n");
    printf("--- CARTA 1 --- \n");
    printf(" - População: %lu \n - Área: %.2f \n - PIB: %.2f \n - Número de pontos turísticos: %d \n", populacao1, area1, pib1, numpontosturisticos1);
    printf(" - Densidade Populacional: %.2f \n - PIB per Capta: %.2f \n - Super Poder: %.2f \n\n", densidadepop1, pibpercapta1, superpoder1);
    printf("--- CARTA 2 --- \n");
    printf(" - População: %lu \n - Área: %.2f \n - PIB: %.2f \n - Número de pontos turísticos: %d \n", populacao2, area2, pib2, numpontosturisticos2);
    printf(" - Densidade Populacional: %.2f \n - PIB per Capta: %.2f \n - Super Poder: %.2f \n\n", densidadepop2, pibpercapta2, superpoder2);

    // Comparação das cartas
    printf("--- Comparando as cartas! --- \n");
    printf("População: ");
    if (populacao1 > populacao2){
        printf("1");
        printf(" - Carta 1 vence\n");
    }else{
        printf("0");
        printf(" - Carta 2 vence\n");
    }

    printf("Área: ");
    if (area1 > area2){
        printf("1");
        printf(" - Carta 1 vence\n");
    }else{
        printf("0");
        printf(" - Carta 2 vence\n");
    }

    printf("PIB: ");
    if (pib1 > pib2){
        printf("1");
        printf(" - Carta 1 vence\n");
    }else{
        printf("0");
        printf(" - Carta 2 vence\n");
    }

    printf("Número de pontos turísticos: ");
    if (numpontosturisticos1 > numpontosturisticos2){
        printf("1");
        printf(" - Carta 1 vence\n");
    }else{
        printf("0");
        printf(" - Carta 2 vence\n");
    }

    printf("Densidade Populacional: ");
    if (densidadepop1 < densidadepop2){
        printf("1");
        printf(" - Carta 1 vence\n");
    }else{
        printf("0");
        printf(" - Carta 2 vence\n");
    }

    printf("PIB per Capta: ");
    if (pibpercapta1 > pibpercapta2){
        printf("1");
        printf(" - Carta 1 vence\n");
    }else{
        printf("0");
        printf(" - Carta 2 vence\n");
    }

    printf("Super Poder: ");
    if (superpoder1 > superpoder2){
        printf("1");
        printf(" - Carta 1 vence\n");
    }else{
        printf("0");
        printf(" - Carta 2 vence\n");
    }    

    return 0;
}
