/* Programa para calcular a área de um triângulo*/
#include<stdio.h>
int main() {
    float area, altura, base;
    printf("Digite o valor da base: ");
    scanf("%f",&base);
    printf("Digite o valor da altura: ");
    scanf("%f",&altura);
    area = (base * altura)/2;
    printf("Area: %f",area);
    return 0;
}
