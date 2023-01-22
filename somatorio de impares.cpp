#include<stdio.h>
#include<locale.h>

int i, n, s=0;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Quantos numeros deseja informar: ");
	scanf("%i", &n);		
	int v[n];
	for(i = 0; i < n; i++){
		printf("Digite o %iº valor: ", i+1);
		scanf("%i", &v[i]);	
	}
	for(i = 0; i < n; i++){
		if(v[i] % 2 != 0){
			s = s + v[i];
		}
	}
	printf("Somatório de impares: %i", s);
	return(0);
}
