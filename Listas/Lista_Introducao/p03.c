/* Programa que recebe e mostra a soma de três números inteiros */
#include<stdio.h>
int main() {
    int num1, num2, num3, soma;
    printf("Escreva um numero inteiro: ");
    scanf("%d",&num1);
    printf("Escreva um numero inteiro: ");
    scanf("%d",&num2);
    printf("Escreva um numero inteiro: ");
    scanf("%d",&num3);
    soma = (num1 + num2 + num3);
    printf("Soma: %d",soma);
    return 0;
}
