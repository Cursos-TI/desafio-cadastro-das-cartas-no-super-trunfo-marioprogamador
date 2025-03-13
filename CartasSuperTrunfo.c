#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() { 
    printf ("desafio super trunfo novato!\n");
// variaves da carta 1
char estado1[20];
char codigo1[10];
char nome_da_cidade1[50];
int populacao1;
float area1_km2;
float pib1;
int pontod_turisticos1;


// variaves da carta 2
char estado2[20];
char codigo2[10];
char nome_da_cidade2[50];
int populacao2;
float area2_km2;
float pib2;
int pontos_turisticos2;


// preenchendo dados da carta 1
printf(" preenchendo dados da carta 1\n");

printf("digite seu estado:");
scanf("%s", &estado1);

printf("digite seu codigo:");
scanf("%S", &codigo1);

printf("digite o nome da sua cidade:");
scanf("%s", &nome_da_cidade1);

printf("digite sua polulacao:");
scanf("%d", &populacao1);

printf("digite a area em km2:");
scanf("%f", &area1_km2,\n);

printf("digite o pib da sua cidade:");
scanf("%f", &pib1);

printf("digite os pontos turisticos:");
scanf("%d", &pontod_turisticos1);

// preenchendo os dados da carta 2

printf(" preenchendo dados da carta 2\n");


printf("digite seu estado:");
scanf("%s", &estado2);

printf("digite seu codigo:");
scanf("%s", &codigo2);

printf("digite o nome da sua cidade:");
scanf("%s", &nome_da_cidade2);

printf("digite sua populacao:");
scanf("%d", &populacao2);

printf("digite a area em km2:");
scanf("%f", &area2_km2);

printf("digite o pib:");
scanf("%f", &pib2);

printf("digite os pontos turisticos:");
scanf("%d", &pontos_turisticos2);
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
