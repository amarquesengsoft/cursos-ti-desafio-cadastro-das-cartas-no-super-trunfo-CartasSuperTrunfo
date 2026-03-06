#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    // Cadastro das Cartas:
        char codigo_da_carta1[5];
        char estado1[30] ;
        char nome_da_cidade1[60];
        unsigned long int populacao1;
        float area1;
        float pib1;
        int numero_de_pontos_turisticos1;
        float densidade_populacional1;
        float pib_percapita1;
        float superPoder1;

        char codigo_da_carta2[5];
        char estado2[30] ;
        char nome_da_cidade2[60];
        unsigned long int populacao2;
        float area2;
        float pib2;
        int numero_de_pontos_turisticos2;
        float densidade_populacional2;
        float pib_percapita2;
        float superPoder2;

        int escolhaJogador;

    
   
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    //Área para entrada de dados da carta 1
    printf("\n*** Entre Com As Informações da Carta 1 ***\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área em km2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões R$: \n");
    scanf("%f", &pib1);    

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

     //Cálculos de densidade populacional e pib percapita da carta 1;
    float pib1_em_reais = pib1 * 1000000000.0;

    densidade_populacional1 = populacao1 / area1;

    pib_percapita1 = pib1_em_reais / populacao1;

    superPoder1 = populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + pib_percapita1 + (1 / densidade_populacional1);

    //Área para entrada de dados da carta 2
    printf("\n*** Entre Com As Informações da Carta 2 ***\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões R$: \n");
    scanf("%f", &pib2);    

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    //Cálculos de densidade populacional e pib percapita da carta 2;
    float pib2_em_reais = pib2 * 1000000000.0;

    densidade_populacional2 = populacao2 / area2;

    pib_percapita2 = pib2_em_reais / populacao2;

    superPoder2 = populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pib_percapita2 + (1 / densidade_populacional2);


    //Área para exibição dos dados da cidade 1
    printf("\n***Carta 1***\n");
    printf("Nome do Estado: %s;\nCódigo da Carta: %s\n", estado1, codigo_da_carta1);
    printf("Nome da Cidade: %s;\nPopulação: %lu\n", nome_da_cidade1, populacao1);
    printf("Área: %.2f km2;\nPIB: %.2f bilhões de reais;\nNúmero de pontos turísticos: ;%d\n", area1, pib1, numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes por km2;\n", densidade_populacional1);
    printf("Pib Per Capita: %.2f reais.\n", pib_percapita1);
    printf("Super Poder Carta 1: %f Pontos\n", superPoder1);

    //Área para exibição dos dados da cidade 2
    printf("\n***Carta 2***\n");
    printf("Nome do Estado: %s;\nCódigo da Carta: %s;\n", estado2, codigo_da_carta2);
    printf("Nome da Cidade: %s;\nPopulação: %lu;\n", nome_da_cidade2, populacao2);
    printf("Área: %.2f km2;\nPIB: %.2f bilhões de reais;\nNúmero de pontos turísticos: %d;\n", area2, pib2, numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes por km2;\n", densidade_populacional2);
    printf("Pib Per Capita: %.2f reais.\n", pib_percapita2);
    printf("Super Poder Carta 2: %f Pontos\n\n", superPoder2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.

    if (area1 > area2) {
        printf("A cidade de %s tem área maior que a cidade de %s.\n", nome_da_cidade1, nome_da_cidade2);
    } else {
    printf("A cidade de %s tem área maior que a cidade de %s.\n", nome_da_cidade2, nome_da_cidade1);
    }

    if (populacao1 > populacao2) {
        printf("A cidade de %s tem população maior que a cidade de %s.\n", nome_da_cidade1, nome_da_cidade2);
    } else {
    printf("A cidade de %s tem população maior que a cidade de %s.\n", nome_da_cidade2, nome_da_cidade1);
    }

    if (pib1 > pib2) {
        printf("O PIB da cidade de %s é maior que o PIB da cidade de %s.\n", nome_da_cidade1, nome_da_cidade2);
    } else {
    printf("O PIB da Cidade de %s é maior que o PIB cidade de %s.\n", nome_da_cidade2, nome_da_cidade1);
    }

    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
        printf("A quantidade de pontos turísticos da cidade de %s é maior que a quantidade da cidade de %s.\n", nome_da_cidade1, nome_da_cidade2);
    } else {
    printf("A quantidade de pontos turísticos da cidade de %s é maior que a quantidade da cidade de %s.\n", nome_da_cidade2, nome_da_cidade1);
    }

    if (densidade_populacional1 < densidade_populacional2) {
        printf("A densidade populacional da cidade de %s é menor que a densidade da cidade de %s.\n", nome_da_cidade1, nome_da_cidade2);
    } else {
    printf("A densidade populacional da cidade de %s é menos que a densidade da cidade de %s.\n", nome_da_cidade2, nome_da_cidade1);
    }

    if (pib_percapita1 > pib_percapita2) {
        printf("O pib per capita da cidade de %s é maior que o pib per capita da cidade de %s.\n", nome_da_cidade1, nome_da_cidade2);
    } else {
    printf("O pib per capita da cidade de %s é maior que o pib per capita da cidade de %s.\n", nome_da_cidade2, nome_da_cidade1);
    }

    if (superPoder1 > superPoder2) {
        printf("O super poder da cidade de %s é maior que o super poder da cidade de %s.\n", nome_da_cidade1, nome_da_cidade2);
    } else {
    printf("O super poder da cidade de %s é maior que o super poder da cidade de %s.\n", nome_da_cidade2, nome_da_cidade1);
    }
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    printf("   ***Agora escolha qual atributo você quer fazer uma comparação:***   \n\n");
    printf("Digite 1 para comparar o atributo: População\n");
    printf("Digite 2 para comparar o atributo: Área\n");
    printf("Digite 3 para comparar o atributo: PIB\n");
    printf("Digite 4 para comparar o atributo: Número de pontos turísticos\n");
    printf("Digite 5 para comparar o atributo: Densidade Populacional\n");
    printf("Digite 6 para comparar o atributo: PIB Per Capita\n");
    printf("Digite 7 para comparar o atributo: Super Poder\n");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador)
    {
    case 1: 
        printf("Você escolheu a opção 1:\nAtributo a ser comparado: População\n");
    if (populacao1 > populacao2)
    {
        printf("A Cidade de %s tem maior população.\nA Cidade de %s venceu!!\n", nome_da_cidade1, nome_da_cidade1);
    } else {
       printf("A Cidade de %s tem maior população.\nA Cidade de %s venceu!!\n", nome_da_cidade2, nome_da_cidade2);
    }
        break;
    case 2: 
        printf("Você escolheu a opção 2:\nAtributo a ser comparado: Área\n");
    if (area1 > area2) 
    {
        printf("A cidade de %s tem área maior.\nA cidade de %s venceu!.\n", nome_da_cidade1, nome_da_cidade1);
    } else {
        printf("A cidade de %s tem área maior.\nA cidade de %s venceu!.\n", nome_da_cidade2, nome_da_cidade2);
    }
        break;
    case 3: 
        printf("Você escolheu a opção 3:\nAtributo a ser comparado: PIB\n");
    if (pib1 > pib2)
    {
        printf("O PIB da cidade de %s é maior.\nA cidade de %s venceu!.\n", nome_da_cidade1, nome_da_cidade1);
    } else {
    printf("O PIB da cidade de %s é maior.\nA cidade de %s venceu!\n", nome_da_cidade2, nome_da_cidade2);
    }
        break;
    case 4: 
        printf("Você escolheu a opção 4:\nAtributo a ser comparado: Número de pontos turísticos\n");
    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
    {
        printf("A quantidade de pontos turísticos da cidade de %s é maior.\nA cidade de %s venceu!\n", nome_da_cidade1, nome_da_cidade1);
    } else {
    printf("A quantidade de pontos turísticos da cidade de %s é maior.\nA cidade de %s venceu!\n", nome_da_cidade2, nome_da_cidade2);
    }
        break;
    case 5: 
        printf("Você escolheu a opção 5:\nAtributo a ser comparado: Densidade Populacional\n");
    if (densidade_populacional1 < densidade_populacional2)
    {
        printf("A densidade populacional da cidade de %s é menor.\nA cidade de %s venceu!\n", nome_da_cidade1, nome_da_cidade1);
    } else {
    printf("A densidade populacional da cidade de %s é menor.\nA cidade de %s venceu!\n", nome_da_cidade2, nome_da_cidade2);
    }
        break;
    case 6: 
        printf("Você escolheu a opção 6:\nAtributo a ser comparado: PIB Per Capita\n");
    if (pib_percapita1 > pib_percapita2)
    {
        printf("O pib per capita da cidade de %s é maior.\nA cidade de %s venceu!\n", nome_da_cidade1, nome_da_cidade1);
    } else {
    printf("O pib per capita da cidade de %s é maior.\nA cidade de %s venceu!\n", nome_da_cidade2, nome_da_cidade2);
    }
        break;
    case 7: 
        printf("Você escolheu a opção 7:\nAtributo a ser comparado: Super Poder\n");
    if (superPoder1 > superPoder2) {
        printf("O super poder da cidade de %s é maior.\nA cidade de %s venceu!\n", nome_da_cidade1, nome_da_cidade1);
    } else {
    printf("O super poder da cidade de %s é maior.\nA cidade de %s venceu!\n", nome_da_cidade2, nome_da_cidade2);
    }
        break;            
    default:
        printf("Opção Invalida!\n");
        printf("Escolha uma opção de 1 a 7!!\n");
        break;
    }


   


    return 0;
}