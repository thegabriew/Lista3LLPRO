#include <stdio.h>
#include <locale.h>
 
int main() {
  setlocale(LC_ALL, "Portuguese"); 
   int n,x,ver=0,vern;
    
   scanf("%d",&n);
   for(int i = 0; i<n; i++)
   scanf("%d",&x);
  
   for (vern = 1; vern<x; vern++) {
       if (x%vern==0) {
           ver += vern;
       }
       if (ver ==x) {
           printf("É perfeito\n");
       } else {
           printf("Não é perfeito\n");
       }
   }
   
    return 0;
}
