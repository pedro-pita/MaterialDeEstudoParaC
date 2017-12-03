#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct pessoa{
	char nomePessoa[80], morada[80];
	int idade,bi;
};

struct carro{
	char marca[80], modelo[80];
	int idade,numeroDonos;
};

int main(){
	/* Estruturas diferentes podem ter campos com o mesmo nome
	Ambas as estruturas tem o campo idade
	 */
	struct pessoa p;
	struct carro c;
	
	p.idade = 30;
	c.idade = 2;
	printf("%d %d",p.idade,c.idade);
}
