#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

 
    char estado;                 // Letra do estado
    char codigo[4];              // Código da carta (1 letra + 2 digítos)
    char nome[50];               // Nome da Cidade
    int populacao;               // População
    float area;                  // Area em km²
    float pib;                   // PIB
    int pontosTuristicos;        // Pontos Turisticos
    

    // Cadastro da primeira carta
 printf("Cadastro da Carta 1:\n");
 printf("Digite o estado: ");
 scanf(" %c", &estado);
 printf("Digite o código da cidade (1 letra + 2 dígitos): ");
 scanf("%s", &codigo);
 printf("Digite o nome da cidade: ");
 scanf(" %s", &nome); 
 printf("Digite a população: ");
 scanf("%d", &populacao);
 printf("Digite a área em km²: ");
 scanf("%f", &area);
 printf("Digite o PIB: ");
 scanf("%f", &pib);
 printf("Digite o número de pontos turísticos: ");
 scanf("%d", &pontosTuristicos);
    
    // Exibição dos dados da primeira carta
 printf("\nDados da Carta 1:\n");
 printf("Estado: %c\n", estado);
 printf("Código: %s\n", codigo);
 printf("Nome: %s\n", nome);
 printf("População: %d\n", populacao);
 printf("Área: %f km²\n", area);
 printf("PIB: %f bilhões de reais\n", pib);
 printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
   
    // Cadastro da segunda carta
 printf("\nCadastro da Carta 2:\n");
 printf("Digite o estado: ");
 scanf(" %c", &estado);
 printf("Digite o código da cidade (1 letra + 2 dígitos): ");
 scanf("%s", &codigo);
 printf("Digite o nome da cidade: ");
 scanf(" %s", &nome);
 printf("Digite a população: ");
 scanf("%d", &populacao);
 printf("Digite a área em km²: ");
 scanf("%f", &area);
 printf("Digite o PIB: ");
 scanf("%f", &pib);
 printf("Digite o número de pontos turísticos: ");
 scanf("%d", &pontosTuristicos);
    
    // Exibição dos dados da segunda carta
 printf("\nDados da Carta 2:\n");
 printf("Estado: %c\n", estado);
 printf("Código: %s\n", codigo);
 printf("Nome: %s\n", nome);
 printf("População: %d\n", populacao);
 printf("Área: %f km²\n", area);
 printf("PIB: %f bilhões de reais\n", pib);
 printf("Pontos Turísticos: %d\n", pontosTuristicos);
   

   printf("\nTodas as cartas foram cadastradas com sucesso!\n");
    return 0;
}
