/* Programa para calcular o imc*/
#include<stdio.h>
int main() {
    float peso, altura, imc;
    printf("Digite o peso: ");
    scanf("%f",&peso);
    printf("Digite a altura: ");
    scanf("%f",&altura);
    imc = (peso / (altura * altura));
    printf("Imc: %f",imc);
    return 0;
}
