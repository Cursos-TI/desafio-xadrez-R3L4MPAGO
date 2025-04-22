#include <stdio.h>

void Torre(int n){
    if (n > 0){
        printf("Torre: Direita (%d)\n", n);
        Torre(n - 1);

    }
}

void Bispo(int n){
    if (n > 0){
        printf("Bispo: Cima (%d)\n", n);
        
        for (int i = 1; i <= 1; i++){
            printf("Bispo: Direita (%d)\n", n);
        }

        Bispo(n - 1);
    }
}

void Rainha(int n){
    if (n > 0){
        printf("Rainha: Esquerda (%d)\n", n);
        Rainha(n - 1);

    }
}

void Cavalo(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 2; j++){
            printf("Cavalo: Cima (%d)\n", i);

        }
        printf("Cavalo: Direita (%d)\n\n", i);
    }
}

int main(){

    int torre_casas = 6;
    int bispo_casas = 5;
    int rainha_casas = 8;
    int cavalo_casas = 3;

    printf("Movimento do Cavalo:\n");
    Cavalo(cavalo_casas);

    printf("Movimento da Torre:\n");
    Torre(torre_casas);

    printf("\nMovimento do Bispo:\n");
    Bispo(bispo_casas);

    printf("\nMovimento da Rainha:\n");
    Rainha(rainha_casas);

    return 0;
    
}