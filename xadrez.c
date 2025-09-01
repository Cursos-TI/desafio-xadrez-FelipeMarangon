#include <stdio.h>

//MOVIMENTAÇÃO TORRE
void moverTorre(int casas) {
    if (casas <= 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1);
}

//MOVIMENTAÇÃO RAINHA
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

//MOVIMENTAÇÃO BISPO
void moverBispo(int casas) {
    for (int i = 0; i < casas; i++) {          
        for (int j = 0; j < 1; j++) {          
            printf("Cima e Direita\n");
        }
    }
}

//MOVIMENTAÇÃO CAVALO
void moverCavalo(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
    }
}

//MAIN
int main() {
    int Torre = 5;
    int Bispo = 5;
    int Rainha = 8;
    int Cavalo = 1;

    //TORRE
    printf("\nMovimentação da Torre:\n");
    moverTorre(Torre);

    //BISPO
    printf("\nMovimentação do Bispo (loops aninhados):\n");
    moverBispo(Bispo);

    //RAINHA
    printf("\nMovimentação da Rainha:\n");
    moverRainha(Rainha);

    //CAVALO
    printf("\nMovimentação do Cavalo:\n");
    moverCavalo(Cavalo);

    return 0;
}
