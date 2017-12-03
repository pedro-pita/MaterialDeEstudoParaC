#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
	Variaveis: armazena dados de um tipo(int,float,string)
	Ponteiros: tipo especial de variaveis que armazenam endereços de memória
*/

/*
	Formas de declaração
	Variaveis: tipo_variaveis nome_variaveis
	Ponteiros: tipo_ponteiro *nome_ponteiro
*/

int main(){
	// a variavel x do tipo inteiro
	//int x;
	
	// ponteiro chamado x para o tipo inteiro
	//int *x;
	
	//Combinação de variavel com ponteiros
	//int z,*y;
	
	/* Ponteiros não inicializados apontam para um lugar indefinido.*/
//	int *q;
	/* Um ponteiro pode ter um valor especial NULL, 
	que representa o endereço vazio, isto é não aponta para nada*/
//	int *q = NULL;
	
	/* 
		Podemos apontar o ponteiro para uma variavel que existe.
	*/
	int x = 10; // inicialização da variavel
	int *p; // referencia de ponteiro
	p = &x;//o ponteiro p aponta para a variavel x
	
	printf("x = %d\n",x); //10
	printf("&x = %d\n",&x);// Endereço de memoria da var X
	printf("p = %d\n",p);// Endereço de memoria apontado por p
}
