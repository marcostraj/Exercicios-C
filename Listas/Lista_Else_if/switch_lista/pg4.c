/* Usando switch, fa�a um programa para ler dois valores e apresentar para o
usu�rio o menu de op��es conforme abaixo. Em seguida, o programa dever� ler a
op��o indicada pelo usu�rio e efetuar a opera��o desejada. Adicionalmente, o
programa deve apresentar uma mensagem de erro caso a op��o digitada for
inv�lida */
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
