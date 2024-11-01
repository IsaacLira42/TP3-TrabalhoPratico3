#include <stdio.h>

int main()
{
    int n, k;
    printf("Digite a quantidade de alunos:");
    scanf("%d", &n);
    
    printf("Digite a quantidade de provas:");
    scanf("%d", &k);
    
    int peso[k];
    int somaPesos = 0;
    float somaCadaProva[k];
    
    // Entrando com os pesos das provas
    for(int i = 0; i < k; i++)
    {
        printf("Peso da prova %d: ", i+1);
        scanf("%d", &peso[i]);
    }
    
    // Soma os pesos
    for(int p = 0; p < k; p++)
    {
        somaPesos += peso[p];
    }
    
    for(int aluno = 0; aluno < n; aluno++)
    {
        float somaNotas = 0;
        for(int nota = 0; nota<k; nota++)
        {
            float temp = 0; // temporária
            printf("[Aluno %d] Prova %d: ", aluno+1,nota+1);
            scanf("%f", &temp);
            somaCadaProva[nota] = temp;
            temp = temp * peso[nota];
            somaNotas += temp;
        }
        printf("Média ponderada do aluno %d: %.2f\n\n", aluno+1, somaNotas/somaPesos);
    }
    
    for(int aritmética = 0; aritmética<k; aritmética++)
    {
        somaCadaProva[aritmética] /= n; 
    }
    
    for(int mostrar = 0; mostrar < k; mostrar++)
    {
        printf("Nota da prova %d: %f", mostrar+1, somaCadaProva[mostrar]);
    }
}