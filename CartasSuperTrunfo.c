#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Declarando Variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int PontoTuristico1, PontoTuristico2;

    //Coletando dados da CARTA1
    printf("==== CARTA 1 ====\n");
    printf(">> Estado (A-H): ");
    scanf(" %c", &estado1);
    printf(">> Codigo: ");
    scanf("%s", codigo1);
    printf(">> Nome da Cidade: ");
    scanf("%s", cidade1);
    printf(">> Populacao: ");
    scanf("%d", &populacao1);
    printf(">> Area (em km²): ");
    scanf("%f", &area1);
    printf(">> PIB: ");    
    scanf("%f", &pib1);    
    printf(">> Pontos Turisticos: ");
    scanf("%d", &PontoTuristico1);    

    //Coletando dados da CARTA2
    printf("\n");
    printf("==== CARTA 2 ====\n");
    printf(">> Estado (A-H): ");
    scanf(" %c", &estado2);
    printf(">> Codigo: ");
    scanf("%s", codigo2);
    printf(">> Nome da Cidade: ");
    scanf("%s", cidade2);
    printf(">> Populacao: ");
    scanf("%d", &populacao2);
    printf(">> Area (em km²): ");
    scanf("%f", &area2);
    printf(">> PIB: ");    
    scanf("%f", &pib2);    
    printf(">> Pontos Turisticos: ");
    scanf("%d", &PontoTuristico2);

    return 0;
}
