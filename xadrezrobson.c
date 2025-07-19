#include <stdio.h>

// Desafio de Xadrez - Robson Gari dos Santos


int main() {
   
 // Nível Novato - Movimentação das Peças

 // Implementação de Movimentação do Bispo
 // Utilizando uma estrutura de repetição while para simular a movimentação do Bispo em diagonal
 // Movimentação de 5 casas para a direção diagonal esquerda


int b = 1;

printf("Implementação de Movimentação do Bispo - Movimentação de 5 casas para a direção diagonal esquerda\n");

while (b <= 5)
{
    printf("O bispo moveu 1 casa para esquerda e 1 casa para cima\n", b); 

    b++;
}

// Implementação de Movimentação da Torre
// Utilizando uma estrutura de repetição do while para simular a movimentação da Torre para a lateral direita
 // Movimentação de 8 casas para a direção direita

int t = 1;

printf("Implementação de Movimentação da Torre - Movimentação de 8 casas para a direção direita\n");

do { 
    printf("a Torre moveu 1 casa para direita\n", t); 
   t++;
    } while (t <= 8);

// Implementação de Movimentação da Rainha
// Utilizando uma estrutura de repetição for para simular a movimentação da Rainha para a lateral esquerda
 // Movimentação de 7 casas para a direção esquerda

int r = 1;

printf("Implementação de Movimentação da Rainha - Movimentação de 7 casas para a direção esquerda\n");

for (int r = 0; r < 7; r++) {
    
    printf("a Rainha moveu 1 casa para esquerda\n", r); 
   
    } 

    return 0;

}

