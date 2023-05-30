/* Usando switch, faça um programa para ler dois valores e apresentar para o
usuário o menu de opções conforme abaixo. Em seguida, o programa deverá ler a
opção indicada pelo usuário e efetuar a operação desejada. Adicionalmente, o
programa deve apresentar uma mensagem de erro caso a opção digitada for
inválida */
#include<stdio.h>
int main(){
    float num1, num2;
    char operacao;
    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);
    printf("Digite o segundo numero: ");
    scanf("%f",&num2);
    fflush(stdin);
    printf("MENU \n 1- Somar os dois numeros \n 2- Subtrair os dois numeros \n 3- Multiplicar os dois numeros \n 4- Dividir os dois numeros (o denominador nao pode ser zero) \n 5- Sair \n Digite uma opcao:");
    scanf("%c",&operacao);
    switch(operacao){
    case '1':
        printf("Resultado: %f\n",num1+num2);
        break;
    case '2':
        printf("Resultado: %f\n",num1-num2);
        break;
    case '3':
        printf("Resultado: %f\n",num1*num2);
        break;
    case '4':
        printf("Resultado: %f\n",num1/num2);
        break;
    case '5':
        printf("Voce saiu");
        break;
    default:
        printf("Operacaoinvalida--operacoesvalidas: (+, -, *, /)\n");
        break;
    }
}
