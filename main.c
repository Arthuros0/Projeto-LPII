#include <stdio.h>
#include <stdlib.h>
#include "arquivos.h"
#include "arquivo.c"
#include "produto.h"
#include "produto.c"
#include "vendas.h"
#include "vendas.c"

int main() {

    //declara��o das vari�veis
    int opcao, qtdeProd = 0, qtdeVenda = 0;
    Produto *produto = NULL;
    Venda *venda = NULL;

    //recebe as informa��es armazenadas no arquivo de produto e de venda
    recupera_produtos(produto, &qtdeProd);
    recupera_vendas(venda, &qtdeVenda);

    do {
        //menu e suas op��es
        printf("\n\t************************************************************************"
               "\n\t\t\t     SISTEMA DE LOJA\n"
               "\t************************************************************************"
               "\n\n\tSelecione uma das opcoes abaixo:\n\n"
               "\t| 1. Inserir um produto\n"
               "\t| 2. Atualizar a quantidade de itens de um produto no estoque\n"
               "\t| 3. Realizar uma venda\n"
               "\t| 4. Consulta de preco de um produto\n"
               "\t| 5. Mostrar na tela os produtos e a quantidade\n"
               "\t| 6. Relatorio de faturamento de vendas em um determinado periodo\n"
               "\t| 0. Sair do Programa\n");

        //recebe o valor de opcao
        printf("\n\tOpcao: ");
        scanf("%d", &opcao);

        printf("\n========================================================================================================================");

        //acesso �s op��es do menu
        switch (opcao) {

            //sair do menu
            case 0:
            {
                printf("\n\tMuito obrigada por utilizar nosso programa! Ate mais :)\n");
                //limpeza do conte�do da tela
                printf("\n\tPressione qualquer tecla para fechar o programa... \n");
                exit(1);
            }

            //inserir um produto
            case 1:
            {
                insere_produto(produto, &qtdeProd);
                salva_produto(produto, &qtdeProd);

                //limpeza do conte�do da tela
                printf("\n\tPressione ENTER para continuar ");
                scanf("%*c%*c");
                system("clear||cls");
                break;
            }

            //atualizar a quantidade de itens de um produto no estoque
            case 2:
            {
                atualiza_estoque(produto, &qtdeProd);
                salva_produto(produto, &qtdeProd);

                //limpeza do conte�do da tela
                printf("\n\tPressione ENTER para continuar ");
                scanf("%*c%*c");
                system("clear||cls");
                break;
            }

            //realizar uma venda
            case 3:
            {
                printf("\nEsta opcao ainda nao esta disponivel...");

                //limpeza do conte�do da tela
                printf("\n\tPressione ENTER para continuar ");
                scanf("%*c%*c");
                system("clear||cls");
                break;

            }

            //consulta de preco de um produto
            case 4:
            {
                consulta_preco(produto, &qtdeProd);

                //limpeza do conte�do da tela
                printf("\n\tPressione ENTER para continuar ");
                scanf("%*c%*c");
                system("clear||cls");
                break;
            }

            //mostrar na tela os produtos e a quantidade
            case 5:
            {
                mostra_estoque(produto, &qtdeProd);

                //limpeza do conte�do da tela
                printf("\n\tPressione ENTER para continuar ");
                scanf("%*c%*c");
                system("clear||cls");
                break;
            }

            //relatorio de faturamento de vendas em um determinado periodo
            case 6:
            {
                printf("\nEsta opcao ainda nao esta disponivel...");

                //limpeza do conte�do da tela
                printf("\n\tPressione ENTER para continuar ");
                scanf("%*c%*c");
                system("clear||cls");
                break;
            }

            default:
            {
                printf("\n\tOpa, valor invalido para opcao! Escolha novamente... \n");

                //limpeza do conte�do da tela
                printf("\n\tPressione ENTER para continuar ");
                scanf("%*c%*c");
                system("clear||cls");
                break;
            }
        }

        if (opcao!=0) {
            printf("\n\tDeseja realizar mais alguma acao?\n");
        }

    } while(opcao!=0);

    return 0;
}
