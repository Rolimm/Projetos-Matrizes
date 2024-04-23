#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL , "Portuguese");
	
	int matriz[2][4],i,j,par=0,impar=0,parar=1,aux=0;
	
	printf("Preciso que voce digite 4 numeros pares abaixo de 11 e 4 numeros impares acima de 11,\nCaso contrario ira dar erro\n\n");
	for(i=0;i<=1;i++){
		for(j=0;j<=3;j++){
				printf("Digite um numero:\n");
		        scanf("%d",&matriz[i][j]);	

		        if(matriz[i][j]==0 || matriz[i][j]>=21){
		        	printf("Erro , o valor digitado foi 0 ou foi igual ou maior que 21\n");
		        	return 0;
		       }
		}
	}
	
	for(i=0;i<=1;i++){
		for(j=0;j<=3;j++){
			if(matriz[i][j] %2==0 && matriz[i][j]<11){
				    par++;
			}
			else if(matriz[i][j] % 2 != 0 && matriz[i][j] >= 11) {
                   impar++;
        }
		}
	}
	
	if(par==4 && impar ==4){
		
        printf("\nparabens voce respeitou minhas regras\n");
        
        while(parar){
            parar = 0;
                for (i = 0; i < 2; i++) {
                    for (j = 0; j < 3; j++) { 
                        if (matriz[i][j] > matriz[i][j + 1]) {
                            aux = matriz[i][j];
                            matriz[i][j] = matriz[i][j + 1];
                            matriz[i][j + 1] = aux;
                            parar = 1;
                        }
                    }
                }
        }
   
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 4; j++) {
                if ((i == 0 && matriz[i][j] % 2 != 0) || (i == 1 && matriz[i][j] % 2 == 0)) {
                    aux = matriz[0][j];
                    matriz[0][j] = matriz[1][j];
                    matriz[1][j] = aux;
                }
            }
        }
			
		printf("\nAqui está a primeira matriz:\n");	
	for (i = 0; i < 2; i++) {
            for (j = 0; j < 4; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        
       for (i = 0; i < 2; i++) {
            for (j = 0; j < 4; j++) {
                if ((i == 1 && matriz[i][j] % 2 != 0) || (i == 0 && matriz[i][j] % 2 == 0)) {
                    aux = matriz[0][j];
                    matriz[0][j] = matriz[1][j];
                    matriz[1][j] = aux;
                }
            }
        }
        printf("\nAqui está a segunda matriz:\n");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 4; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        
        
		      
	}else{
		if(par>4){
			printf("\nErro");
			printf("\nvocê digitou mais de 4 pares: %d pares e seus impare foram: %d",par,impar);
		}else if(impar>4){
			printf("\nErro");
			printf("\nVocê digitou mais de 4 numeros impares: %d impares e seus pares foram %d",impar,par);
		}else{
			printf("\nErro");
			printf("\nOs numeros que foram digitados pares ou impares \nEstão fora do padrão de par menor que 11 e impar maior ou igual a 11");
		}
		return 0;
	}	
		
	return 0;
}
