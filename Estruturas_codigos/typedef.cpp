#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
	Comando typedef - permite definir um "referencia"(apelido)
	para um tipo existente
	
	Sintaxe:
	typedef tipo_existente novo_nome;
*/

//Criar um apelido para os valores inteiros nativos
typedef int inteiro;

int main(){
	// iniciar as var, int e inteiro representam o mesmo tipo
	int a = 20;
	inteiro z = 20;
	z += a;
	printf("Soma= %d\n",z) ;
	
	
	/*Exemplo com struct proprias */
	// struct pessoa
	struct pessoa{
		char nomePessoa[80];
		int idade, bi;
	};
	typedef struct pessoa tpessoa;
	/* tpessoa e pessoa representam o mesmo tipo*/
	struct pessoa p;
	tpessoa p1;
	
	p.idade  = 12;
	p1.idade = 15;
	printf("%d, %d\n",p.idade,p1.idade);
}
