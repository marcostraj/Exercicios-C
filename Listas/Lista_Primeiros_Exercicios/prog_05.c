/* Programa para soma de 1 a n*/
#include<stdio.h>
int main() {
    int n, soma;
    printf("Digite o valor de n: ");
    scanf("%d",&n);
    printf("Valor de n: %d\n",n);
    soma = n * (n + 1)/2;
    printf("Somatorio 1 a %d: %d",n,soma);
}
