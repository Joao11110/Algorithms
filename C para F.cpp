#include<stdio.h>
#include<locale.h>

int main(){
	float f,c;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a temperatura em Celsius: ");
    scanf("%f",&c);
    f = (c*1.8) + 32;
    printf("A temperatura em Fahrenheit é: %.1f",f);
    return 0;
}

/*
printf("Temperatura em Fahrenheit: %.1f",f=(c*1.8)+32);
*/
