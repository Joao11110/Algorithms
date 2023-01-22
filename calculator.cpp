#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese"); 
	float n1, n2, r;
	int op;
	printf("|----------------------------------|\n");
	printf("| Calculadora Simples              |\n");
	printf("|----------------------------------|\n");
	printf("|1 - Multiplica��o                 |\n");
	printf("|2 - Subtra��o                     |\n");
	printf("|3 - Divis�o                       |\n");
	printf("|4 - Soma                          |\n");
	printf("|----------------------------------|\n");
	printf("Digite um valor da tabela para come�ar a calcular:\n");
	scanf("%f", &op);
	printf("Digite o primeiro valor:\n");
	scanf("%f", &n1);
	printf("Digite o segundo valor:\n");
	scanf("%f", &n2);
	switch(op){
		case 1:
			printf("Multiplica��o: %.1f", n1*n2);
			break;
		case 2:
			printf("Subtra��o: %.1f", n1-n2);
			break;
		case 3:
			if(n2 != 0){	
				printf("Divis�o: %.1f", n1/n2);
		    }
			else{
				printf("N�o � poss�vel dividir por 0.");
			}
			break;
		case 4:
		printf("Soma: %.1f", n1+n2);
			break;
		default:
			printf("Op��o inv�lida.");		
	}
	return(0);
}
