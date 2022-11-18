#include <stdio.h>

int main (){
	
	int senha;
		
	do{
	printf("Digite a senha: ");
	scanf("%d",&senha);
		
	if(senha==2002){
			
	printf("\nAcesso Permitido.");			
		}
		else{
	printf("\nSenha Invalida\n");	
	
}
	}while(senha!=2002);
	

}
