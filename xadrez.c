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

    // Estrutura for e while para o Cavalo
    printf("\n");
    printf("Movimento do Cavalo\n");
    for (int i = 1; i <= 1; i++){
        int j = 1;
        while (j <= 2){
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
    }

    return 0;
}
