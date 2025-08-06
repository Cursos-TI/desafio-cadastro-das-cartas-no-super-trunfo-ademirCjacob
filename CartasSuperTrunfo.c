#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Ademir

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    char estado, estado_2; // Estado
    char codigo_da_carta[10];
    char codigo_da_carta_2[10]; //Código da Carta
    char nome_da_cidade[30];
    char nome_da_cidade_2[30]; // Nome da Cidade
    int populacao, populacao_2, NumeroPontoTuristico, NumeroPontoTuristico_2; //Número de Pontos Turísticos, População 
    float area, area_2, PIB, PIB_2 ; // Área Por metro quadrado e PIB

        printf("Carta 1:\n");

        printf("Estado: ");
        scanf(" %c", &estado);
        
        printf("Código: ");
        scanf("%s", codigo_da_carta);
        
        printf("Nome da Cidade: ");
        scanf(" %s", nome_da_cidade);
       
        printf("População: ");
        scanf("%d", &populacao);

        printf("Área: ");
        scanf("%f", &area);

        printf("PIB: ");
        scanf("%f", &PIB);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &NumeroPontoTuristico); 

        printf("\n");

        printf("Carta 2:\n");

        printf("Estado: ");
        scanf(" %c", &estado_2);
        
        printf("Código: ");
        scanf("%s", codigo_da_carta_2);

        printf("Nome da Cidade: ");
        scanf(" %s", nome_da_cidade_2);
        
        printf("População: ");
        scanf("%d", &populacao_2);

        printf("Área: ");
        scanf("%f", &area_2);

        printf("PIB: ");
        scanf("%f", &PIB_2);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &NumeroPontoTuristico_2);
        
        printf("\n");

        printf("Carta 1:\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo_da_carta);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("População: %d\n", populacao);
        printf("Área: %fKm²\n", area); 
        printf("PIB: %f\n", PIB);
        printf("Número de Pontos Turístico: %d\n", NumeroPontoTuristico);

        printf("\n");

        printf("Carta 2:\n");
        printf("Estado: %c\n", estado_2);
        printf("Código: %s\n", codigo_da_carta_2);
        printf("Nome da Cidade: %s\n", nome_da_cidade_2);
        printf("População: %d\n", populacao_2);
        printf("Área: %fKm²\n", area_2); 
        printf("PIB: %f\n", PIB_2);
        printf("Número de Pontos Turístico: %d\n", NumeroPontoTuristico_2);

    return 0;
}
