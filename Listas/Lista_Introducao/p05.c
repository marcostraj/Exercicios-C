/* Programa que converte real em d�lar de acordo com sua cota��o */
#include<stdio.h>
int main() {
    float real, cota, dolar;
    printf("Digite um valor em reais: ");
    scanf("%f",&real);
    printf("Digite a cota��o atual do d�lar: ");
    scanf("%f",&cota);
    dolar = real * cota;
    printf("Valor em d�lar: %f",dolar);
    return 0;
}
