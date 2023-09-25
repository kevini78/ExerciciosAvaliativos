#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Cidade {
    char codigo[5];
    char estado[3];
    int numVeiculos;
    int numAcidentes;
    double indiceAcidentes;
};

int main() {
    int numCidades = 200;
    struct Cidade cidades[numCidades];
    int i;


    for (i = 0; i < numCidades; i++) {
        printf("Digite o código da cidade: ");
        scanf("%s", cidades[i].codigo);

        if (strcmp(cidades[i].codigo, "0") == 0) {
       
            numCidades = i;
            break;
        }

        printf("Digite o estado da cidade: ");
        scanf("%s", cidades[i].estado);
        printf("Digite o número de veículos de passeio (1992): ");
        scanf("%d", &cidades[i].numVeiculos);
        printf("Digite o número de acidentes com vítimas (1992): ");
        scanf("%d", &cidades[i].numAcidentes);

     
        cidades[i].indiceAcidentes = (double)cidades[i].numAcidentes / cidades[i].numVeiculos;
    }


    double maiorIndice = cidades[0].indiceAcidentes;
    double menorIndice = cidades[0].indiceAcidentes;
    int cidadeMaiorIndice = 0;
    int cidadeMenorIndice = 0;


    int numCidadesRS = 0;
    int totalVeiculos = 0;
    int totalAcidentesRS = 0;

    for (i = 0; i < numCidades; i++) {
        if (cidades[i].indiceAcidentes > maiorIndice) {
            maiorIndice = cidades[i].indiceAcidentes;
            cidadeMaiorIndice = i;
        }

        if (cidades[i].indiceAcidentes < menorIndice) {
            menorIndice = cidades[i].indiceAcidentes;
            cidadeMenorIndice = i;
        }

        if (strcmp(cidades[i].estado, "RS") == 0) {
            numCidadesRS++;
            totalVeiculos += cidades[i].numVeiculos;
            totalAcidentesRS += cidades[i].numAcidentes;
        }
    }

  
    double mediaVeiculos = (double)totalVeiculos / numCidades;
    double mediaAcidentesRS = (double)totalAcidentesRS / numCidadesRS;

  
    printf("a) Maior índice de acidentes de trânsito: %.2lf (Cidade: %s, Estado: %s)\n", maiorIndice, cidades[cidadeMaiorIndice].codigo, cidades[cidadeMaiorIndice].estado);
    printf("   Menor índice de acidentes de trânsito: %.2lf (Cidade: %s, Estado: %s)\n", menorIndice, cidades[cidadeMenorIndice].codigo, cidades[cidadeMenorIndice].estado);
    printf("b) Média de veículos nas cidades brasileiras: %.2lf\n", mediaVeiculos);
    printf("c) Média de acidentes com vítimas no Rio Grande do Sul: %.2lf\n", mediaAcidentesRS);

    return 0;
}