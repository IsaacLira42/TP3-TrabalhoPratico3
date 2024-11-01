#include <stdio.h>
#include <stdlib.h> // Necessária para rand() e srand()
#include <time.h>   // Necessária para time()

int main()
{
    int Lx[6] = {0};
    int temp;
    int n;
    printf("Digite a quantidade de lançamentos: ");
    scanf("%d", &n); // Entrada da quantidade de lançamentos

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        temp = (rand() % 6) + 1; // Gerador de numeros

        Lx[temp - 1] += 1;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("A face %d apareceu %d vez(es)\n", i + 1, Lx[i]);
    }
}