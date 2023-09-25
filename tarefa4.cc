#include <stdio.h>

int main() {
    double A, B, C;

    // Solicita ao usuário que insira os valores dos lados do triângulo
    printf("Digite os valores dos lados do triângulo (A, B, C): ");
    scanf("%lf %lf %lf", &A, &B, &C);

    // Verifica se os valores podem formar um triângulo
    if (A + B > C && A + C > B && B + C > A) {
        // Calcula os quadrados dos lados
        double squareA = A * A;
        double squareB = B * B;
        double squareC = C * C;

        // Verifica os ângulos
        if (squareA == squareB + squareC || squareB == squareA + squareC || squareC == squareA + squareB) {
            printf("Triângulo Retângulo\n");
        } else if (squareA > squareB + squareC || squareB > squareA + squareC || squareC > squareA + squareB) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Esses valores não formam um triângulo.\n");
    }

    return 0;
}