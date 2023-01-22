#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese"); 
	float n1, n2, r;
	int op;
	printf("|----------------------------------|\n");
	printf("| Calculadora Simples              |\n");
	printf("|----------------------------------|\n");
	printf("|1 - Multiplicação                 |\n");
	printf("|2 - Subtração                     |\n");
	printf("|3 - Divisão                       |\n");
	printf("|4 - Soma                          |\n");
	printf("|----------------------------------|\n");
	printf("Digite um valor da tabela para começar a calcular:\n");
	scanf("%f", &op);
	printf("Digite o primeiro valor:\n");
	scanf("%f", &n1);
	printf("Digite o segundo valor:\n");
	scanf("%f", &n2);
	switch(op){
		case 1:
			printf("Multiplicação: %.1f", n1*n2);
			break;
		case 2:
			printf("Subtração: %.1f", n1-n2);
			break;
		case 3:
			if(n2 != 0){	
				printf("Divisão: %.1f", n1/n2);
		    }
			else{
				printf("Não é possível dividir por 0.");
			}
			break;
		case 4:
		printf("Soma: %.1f", n1+n2);
			break;
		default:
			printf("Opção inválida.");		
	}
	return(0);
}
