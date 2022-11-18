#include <stdio.h>

int main (){
	
	int x=0, y=0,c=0;
	
	do{
		printf("Digite um valor: ");
		scanf("%d",&x);
		printf("Digite um outro valor: ");
		scanf("%d",&y);
		
		if(x<y){
			
			printf("\nOs numeros foram escritos em ordem crescente.\n");
			
		}
		else{
			printf("\nOs numeros foram escritos em ordem decrescente.\n");
		}
		
		printf("\nDeseja tentar novamente?\n1- Sim\n2-Nao\n");
		scanf("%d",&c);
	}while(c==1);
	
	
	
}
