#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL ,"Portuguese");
int n[8], i, aux, p;
for(i=0;i<8;i++){
printf("digite um numero:\n");
scanf("%d",&n[i]);
}
p=1;
while(p){
p=0;   
for(i=0;i<8-1;i++){
       if(n[i]>n[i+1]){
        aux=n[i];
        n[i] = n[i+1];
        n[i+1]=aux;
        p=1;
   }
}
}
for(i=0;i<8;i++){
printf("O item numero %d, é: %d\n",i +1,n[i]);
}
}
