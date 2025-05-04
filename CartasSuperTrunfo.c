#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Atributos carta 1
    int populacao1, numpontosturisticos1;
    float area1, pib1;
    // Atributos carta 2
    int populacao2, numpontosturisticos2;
    float area2, pib2;
    
    // Cadastro das Cartas:
    // Carta 1
    printf("--- Nos passos a seguir, defina os atributos para a primeira carta. --- \n");
    printf("Insira a população: \n");
    scanf("%d", &populacao1);
    printf("Insira a área: \n");
    scanf("%f", &area1);
    printf("Insira o PIB: \n");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &numpontosturisticos1);
    printf("Atributos da primeira carta cadastrados com sucesso! \n\n");
    // Carta 2
    printf("--- Agora, defina os atributos para a segunda carta. ---\n");
    printf("Insira a população: \n");
    scanf("%d", &populacao2);
    printf("Insira a área: \n");
    scanf("%f", &area2);
    printf("Insira o PIB: \n");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &numpontosturisticos2);
    printf("Atributos da segunda carta cadastrados com sucesso! \n\n");
    
    // Exibição dos Dados das Cartas:
    printf("Os atributos cadastrados para as cartas foram os seguintes: \n");
    printf("--- CARTA 1 ---");
    printf("População: %d \n Área: %.2f \n PIB: %.2f \n Número de pontos turísticos: %d \n\n", populacao1, area1, pib1, numpontosturisticos1);
    printf("--- CARTA 2 ---");
    printf("População: %d \n Área: %.2f \n PIB: %.2f \n Número de pontos turísticos: %d \n\n", populacao2, area2, pib2, numpontosturisticos2);

    return 0;
}
