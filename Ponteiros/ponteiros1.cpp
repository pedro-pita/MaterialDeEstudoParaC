#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/* 
		Aceder ao valor da variavel apontada pelo ponteiro, usamos o operador(*)
	*/
	int x = 10; // inicialização da variavel
	int *p; // referencia de ponteiro
	p = &x;//o ponteiro p aponta para a variavel x
	
	printf("x = %d\n",x); //10
	printf("p = %d\n",p);// Endereço de memoria da var X
	printf("*p = %d\n",*p);// Valor contido no endereço de memoria apontado por p
}
