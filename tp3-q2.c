#include <stdio.h>

int main()
{
    char gabarito[10];
    char temp;
    int contAcertos;
    int n;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n); // Entrada da quantidade de alunos

    for (int i = 0; i < 10; i++)
    {
        printf("[Gabarito] Digite a resposta da questão %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    for (int aluno = 0; aluno < n; aluno++)
    {
        printf("\n");
        contAcertos = 0;
        for (int questao = 0; questao < 10; questao++)
        {
            printf("[Aluno] Resposta da Questão %d: ", questao + 1);
            scanf(" %c", &temp);
            if (gabarito[questao] == temp)
            {
                contAcertos += 1;
            }
        }
        printf("--> O aluno %d acertou %d questões\n", aluno + 1, contAcertos);
    }
    printf("\n");

    return 0;
}