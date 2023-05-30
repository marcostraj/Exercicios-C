/* Programa que calcula o reajuste de um salário */
#include<stdio.h>
int main() {
    float preco;
    printf("Coloque o valor do produto: ");
    scanf("%f",&preco);
    if (preco < 100) {
        printf("Esse produto e barato!");
    } else {
        if (preco >= 100 && preco < 500) {
            printf("Esse produto e normal");
        } else {
            printf("Esse produto e caro");
        }
    }
}
