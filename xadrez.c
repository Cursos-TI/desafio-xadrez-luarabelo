#include <stdio.h>
//ORGANIZAÇÃO DO CÓDIGO
void moverTorreRecursivo(int casas);
void moverBispoRecursivo(int casas);
void moverRainhaRecursivo(int casas);

void moverTorreRecursivo(int casas)
{ // se não ha maiis casas, termina
    if (casas == 0)
    {           
        return; // condição de parada
    }
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

//O BISPO DE MOVE NA DIAGONAL
void moverBispoRecursivo(int casas)
{
    if (casas == 0)
    {
        return;
    }
    printf("Cima Direita\n"); //MOV DIAGONAL
    moverBispoRecursivo(casas - 1);
}

//RAINHA SE MOVE EM LINHA RETA
void moverRainhaRecursivo(int casas)
{
    if (casas == 0)
    {
        return;
    }

    printf("Esquerda\n"); //DIREÇÃO
    moverRainhaRecursivo(casas - 1);
}

int main() //FUNÇÃO PRINCIPAL
{
    //CONTROLE DE NUMERO DE CASAS
    int casastorre = 5;
    int casasbispo = 5;
    int casasrainha = 8;
    int casascavvertical = 2;
    int casascavhorizontal = 1;

    //VARIAVEIS DE LOOP ANINHADO
    int movvertical, movhorizontal, contmov;

    printf("SIMULADOR DE MOVIMENTAÇÃO DE PEÇAS DE XADREZ\n\n");

    // torre - move em linha reta (horizontal ou vertifical)

    printf("TORRE: movimentação para Direita:\n");
    moverTorreRecursivo(casastorre);
    printf("\n");

    // O bispo se move em diagonal
    printf("BISPO: Movimentação Diagonal (cima-direita):\n");
    moverBispoRecursivo(casasbispo);
    printf("\n");

    printf("BISPO: Movimentação Loops Aninhados (cima-direita):\n");
    for (movvertical = 1; movvertical <= casasbispo; movvertical++)
    {
        // loop interno so executa uma vez
        for (movhorizontal = 1; movhorizontal <= 1; movhorizontal++)
        {
            printf("Cima Direita\n");
        }
    }
    printf("\n");

    // rainha se move em todas a direções
    printf("RAINHA: Movimentação para a esquerda:\n");
    moverRainhaRecursivo(casasrainha);
    printf("\n");

    // cavalo se move em "L"
    printf("CAVALO: Movimentação em L (cima, cima, direita):\n");

    for (int etapa = 0; etapa <= 1; etapa++)
    { // 2 casas para baixo
        contmov = 1;

        while (contmov) //VERIFICA SE DEVE CONTINUAR
        {
            if (etapa == 0) // LOOP INTERNO DE MOV VERTICAL
            {
                for (movvertical = 1; movvertical <= casascavvertical; movvertical++)
                {
                    if (movvertical > 0) //VERIFICA SE DEVE IMPRIMIR
                    {
                        printf("Cima\n");
                    }
                    else
                    {
                        continue; //NAO SERA USADO NO EXEMPLO, SERVE PARA SINTAXE
                    }
                }
                contmov = 0;
                break; //SAI DO LOOP WHILE
            }
            else if (etapa == 1) //LOOP PARA MOV HORIZONTAL
            {
                for (movhorizontal = 1; movhorizontal <= casascavhorizontal; movhorizontal++)
                {
                    printf("Direita\n"); // ULTIMO MOV DO L

                    if (movhorizontal >= casascavhorizontal)
                    {
                        contmov = 0;
                        break;
                    }
                }
                contmov = 0; // GARANTE A SAÍDA DO LOOP
            }
        }
    }

    printf("\n====== FIM DA SIMULAÇÃO =====\n");
    return 0;
}