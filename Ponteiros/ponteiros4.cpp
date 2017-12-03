, existe#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/* 
	Ponteiros Genérico: pode apontar para qlq tipo de dados, existentes ou que serão criados.
	Sintaxe:
		void *nome_ponteiro;
	*/
	void *pg;
	int *p,p1 = 10; 
	
	p = &p1;
	pg = &p1;// Endereço de int
	printf("pg = %p\n",pg); 
	pg = &p;// Endereço de int*, isto é void* aponta para int*(ponteiro de ponteiro)
	printf("pg = %p\n",pg);
	pg = p;// Endereço de int
	printf("pg = %p\n",pg);
	
	/* Os ponteiros genericos necessitamos converter os tipos, isto é, sendo um ponteiro generico,
	 não sabemos quanto espaço estão armazenados */
	void *pp;
	int p2=10;
	pp = &p2;// endereço de int
	//printf("Conteudo: %d\n",*pp);// ERRO, porque não sabemos o espaço armazenado
	printf("Conteudo: %d\n",*(int*)pp);// Converter o tipo para int*

}
