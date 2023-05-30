/* Programa para calcular média de duas notas */
#include<stdio.h>
int main() {
    float media, nota1, nota2;
    printf("Digite nota 1: ");
    scanf("%f",&nota1);
    printf("Digite nota 2: ");
    scanf("%f",&nota2);
    media = (nota1 + nota2)/2;
    printf("Media: %f", media);
    return 0;
}
