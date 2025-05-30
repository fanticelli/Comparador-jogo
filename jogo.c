#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    int tipoComparacao;

    //Gerar número aleatorio.
    srand(time(NULL));
    numeroComputador = rand() % 100 + 1; //número entre 1 e 100.

    //Inicio do jogo.
    printf(" ---- Bem-vindo ao jogo Da Comparação! ----\n");
    printf(" Escolha um número entre 1 e 100:\n");
    printf(" --> ");
    scanf("%d", &numeroJogador);

    system("clear"); //limpar terminal.

    printf(" Escolha a comparação a ser feita:\n");
    printf(" 1. Maior\n");
    printf(" 2. Menor\n");
    printf(" 3. Igual\n");
    printf("\n --> ");
    scanf("%d", &tipoComparacao);

    system("clear"); //limpar terminal.

    switch (tipoComparacao)
    {
    case 1:
        resultado = numeroJogador > numeroComputador ? 1 : 0;

        printf("\n");
        printf(" Número escolhido pelo Jogador: %d\n", numeroJogador);
        printf(" Número escolhido pelo Computador: %d\n", numeroComputador);
        printf("\n");
        printf("--------------------------------------------------\n");
        printf(" O Maior número é o escolhido pelo %s\n", 
        (numeroJogador > numeroComputador ? "Jogador" : "Computador"));
        break;

    case 2:
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        
        printf("\n");
        printf(" Número escolhido pelo Jogador: %d\n", numeroJogador);
        printf(" Número escolhido pelo Computador: %d\n", numeroComputador);
        printf("\n");
        printf("-------------------------------------------\n");
        printf(" O Menor número é o do %s\n", 
        (numeroJogador < numeroComputador ? "Jogador" : "Computador"));
        break;

    case 3:
        resultado = numeroJogador == numeroComputador ? 1 : 0;

        printf("\n");
        printf(" Número escolhido pelo Jogador: %d\n", numeroJogador);
        printf(" Número escolhido pelo Computador: %d\n", numeroComputador);
        printf("\n");
        printf("-------------------------------------------\n");
        printf(" %s\n", (resultado == 1) ? 
                " Ambos os números são iguais!!" : " Os números não são iguais...");
        break;
    
    default:
        printf("Opção inválida!!");
        break;
    }

    if (resultado == 1)
    {
        printf("  Parabéns você ganhou!!\n");
        printf("--------------------------------------------------\n");
    }else{
        printf("  Infelizmente você perdeu...\n");
        printf("--------------------------------------------------\n");
    }  

}