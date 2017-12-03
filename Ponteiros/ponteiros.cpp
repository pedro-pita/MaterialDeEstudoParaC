#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
	Variaveis: armazena dados de um tipo(int,float,string)
	Ponteiros: tipo especial de variaveis que armazenam endere�os de mem�ria
*/

/*
	Formas de declara��o
	Variaveis: tipo_variaveis nome_variaveis
	Ponteiros: tipo_ponteiro *nome_ponteiro
*/

int main(){
	// a variavel x do tipo inteiro
	//int x;
	
	// ponteiro chamado x para o tipo inteiro
	//int *x;
	
	//Combina��o de variavel com ponteiros
	//int z,*y;
	
	/* Ponteiros n�o inicializados apontam para um lugar indefinido.*/
//	int *q;
	/* Um ponteiro pode ter um valor especial NULL, 
	que representa o endere�o vazio, isto � n�o aponta para nada*/
//	int *q = NULL;
	
	/* 
		Podemos apontar o ponteiro para uma variavel que existe.
	*/
	int x = 10; // inicializa��o da variavel
	int *p; // referencia de ponteiro
	p = &x;//o ponteiro p aponta para a variavel x
	
	printf("x = %d\n",x); //10
	printf("&x = %d\n",&x);// Endere�o de memoria da var X
	printf("p = %d\n",p);// Endere�o de memoria apontado por p
}
