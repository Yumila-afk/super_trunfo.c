#include <stdio.h>
#include <string.h>

    struct CartaSuperTrunfo {
        char estado;
        char codigo[4];
        char cidade[50];
        unsigned long int populacao;
        int turismo;
        float pib;
        float area;
        float densidade;
        float pibpercapita;
        float superpoder;
    };
    
       
        void lerCarta(struct CartaSuperTrunfo *carta) {
        printf("Digite o Estado (uma letra de A a H): ");
        scanf(" %c", &carta->estado);
        printf("Digite o Código: ");
        scanf("%3s", carta->codigo);
        printf("Digite a Cidade: ");
        scanf("%s", carta->cidade);
        printf("Digite a População: ");
        scanf("%lu", &carta->populacao);
        printf("Digite a Área da Cidade em Km²: ");
        scanf("%f", &carta->area);
        printf("Digite o PIB da Cidade em Bilhões de Reais: ");
        scanf("%f", &carta->pib);
        printf("Digite o Número de Pontos Turísticos da Cidade: ");
        scanf("%d", &carta->turismo);
        carta->densidade = carta->populacao / carta->area;
        carta->pibpercapita = carta->pib * 1000000000 / carta->populacao;
        carta->superpoder = carta->populacao + carta->area + carta->pib + carta->turismo + 1 / carta->densidade + carta->pibpercapita;

        }

int main(){
    
    struct CartaSuperTrunfo carta1, carta2;

    printf("Insira os Dados da Primeira Carta:\n");
    lerCarta(&carta1);

    printf("Insira os Dados da Segunda Carta:\n");
    lerCarta(&carta2);

    printf("\n\nDados da Primeira Carta:\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu habitantes\nÁrea: %.2f km²\nPIB: %.2f Bilhões de Reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", carta1.estado, carta1.codigo, carta1.cidade, carta1.populacao, carta1.area, carta1.pib, carta1.turismo, carta1.densidade, carta1.pibpercapita);

    printf("\nDados da Segunda Carta:\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu habitantes\nÁrea: %.2f km²\nPIB: %.2f Bilhões de Reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %2.f reais\n", carta2.estado, carta2.codigo, carta2.cidade, carta2.populacao, carta2.area, carta2.pib, carta2.turismo, carta2.densidade, carta2.pibpercapita);

    printf("Comparação de Cartas:\n");
    printf("População: %d\nÁrea: %d\nPIB: %d\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %d\nPIB per Capita: %d\nSuper Poder: %d\n", carta1.populacao > carta2.populacao, carta1.area > carta2.area, carta1.pib > carta2.pib, carta1.turismo > carta2.turismo, carta1.densidade < carta2.densidade, carta1.pibpercapita > carta2.pibpercapita, carta1.superpoder > carta2.superpoder);

    return 0;


  }
