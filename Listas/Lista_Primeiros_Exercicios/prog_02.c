/* Programa para converter celsius para fahrenheit */
#include<stdio.h>
int main() {
    float fahrenheit, celsius;
    printf("Temperatura em Celsius: ");
    scanf("%f",&celsius);
    fahrenheit = celsius * 1.8 + 32;
    printf("Temperatura em Fahrenheit: %f",fahrenheit);
    return 0;
}
