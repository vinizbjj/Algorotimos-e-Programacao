#include <stdio.h>
#include <math.h>
#include <string.h>

int senha;

    int main(){

       printf("\nDigite sua senha\n");
       scanf("%d", &senha);
 

   if (senha == 4531){

   printf("\n Acesso permitido");

   } else
   
   printf("\n Acesso negado, verifique sua senha"); 


   return 0;
}
