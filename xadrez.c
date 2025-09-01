#include <stdio.h>

int main()  {
    //VARIÁVEIS
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 1;

    //MOVIMENTAÇÃO DA TORRE
    printf("\nMovimentação da Torre\n");
    while (a < 5) {
        printf("Direita\n"); 
        a++;
    }
    //MOVIMENTAÇÃO DO BISPO
    printf("\nMovimentação do Bispo:\n");
    do{
        printf("Cima e Direita\n");
        b++;
    }while(b < 5);
    //MOVIMENTAÇÃO DA RAINHA
    printf("\nMovimentação da Rainha:\n");
    for (c = 0; c < 8; c++) {
        printf("Esquerda\n");
    }

    //MOVIMENTAÇÃO DO CAVALO
    printf("\nMovimentação do Cavalo:\n");
    while (d--){ 
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
}
return 0;
}