#include <stdio.h>

int main() {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosBrancos = 0;
    int voto;

    printf("Digite o código do candidato (1, 2, 3, 4) ou 5 para nulo, 6 para branco, 0 para encerrar:\n");

    do {
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosBrancos++;
                break;
            case 0:
                
                break;
            default:
                printf("Código de voto inválido. Tente novamente.\n");
        }
    } while (voto != 0);

    printf("Total de votos para cada candidato:\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Total de votos nulos: %d votos\n", votosNulos);
    printf("Total de votos em branco: %d votos\n", votosBrancos);

    return 0;
}