/* Programa que diz  se algu�m � maior ou menor de idade */
#include<stdio.h>
int main() {
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    if (idade >= 18) {
        printf("Maior de idade");
    } else {
        printf("Menor de idade");
    }
}
