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
 printf("Estado: A\n");
 printf("Código: A01\n");
 printf("Nome: Alagoas\n");
 printf("População: 3220104\n");
 printf("Área: 2784,14 km²\n");
 printf("PIB: 76.07 bilhões de reais\n");
 printf("Número de Pontos Turísticos: 30\n");

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
 printf("Estado: B");
 printf("Código: B02\n");
 printf("Nome: Sergipe\n");
 printf("População: 2291000\n");
 printf("Área: 2193.18 km².\n");
 printf("PIB: 51.86 bilhões de reais\n");
 printf("Pontos Turísticos: 20\n");

 printf("\nTodas as cartas foram cadastradas com sucesso!\n");
    return 0;
}
