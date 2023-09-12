#include<stdio.h>

main(){

    int Pedido, Qtd;
    float ValorTotal;

    printf("Digite o numero do pedido: ");
    scanf("%d", &Pedido);

    printf("Digite a quantidade: ");
    scanf("%d", &Qtd);

    switch(Pedido) {

        case 100:
            ValorTotal = Qtd * 10.10;
            printf("O valor do pedido e: %.2f", ValorTotal);
            break;

        case 101:
            ValorTotal = Qtd * 8.30;
            printf("O valor do pedido e: %.2f", ValorTotal);
            break;

        case 102:
            ValorTotal = Qtd * 8.50;
            printf("O valor do pedido e: %.2f", ValorTotal);
            break;

        case 103:
            ValorTotal = Qtd * 12.50;
            printf("O valor do pedido e: %.2f", ValorTotal);
            break;

        case 104:
            ValorTotal = Qtd * 13.25;
            printf("O valor do pedido e: %.2f", ValorTotal);
            break;

        default:
            printf("O codigo do item pedido esta errado.");




    }

}