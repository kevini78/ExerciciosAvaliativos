#include <stdio.h>

int main() {
    double x, y;

    // Solicita ao usuário que insira as coordenadas do ponto
    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%lf %lf", &x, &y);

    if (x == 0.0 && y == 0.0) {
        printf("Origem\n");
    } else if (x == 0.0) {
        printf("Eixo Y\n");
    } else if (y == 0.0) {
        printf("Eixo X\n");
    } else {
        if (x > 0.0 && y > 0.0) {
            printf("Q1\n"); // Quadrante 1
        } else if (x < 0.0 && y > 0.0) {
            printf("Q2\n"); // Quadrante 2
        } else if (x < 0.0 && y < 0.0) {
            printf("Q3\n"); // Quadrante 3
        } else {
            printf("Q4\n"); // Quadrante 4
        }
    }

    return 0;
}