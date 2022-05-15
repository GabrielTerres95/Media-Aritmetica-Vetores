#include<stdio.h>
#include<stdlib.h>
#define TAM 10
main(){
int i;
float Vet[TAM],soma=0.0;
for(i=0;i<TAM;i++){
printf("\nDigite o %i valor: ",i+1);
scanf("%f",&Vet[i]);
}
for(i=0;i<TAM;i++){
soma=soma+Vet[i];
}
printf("\n--- Impressao do Vetor ---\n\n");
for(i=0;i<TAM;i++){
printf("%.1f\t",Vet[i]);
}
printf("\nMedia: %.2f\n",soma/(float)TAM);
system("pause");
}
