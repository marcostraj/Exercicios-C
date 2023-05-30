/* Data de nascimento */
#include<stdio.h>

int main(){
    int dia, mes, ano, dianasci, mesnasci, anonasci;
    printf("Digite o dia de hoje: ");
    scanf("%d",&dia);
    printf("Digite o mes de hoje: ");
    scanf("%d",&mes);
    printf("Digite o ano de hoje: ");
    scanf("%d",&ano);
    printf("Digite o dia do seu nascimento: ");
    scanf("%d",&dianasci);
    printf("Digite o mes do seu nascimento: ");
    scanf("%d",&mesnasci);
    printf("Digite o ano do seu nascimento: ");
    scanf("%d",&anonasci);
    printf("Voce viveu essa quantidade de dias: %d \n",dia-dianasci);
    printf("Voce viveu essa quantidade de meses: %d \n",mes-mesnasci);
    printf("Voce viveu essa quantidade de anos: %d \n",ano-anonasci);
}
