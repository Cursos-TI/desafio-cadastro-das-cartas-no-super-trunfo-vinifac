#include <stdio.h>
#include <string.h> // Biblioteca necessária para a função 'strcspn'

int main() {
    // Declaração de variáveis para a primeira e segunda cartas
    char estado[2], estado2[2];
    char codigoCarta[4], codigoCarta2[4];
    char nomeCidade[100], nomeCidade2[100];
    int populacao, populacao2;
    float areakm, areakm2, pib, pib2;
    int pontosTuristicos, pontosTuristicos2;

    printf("Seja bem vindo ao super trunfo cidades!\n");
    printf("Iniciando processo de cadastramento!\n");
    printf("Carregando...\n");


    // Cadastro da primeira carta
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("Digite a sigla do Estado (A a H): ");
    scanf(" %c", &estado[0]); 

    printf("Digite o Código da Carta (Ex: A01): ");
    scanf(" %s", codigoCarta);
    // Limpa o buffer de entrada para a próxima leitura de string com 'fgets'
    getchar(); 

    printf("Digite o nome da cidade: ");
    // 'fgets' é usado para ler a linha inteira, incluindo espaços
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    // 'strcspn' remove o caractere de nova linha '\n' deixado pelo 'fgets'
    nomeCidade[strcspn(nomeCidade, "\n")] = 0;

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &areakm);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);
    getchar();

    printf("Cadastrando primeira carta... \n");

    // Cadastro da segunda carta
    printf("--- Cadastro da Segunda Carta ---\n");

    printf("Digite a sigla do Estado (A a H): ");
    scanf(" %c", &estado2[0]); 

    printf("Digite o Código da Carta (Ex: A01): ");
    scanf(" %s", codigoCarta2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &areakm2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Cadastrando segunda carta... \n\n");
    
    // Exibição das informações cadastradas
    printf("--- Cartas cadastradas ---\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado[0]);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", areakm);
    printf("PIB: %.2f bilhões de reais\n " , pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("---------------\n");
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2[0]);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}