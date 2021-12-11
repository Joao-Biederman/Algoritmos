#include <stdio.h>

int main()
{
    //declaração de variaveis
    int cod, num; //codigo de peças e numero comprado
    float val, pag; //valor unitario das peças e o valor total a pagar

    //leitura de dados de entrada
    scanf("%d %d %f", &cod, &num, &val);
    pag = num*val;
    scanf("%d %d %f", &cod, &num, &val);
    pag += num*val;

    //impressão da saida
    printf("VALOR A PAGAR: R$ %.2f\n", pag);

}