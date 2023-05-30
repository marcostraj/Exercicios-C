/* Programa que calcula o reajuste de um salário */
#include<stdio.h>
int main() {
    float salario1, salario2;
    printf("Digite o valor do seu salario: ");
    scanf("%f",&salario1);
    if (salario1 < 1000) {
        salario2 = (salario1 + salario1 * 20 / 100);
        printf("Seu salario agora e de: %f",salario2);
    } else {
        if (salario1 >1000 && salario1 <2000) {
            salario2 = (salario1 + salario1 * 10 / 100);
            printf("Seu salario agora e de: %f",salario2);
        } else {
            printf("Voce nao tera reajuste");
        }
    }
}
