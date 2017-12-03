#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/* 
	Ponteiros de ponteiros
	*/
	
	int x =10;
	int *p = &x; // Ponteiro para endereço de memoria de inteiro X
	int **p2 = &p;// Ponteiro para Ponteiro de inteiros
	
	/*	p2->&p->&x, logo, mostra o valor de p2(endereço de p)	*/
	printf("p2: %d\n",p2);// &p
	/*	p2->&p->&x, logo,mostrar o valor apontado por p2(endereço de x)	*/
	printf("*p2: %d\n",*p2);// &x
	/*	p2->&p->&x = 10, logo,mostrar o valor apontado pelo ponteiro p(valor de x)	*/
	printf("**p2: %d\n",**p2);// x =10
	
	/* Alterar o valor apontado pelo ponteiro de ponteiro*/
	**p2 = 12;
	printf("x: %d\n",x);
	/* 
		Memoria
		#		var			conteudo
		1		""			""
		2		""			""
		3		int **p2	#5
		4		""			""
		5		int *p		#7
		6		""			""
		7		int x		10
	*/
}	
