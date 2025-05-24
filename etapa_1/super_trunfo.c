#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1[2];   // Apenas 1 letra + '\0'
    char numero1[3];   // 2 dígitos + '\0'
    char codigoFinal1[5];  // 1 letra + 2 dígitos + '\0' (ex: "A01")
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a segunda carta
    char estado2[2];   // Apenas 1 letra + '\0'
    char numero2[3];   // 2 dígitos + '\0'
    char codigoFinal2[5];  // 1 letra + 2 dígitos + '\0' (ex: "A01")
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite uma letra entre A a H: ");
    scanf("%1s", estado1);
    
    printf("Digite o código da carta entre 01 a 04: ");
    scanf("%2s", numero1);
    
    // Concatena a letra com o número para formar o código completo
    sprintf(codigoFinal1, "%s%s", estado1, numero1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Lê a string com espaços
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Entrada de dados da segunda carta
    printf("Cadastro da Carta 2:\n");
    printf("Digite uma letra entre A a H: ");
    scanf("%1s", estado2);
    
    printf("Digite o código da carta entre 01 a 04: ");
    scanf("%2s", numero2);
    
    // Concatena a letra com o número para formar o código completo
    sprintf(codigoFinal2, "%s%s", estado2, numero2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2); // Lê a string com espaços
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoFinal1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoFinal2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

