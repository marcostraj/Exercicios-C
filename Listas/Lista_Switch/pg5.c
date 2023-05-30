/* Escreva um programa para ler a idade de um nadador e classifica-lo conforme a tabela a seguir */
#include<stdio.h>
int main(){
    int num;
    printf("Digite sua idade: ");
    scanf("d",&num);
    switch(num){
    case 0 ... 4:
        printf("Voce nao pode competir");
        break;
    case 5 ... 7:
        printf("Voce esta na categoria Infantil A");
        break;
    case 8 ... 10:
        printf("Voce esta na categoria Infantil B");
        break;
    case 11 ... 13:
        printf("Voce esta na categoria Juvenil A");
        break;
    case 14 ... 17:
        printf("Voce esta na categoria Juvenil B");
        break;
        default:
        if(num>=18){
            printf("Voce esta na categoria Adulto");
        } else {
            printf("Invalido");
        }
    }

}
