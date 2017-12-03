#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/* 
	Ponteiros e Arrays
	*/
	
	int a[3]={1,2,3};// Por convenção a primeira posição do array é um ponteiropro Array
	int *p = a; // o Ponteiro p vai apontar pro inicio do Array
	
	for(int i = 0; i<3;i++)
		printf("%d\n",p[i]);
		//ou
	//	printf("%d\n",*(p+i));// p[i]-> forma simplificada, vai ao ponteiro p e adiciona i bytes retornando o valor
	printf("%d\n",*(p+1));// printf("%d\n",p[1])
	
	/* Endereço de elementos do array */
	printf("%d\n",(p+2)); // Pegamos o endereço do Ponteiro e adicionamos 2 posições
	printf("%d\n",&p[2]); // Endereço do apontador na 2 referencia
	
}	
