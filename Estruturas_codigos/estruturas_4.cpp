#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Exemplo em que os campos são os mesmos mas o 
   tipo de estrutura é diferente */
   
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
	struct pessoa p, p1 = {"Ana","Machico",29,23424234};
	struct funcionario f;
	
	/* Atribuir campos iguais e estrutura do mesmo tipo(pessoa);*/
	p = p1;
	/* Devolve erro uma vez que os tipos não são o mesmo
	   funcionario <> de pessoa */
	f = p;
	
	printf("%s %d\n",p.nomePessoa,p.idade);
}
