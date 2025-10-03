#include <stdio.h>




void moverTorre(int movimentos) {
    if (movimentos == 0) {
        return; // caso base
    }
    printf("Direita\n");
    moverTorre(movimentos - 1); 
}


void moverBispo(int movimentos) {
    if (movimentos == 0) {
        return; // caso base
    }

    
    for (int i = 1; i <= 1; i++) { 
        for (int j = 1; j <= 1; j++) { // movimento horizontal (1 casa por vez)
            printf("Cima, Direita\n");
        }
    }

    moverBispo(movimentos - 1); // chamada recursiva
}

void moverRainha(int movimentos) {
    if (movimentos == 0) {
        return; 
    }
    printf("Esquerda\n");
    moverRainha(movimentos - 1); 
}



void moverCavalo() {
    int movimentosCima = 2;
    int movimentosDireita = 1;

    printf("\nMovimento do Cavalo:\n");

    for (int i = 1; i <= movimentosCima; i++) {
        if (i == 1) {
            printf("Cima\n");
            continue; 
        }
        if (i == 2) {
            printf("Cima\n");
        }

        
        for (int j = 1; j <= movimentosDireita; j++) {
            printf("Direita\n");
            break; 
        }
    }
}


int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Cavalo
    moverCavalo();

    return 0;
}
