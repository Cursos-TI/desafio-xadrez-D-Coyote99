#include <stdio.h>

// Função recursiva para os movimentos
void moverDireita(int movimento){
    if (movimento > 0){
        printf("Direita\n");
        moverDireita(movimento - 1);
    }
}

void moverEsquerda(int movimento){
    if (movimento > 0){
        printf("Esquerda\n");
        moverEsquerda(movimento - 1);
    }
}

void moverCima(int movimento){
    if (movimento > 0){
        printf("Diagonal Cima, ");
        moverCima(movimento - 1);
    }
}

int main() {
    // Declarando as variáveis
    int movTorre, movBispo = 1, movRainha;

    // Estrutura recursiva para a Torre
    printf("Movimento da torre\n"); // Esse printf esta fora do while para não ser repetido varias vezes

    moverDireita(movTorre = 5);

    // Estrutura recursiva e aninhada para Bispo
    printf("\n"); // Espaço entre os movimentos das peças
    printf("Movimento do Bispo\n");

    for (int i = 0; i < 5; i++){
        moverCima(movBispo);
        printf("Direita\n");
    }

    // Estrutura recursiva para a Rainha
    printf("\n");
    printf("Movimento da Rainha\n");

    moverEsquerda(movRainha = 8);

    // Estrutura Loop aninhado para o Cavalo
    printf("\n");
    printf("Movimento do Cavalo\n");
    for (int i = 0; i < 10; i++){
        if (i < 2){
            printf("Cima\n");
            continue;
        }
        if (i == 2){
            printf("Direita\n");
            break;
        }
    }

    return 0;
}
