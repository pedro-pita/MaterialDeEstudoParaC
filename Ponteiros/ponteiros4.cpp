, existe#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/* 
	Ponteiros Gen�rico: pode apontar para qlq tipo de dados, existentes ou que ser�o criados.
	Sintaxe:
		void *nome_ponteiro;
	*/
	void *pg;
	int *p,p1 = 10; 
	
	p = &p1;
	pg = &p1;// Endere�o de int
	printf("pg = %p\n",pg); 
	pg = &p;// Endere�o de int*, isto � void* aponta para int*(ponteiro de ponteiro)
	printf("pg = %p\n",pg);
	pg = p;// Endere�o de int
	printf("pg = %p\n",pg);
	
	/* Os ponteiros genericos necessitamos converter os tipos, isto �, sendo um ponteiro generico,
	 n�o sabemos quanto espa�o est�o armazenados */
	void *pp;
	int p2=10;
	pp = &p2;// endere�o de int
	//printf("Conteudo: %d\n",*pp);// ERRO, porque n�o sabemos o espa�o armazenado
	printf("Conteudo: %d\n",*(int*)pp);// Converter o tipo para int*

}
