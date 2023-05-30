/* Programa que receba um valor e aplica um desconto de 12% */
#include<stdio.h>
int main() {
    float valor, valor2;
    printf("Digite um valor real: ");
    scanf("%f",&valor);
    valor2 = ((valor - (valor/100) * 12));
    printf("Valor com desconto: %f",valor2);
    return 0;
}
