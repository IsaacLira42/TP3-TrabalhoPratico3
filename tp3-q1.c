#include <stdio.h>

void printarNumeros(int n, int nums[])
{
    while (n > 0)
    {
        printf("%d ", nums[n - 1]);
        n = n - 1;
    }

    printf("\n"); // Quebrar a linha
}

int main()
{
    int n;
    printf("Digite quantos valores serão adicionados: ");
    scanf("%d", &n); // Entrada da quantidade de numeros a serem adicionados

    int nums[n];

    for (int i = 0; i <= n - 1; i++)
    {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printarNumeros(n, nums); // Chada da função para printar numeros invertidos

    return 0;
}