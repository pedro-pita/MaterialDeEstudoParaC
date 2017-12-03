#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/* 
		O operador(*) permite modificar o conteudo da posi��o de memoria apontada.
	*/
	int x = 10; // inicializa��o da variavel
	int *p; // referencia de ponteiro
	p = &x;//o ponteiro p aponta para a variavel x
	
	printf("x = %d\n",x); 
	*p = 1234; // Modificar o valor contido no endere�o apontado
	printf("*p = %d\n",*p);
	printf("x = %d\n",x);
}
