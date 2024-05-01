#include <stdio.h>
#include <locale.h>
#define t 10

struct estudante{
   char nome[15];
   char sexo;
   int matricula;
   float nota1, nota2,pf = 0,media=0,media_final=0;
   char resultado[12];
};
int main(){
	setlocale(LC_ALL,"Portuguese");
	struct estudante res;
	char resposta;
	
	do{
		
		printf("\nVamos calcular a media do aluno");
		printf("\nDigite o nome do aluno:\n");
		scanf(" %s", &res.nome);
		
		do{
			printf("\nDigite o sexo do aluno f ou m:\n");
		    scanf(" %c",&res.sexo);

		}while(res.sexo != 'm' && res.sexo != 'f');
				
		printf("\nDigite a matricula do aluno:\n");
		scanf(" %d",&res.matricula);
		
		do{
			printf("\nDigite o valor da A1\n");
		    scanf(" %f",&res.nota1);
		    
		    if(res.nota1 > 10 || res.nota1 < 0){
		    	printf("Nota invalida, Digite novamente");
			}
		
		}while(res.nota1 > 10 || res.nota1 < 0);
		
		do{
			printf("\nDigite o valor da A2\n");
		    scanf(" %f",&res.nota2);
		
			if(res.nota2 > 10 || res.nota2 < 0){
		    	printf("Nota invalida, Digite novamente");
			}		
		}while(res.nota2 > 10 || res.nota2 < 0);
		
		res.media =  (res.nota1 + res.nota2) /2;
		
		if(res.media<4){
			sprintf(res.resultado, "Reprovado");
		}else if(res.media >= 4 && res.media < 6){
			do{
				printf("\nO Aluno foi para prova final, digite a nota da prova final: \n");
		 	    scanf(" %f",&res.pf);
		 	    
		 	    if(res.pf > 10 || res.pf < 0){
		 	        printf("Nota invalida, Digite novamente");
				 }	
			}while(res.pf > 10 || res.pf < 0);
			
			
			res.media_final = (res.media + res.pf)/2;
			
			if(res.media_final >=6){
				sprintf(res.resultado, "Aprovado");
			}else if(res.media_final < 6){
				sprintf(res.resultado, "Reprovado");
			}
		    
		}else if(res.media >= 6){
			sprintf(res.resultado, "Aprovado");
		}else{
			printf("\n Erro no programa");
		}
		
		printf("O Aluno %s esta %s",res.nome,res.resultado);
		
		
		printf("\nDeseja encerrar o programa? digite S/N \n");
		scanf(" %c",&resposta);
		
	}
	while(resposta != 's' && resposta != 'S');
	
	

	return 0;
}
