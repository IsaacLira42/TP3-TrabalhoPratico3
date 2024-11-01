#include <stdio.h>
#include <string.h>

int main()
{
    int cont = 0; // Contador

    char frase[50]; // Variável onde a frase sera armazenada
    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin); // Entrada da frase

    char palavra[15]; // Variável onde a palavra sera armazenada
    printf("Digite a palavra que sera procurada: ");
    scanf("%s", palavra); // Entrada da palavra

    char *posicao = frase; // Criação do ponteiro

    while ((posicao = strstr(posicao, palavra)) != NULL)
    {
        cont++;
        posicao += 1;
    }

    printf("A palavra aparece %d vezes na frase\n", cont);

    return 0;
}