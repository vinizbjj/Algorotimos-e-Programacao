/* 4) Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O 
programa deve mostrar uma mensagem de permissão de acesso ou não. */


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
