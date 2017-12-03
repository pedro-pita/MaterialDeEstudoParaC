#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Exemplo em que os campos s�o os mesmos mas o 
   tipo de estrutura � diferente */
   
struct pessoa{
	char nomePessoa[80], morada[80];
	int idade,bi;
};

struct funcionario{
	char nomePessoa[80], morada[80];
	int idade,bi;
};

int main(){
	/* Inicializando a estrutura */
	struct pessoa p, p2 = {"Ana","Machico",29,23424234};
	struct funcionario f;

	/* Atribuir campos iguais e estrutura do mesmo tipo(pessoa);*/
	p = p2;
	/* Devolve erro uma vez que os tipos n�o s�o o mesmo
	   funcionario <> de pessoa */
	//f = p; Devolve erro uma vez que os tipos n�o s�o o mesmo funcionario <> de pessoa
	printf("%s %d %d\n",p.nomePessoa,p.idade, p.bi);
}
