/* Programa que diz  se um número é negativo ou positivo */
#include<stdio.h>
int main() {
    float numero;
    printf("Digite um numero real: ");
    scanf("%f",&numero);
    if (numero == 0) {
        printf("Esse valor e neutro");
    } else {
        if (numero > 0) {
            printf("Esse numero e positivo");
        } else {
            printf("Esse numero e negativo");
        }
    }
}

