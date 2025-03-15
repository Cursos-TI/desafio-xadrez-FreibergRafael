#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int numov, movbispo, movtorre, movrainha, movcavalo;

    printf("*** Jogo de Xadrez em C *** \n");
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        printf("Primeiro vamos movimentar o Bispo (movimento diagonal) em 5 casas para cima.\n");

        for (movbispo = 0; movbispo < 5; movbispo++){
            printf("Cima-Direita\n");
        }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        printf("Agora vamos realizar a movimentação da Torre.\n");
        printf("(movimentos verticais e horizontais) em 5 casas para a direita.\n");
        
        movtorre = 0;

        while (movtorre <= 8)
        {
            if (movtorre % 2 == 0){
                printf("Direita\n");
            }
            movtorre++;
        }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        printf("Agora vamos movimentar a Rainha em 8 casas para a esquerda.\n");
        printf("Lembrando que a Rainha se move em qualquer direção...\n");

        movrainha = 1;
        
        do
        {
            printf(" %d - Esquerda\n", movrainha);
            movrainha++;

        } while (movrainha <= 8);    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
        printf("Agora vamos movimentar o Cavalo (movimentação em L)\n");
        printf("Para cima e para direita...\n");
        
        movcavalo = 1;

        while (movcavalo--)
        {
            for (int movc = 0; movc < 2 ; movc++)
            {
                printf("Cima\n");
            }
            printf("Direita\n");
        }
                

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
