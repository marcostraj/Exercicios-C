/* Fa�a um programa para ler dois n�meros e o s�mbolo de uma opera��o aritm�tica. Em seguida, o programa apresenta o resultado da opera��o */
#include<stdio.h>
int main(){
    float num1, num2;
    char operacao;
    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);
    printf("Digite o segundo numero: ");
    scanf("%f",&num2);
    fflush(stdin);
    printf("Digite a operacao(+, -, *, /): ");
    scanf("%c",&operacao);
    switch(operacao){
    case '+':
        printf("Resultado: %f\n",num1+num2);
        break;
    case '-':
        printf("Resultado: %f\n",num1-num2);
        break;
    case '*':
        printf("Resultado: %f\n",num1*num2);
        break;
    case '/':
        printf("Resultado: %f\n",num1/num2);
        break;
    default:
        printf("Operacaoinvalida--operacoesvalidas: (+, -, *, /)\n");
        break;
    }
}
