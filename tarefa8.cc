#include <stdio.h>

int main() {
    int numPessoas = 0;
    double salario, totalSalario = 0.0, mediaSalario, maiorSalario = 0.0;
    int numFilhos, totalFilhos = 0;
    double salarioLimite = 100.0;
    int pessoasAteLimite = 0;

    do {
    
        printf("Digite o salário (ou um valor negativo para encerrar): ");
        scanf("%lf", &salario);

        if (salario >= 0) {
         
            printf("Digite o número de filhos: ");
            scanf("%d", &numFilhos);


            numPessoas++;
            totalSalario += salario;
            totalFilhos += numFilhos;

    
            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

 
            if (salario <= salarioLimite) {
                pessoasAteLimite++;
            }
        }
    } while (salario >= 0);


    if (numPessoas > 0) {
        mediaSalario = totalSalario / numPessoas;
    } else {
        mediaSalario = 0.0;
    }

    double mediaFilhos = (double)totalFilhos / numPessoas;
    double percentualAteLimite = (double)pessoasAteLimite / numPessoas * 100.0;


    printf("a) Média do salário da população: %.2lf\n", mediaSalario);
    printf("b) Média do número de filhos: %.2lf\n", mediaFilhos);
    printf("c) Maior salário: %.2lf\n", maiorSalario);
    printf("d) Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentualAteLimite);

    return 0;
}