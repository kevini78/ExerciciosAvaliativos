#include <stdio.h>
#include <math.h>

int main() {
    double x, fx;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);


    fx = (5 * x + 3) / sqrt(x * x - 16);

    
    printf("f(x) = %.2lf\n", fx);

   
}