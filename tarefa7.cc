#include <stdio.h>

int main() {
    int numAlunos = 30;
    double notas[numAlunos];
    double mediaPonderada;
    double mediaGeral = 0.0;
    int i;

    for (i = 0; i < numAlunos; i++) {
        double n1, n2, n3;
        
   
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        
       
        mediaPonderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        
   
        notas[i] = mediaPonderada;
        
     
        mediaGeral += mediaPonderada;
        
        
        if (mediaPonderada >= 7.0) {
            printf("Aluno %d: Média %.2lf - Aprovado\n", i + 1, mediaPonderada);
        } else {
            printf("Aluno %d: Média %.2lf - Reprovado\n", i + 1, mediaPonderada);
        }
    }

 
    mediaGeral /= numAlunos;

   
    printf("Média Geral da Turma: %.2lf\n", mediaGeral);

    return 0;
}