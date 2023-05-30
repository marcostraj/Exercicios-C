/* Digite dois numeros e decida a operação que ocorrerá entre eles */
#include<stdio.h>

int main(){
    int num1, num2;
    char sinal;
    printf("Digite um sinal matematico: ");
    scanf("%c",&sinal);
    printf("Digite um numero inteiro: ");
    scanf("%d",&num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d",&num2);
    if(sinal =='+') {
        printf("Voce somou os dois numeros. O Resultado e: %d",num1+num2);
    } else {
        if(sinal == '-') {
            printf("Voce subtraiu os dois numeros. O Resultado e: %d",num1-num2);
        } else {
            if(sinal == '/') {
                printf("Voce dividiu os dois numeros. O Resultado e: %d",num1/num2);
            } else {
                if(sinal == '*') {
                    printf("Voce multiplicou os dois numeros. O Resultado e: %d",num1*num2);
                }
            }
        }
    }
}
