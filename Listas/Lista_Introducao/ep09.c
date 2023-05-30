/* Programa que recebe um salário e aplica um aumento de 25% nele */
#include<stdio.h>
int main() {
    float valor, valor2;
    printf("Digite um salario: ");
    scanf("%f",&valor);
    valor2 = ((valor + (valor/100) * 25));
    printf("Salario com aumento: %f",valor2);
    return 0;
}
