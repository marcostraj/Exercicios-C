/* Programa que receba um número e diga o seu sucessor e seu antecessor */
#include<stdio.h>
int main() {
    int n, n2, n3;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    n2 = n + 1;
    printf("Sucessor: %d",n2);
    n3 = n - 1;
    printf("Antecessor: %d",n3);
    return 0;
}
