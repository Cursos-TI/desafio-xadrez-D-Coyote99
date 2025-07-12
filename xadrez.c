#include <stdio.h>

int main() {
    // Declarando as variáveis
    int movTorre = 1, movBispo = 1, movRainha;

    // Estrutura while para a Torre
    printf("Movimento da torre\n"); // Esse printf esta fora do while para não ser repetido varias vezes

    while (movTorre <= 5){
        printf("Direita\n");
        movTorre++;
    }

    // Estrutura do-while para Bispo
    printf("\n"); // Espaço entre os movimentos das peças
    printf("Movimento do Bispo\n");

    do {
        printf("Diagonal Cima, Direita\n");
        movBispo++;

    } while (movBispo <= 5);

    // Estrutura for para a Rainha
    printf("\n");
    printf("Movimento da Rainha\n");

    for (movRainha = 8; movRainha >=1; movRainha--){
        printf("Esquerda\n");
    }

    return 0;
}
