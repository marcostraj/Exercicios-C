/* Programa que coloca dois números em ordem crescente e diz caso eles sejam iguais  */
#include<stdio.h>
int main() {
    float numero1, numero2;
    printf("Digite o primeiro numero: ");
    scanf("%f",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%f",&numero2);
    if (numero1 == numero2){
        printf("Os numeros sao iguais!");
    } else {
        if (numero1 < numero2) {
            printf("%f, %f",numero1,numero2);
        } else {
            printf("%f, %f",numero2,numero1);
        }
    }
}
