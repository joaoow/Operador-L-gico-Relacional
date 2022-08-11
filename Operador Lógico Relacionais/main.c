#include <stdio.h>
#include <stdlib.h>

// Autor: João

int main()
{
    //&&
    //(true)&&(true)

    int i = 40;
    int condicao = (i>20)&&(i<100);
    //Se o i for maior do que 20, e se o ir for mwnor que 100
    // Ele deve imprimir o valor da condicao

    printf("%i", condicao);
    printf("%i", !condicao);

    //|| "Ou"
    //(true) || (false)  -> 1 ok
    //(false) || (true)  -> 1 ok
    //(true) || (true)   -> 1 ok
    //(false) || (false) -> 0 falso

    system("cls");

    int x = 10;
    int cond = 0;


    // Se x for igual a 10 ou se x é menor que 1
    // x é igual a 10? sim, e x é menor que 1? não
    // Estou representando a primeira condição
    cond = (x==10) || (x<1);
    printf("%i", cond);


    //se x for igual a 0 ou se x é diferente de 1000 ela tambem é verdadeira
    cond = (x==0)||(x!=1000);
    printf("%i", cond);


    // Se x for igual a 10 ou diferente de 0 essa condicao vai ser verdadeira
    cond = (x==10)||(x!=0);
    printf("%i", cond);



    // X é diferente de 10? Não, ou x é igual a 0? Não a condicao vai ser falsa
    // Vai imprimir um valor 0 de falso
    cond = (x!=10)||(x==0);
    printf("%i", cond);


    return 0;
}
