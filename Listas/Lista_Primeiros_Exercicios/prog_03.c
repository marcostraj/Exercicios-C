/* Programa para calcular a �rea de um tri�ngulo*/
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
