#include <stdio.h>

int main (){
	
	int r,n;
	
	scanf("%d",&n);
	
	for (int i =1; i<=10;i++){
		r=n*i;
		printf("%d x %d = %d\n",i,n,r);
		
	}
	
	return 0;
}
