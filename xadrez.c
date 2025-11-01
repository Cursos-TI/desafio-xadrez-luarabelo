#include <stdio.h>
int main() {

    int casastorre = 5;
    int casasbispo = 5;
    int casasrainha = 8;
    int contador;

    printf("SIMULADOR DE MOVIMENTAÇÃO DE PEÇAS DE XADREZ\n\n");

    // torre - move em linha reta (horizontal ou vertifical)

    printf("TORRE: movimentação para Direita:\n");

    for (contador = 1; contador <= casastorre; contador++) {
        printf("Direita\n");
    }

    //O bispo se move em diagonal
    printf("BISPO: Movimentação Diagonal (cima-direita):\n");

    contador = 1; // inicia contador em loop

    while (contador < casasbispo) { // testa a condição antes de execuutar o bloco
        printf("Cima Direta\n");
        contador++; 
    }
    printf("\n");

    //rainha se move em todas a direções
    printf("RAINHA: Movimentação para a esquerda:\n");

    contador = 1;

    do { //vai executar o codigo pelo menos uma vez
        printf("Esquerda\n");
        contador++;
    } while (contador <= casasrainha);

    printf("\n====== FIM DA SIMULAÇÃO =====\n");
    return 0;
}
