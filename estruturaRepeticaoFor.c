#include <stdio.h>


/*
    EXEMPLO 1:

    É uma das mais utilizadas na programação devido à sua capacidade de simplificar a execução de loops com um número específico de iterações.
    Diferentemente dos loops while e do-while, que se baseiam exclusivamente em uma condição, o for é especialmente útil quando
    se sabe de antemão quantas vezes o loop deve ser executado.

    É especialmente útil por sua clareza e concisão. Todas as informações relevantes para o controle do loop estão contidas na própria estrutura for,
    tornando o código mais fácil de ler e entender. Essa estrutura é ideal para situações em que o número de iterações é conhecido antecipadamente,
    como ao iterar sobre os elementos de um array, ou executar um bloco de código um número fixo de vezes.

*/
 
int main() {
    printf("Imprimindo numero de 1 até 5:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }


    /*
        EXEMPLO 2:

        IMPRIMIR TODOS OS NUMEROS PARES DE 1 ATÉ 20
    
    */

    printf("\n\n");
    
    printf("Imprimindo numeros pares de 1 até 20:\n");
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) 
            printf("%d\n", i);
        }


        /*
            EXEMPLO 3:

            ITERANDO DE 10 EM 10. EXIBINDO OS NUMEROS DE DEZ EM DEZ
        */
    
    printf("\n\n");
    printf("Imprimindo numeros de 1 até 100 de dez em dez:\n");
    for (int i = 0; i <= 100; i += 10) {
        printf("%d\n", i);
    }


    /*
        EXEMPLO 4:
        DECREMENTANDO A VARIAVAL DE 100 ATÉ 0
    */

    printf("\n\n");

    printf("Imprimindo numeros de 100 até 0 de dez em dez:\n");

    for (int i = 100; i >= 0; i -= 10) {
        printf("%d\n", i);
    }
   
   
    return 0;
}