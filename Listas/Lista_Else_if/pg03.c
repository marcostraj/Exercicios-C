/* Programa que faz a média de duas notas e diz se o aluno foi aprovado ou reprovado */
#include<stdio.h>
int main() {
    float nota1, nota2, media;
    printf("Digite a sua primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f",&nota2);
    media = nota1 + nota2 /2;
    if (media >= 5) {
        printf("Aprovado!");
    } else {
        printf("Reprovado :/");
    }
}
