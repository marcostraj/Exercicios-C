/* Programa que converte real em dólar de acordo com sua cotação */
#include<stdio.h>
int main() {
    float real, cota, dolar;
    printf("Digite um valor em reais: ");
    scanf("%f",&real);
    printf("Digite a cotação atual do dólar: ");
    scanf("%f",&cota);
    dolar = real * cota;
    printf("Valor em dólar: %f",dolar);
    return 0;
}
