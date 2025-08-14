#include <stdio.h>

int main() {
    // Declarando das variáveis
    char estado1[50];
    char codigo1[3];
    char cidade1[50];
    double populacao1;
    float area1;
    float pib1;
    int turismo1;

// Coletando as informações da carta 1
    printf("Digite o Estado1: \n");
    scanf("%s", &estado1);
    printf("Digite o codigo1: \n");
    scanf("%s", &codigo1);
    printf("Digite a cidade1: \n");
    scanf("%s", &cidade1);
    printf("Digite a populacao1: \n");
    scanf("%f", &populacao1);
    printf("Digite a area1: \n");
    scanf("%f", &area1);
    printf("Digite o pib1: \n");
    scanf("%f", &pib1);
    printf("Digite os pontos turísticos1: \n");
    scanf(" %d", &turismo1);

// Imprimindo as informações da carta1
    printf("Estado1: %s \n", estado1);
    printf("Codigo1: %s \n", codigo1);
    printf("Cidade1: %s \n", cidade1);
    printf("População1: %f\n", populacao1);
    printf("Área1: %.2f \n", area1);
    printf("Pib1: %.2f \n", pib1);
    printf("Pontos turisticos1: %d \n", turismo1);

    return 0;
}
