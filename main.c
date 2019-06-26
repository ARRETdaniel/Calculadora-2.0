#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int main()
{
    float num1, num2, resultado;
    int opcao;
    int opcao_op;
   // char opcao_op = '0';




              printf("\t\n\n Bem-Vindo a nossa Calculadora 2.0\n\n");


    do{

        num1, num2, resultado = 0;
        opcao, opcao_op = 0;




        printf("\t\n\n\tDigite (1) para CONTINUAR ou (0) para SAIR\n");

        scanf("%i", &opcao);
        //opcao_op = getche();

 if( opcao == 1 ){




        printf("Digite o numero referente a operacao matematica que deseja realizar.\n");
        printf("OPCOES: \n");
        printf("(1) para SOMA. \n");
        printf("(2) para SUB. \n");
        printf("(3) para MULTI. \n");
        printf("(4) para DIV. \n");
        scanf("%i", &opcao_op);


        if (opcao_op == 1){

                            printf("\t\nOkay, vamos comecar... \n");
                            printf("Digite o primeiro valor da sua SOMA: \n");
                            scanf("%f", &num1);
                            printf("Digite o segundo valor da sua SOMA: \n");
                            scanf("%f", &num2);
                            resultado = num1 + num2;
                            printf("O resultado da operacao: %f\n\n", resultado);


                          }else{
                                if (opcao_op == 2){
                                                   printf("\t\nOkay, vamos comecar... \n");
                                                   printf("Digite o primeiro valor da sua SUBTRACAO: \n");
                                                   scanf("%f", &num1);
                                                   printf("Digite o segundo valor da sua SUBTRACAO: \n");
                                                   scanf("%f", &num2);
                                                   resultado = num1 - num2;
                                                   printf("O resultado da operacao: %f\n\n", resultado);

                                                  }
                               }else{
                                     if (opcao_op == 3){
                                                        printf("\t\nOkay, vamos comecar... \n");
                                                        printf("Digite o primeiro valor da sua MULTIPLICACAO: \n");
                                                        scanf("%f", &num1);
                                                        printf("Digite o segundo valor da sua MULTIPLICACAO: \n");
                                                        scanf("%f", &num2);
                                                        resultado = num1 * num2;
                                                        printf("O resultado da operacao: %f\n\n", resultado);

                                                       }

                                    }


                 }else{

                       if (opcao == 0){
                                     printf("\t \n Obrigado pela preferencia! Code BY ARRET  \n\n");

                                      }else{
                                            printf("OPCAO INFALIDA!\n\n");
                                            printf("Tente novamente: \n ");
                                           }
                      }

    } while (opcao != 0);



    return 0;
}
