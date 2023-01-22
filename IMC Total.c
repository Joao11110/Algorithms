#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	float p,a,imc;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o seu peso:\n");
    scanf("%f", &p);
    printf("Digite sua altura:\n");
    scanf("%f", &a);
    imc = p/(a*a);
    printf("\nO seu imc é de: %.1f\n",imc);
    if(imc < 18.5){
    	printf("Calssificação: Subpeso.");
	}
	else if((imc >= 18.5) && (imc <= 24.9)){
		printf("Calssificação: Peso ideal.");	
	}
	else if((imc >= 25.0) && (imc <= 29.9)){
		printf("Calssificação: Sobrepeso.");
	}
	else if((imc >= 30.0) && (imc <= 34.9)){
		printf("Calssificação: Obesidade gral 1.");
	}
	else if((imc >= 35.0) && (imc <= 39.9)){
		printf("Calssificação: Obesidade gral 2 (severa).");
	}
	else{
		printf("Calssificação: Obesidade gral 3 (mórbida).");
	} 
    return 0;
}
