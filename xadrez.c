#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
 
    int torre, bispo, rainha = 1, opcao;

    do
    {
        // Menu interativo das peças do xadrez
        printf("Movimentos das peças do xadrez\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: // Código de movimentação da torre 5 casas a direita
            printf("Movimento da torre\n");
            for (torre = 1; torre <= 5; torre++)
            {
                printf("Direita\n", torre);
            }
            break;
        case 2: // Código de movimentação do bispo 5 casas na diagonal direita
            printf("Movimento do bispo\n");
            for (bispo = 1; bispo <= 5; bispo++)
            {
                printf("Direita, cima\n", bispo);
            }
            break;
        case 3: // Código de movimentação da rainha 7 casas a esquerda
            printf("Movimento da rainha\n");
            while (rainha <= 7)
            {
                printf("Esquerda\n", rainha);
                rainha++;
            }
            break;
        case 4: // Opção de sair
            printf("Saindo...\n");
            break;
        default: // Mostra a mensagem: "Opção inválida", caso digite um número x > 4
            printf("Opção inválida!\n");
        }
    } while (opcao != 4);

    return 0;
}

