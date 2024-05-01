#include <stdio.h>
#include <locale.h>
#define t 10
int main(){
	setlocale(LC_ALL,"Portuguese");
	int vetor[t],i=0;
	printf("Digite 10 numeros pares");

		for(i=0;i<t;i++){
		    do{
		     printf("\nDigite um numero par:\n");
		     scanf("%d",&vetor[i]);
		      if(vetor[i] % 2 !=0){
		      	printf("\nNumero invalido");
			  }
			}
		    while(vetor[i] % 2 !=0);	   
        }	
        int soma=0;
        for(i=0;i<t;i++){
			soma = soma+vetor[i];
		}
		printf("\nO numero somado foi:%d",soma);
	return 0;
}
