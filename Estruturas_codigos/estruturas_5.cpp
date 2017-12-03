#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Exemplo de estrutura  e Array
   A estrutura é um tipo  de dado, 
   portanto suporta declaração de um array de estrutura
 */
   
struct pessoa{
	char nomePessoa[80], morada[80];
	int idade,bi;
};

int main(){
	/* Inicializando a estrutura */
	struct pessoa p[2];
	
	/* Acesso ao array da estrutura, o operador '.' 
	   vem depois das chavetas do indice do array */
	strcpy(p[0].nomePessoa,"Sergio");
	p[0].idade = 30;
	p[1].idade = p[0].idade - 10;
	printf("%d %d\n",p[0].idade,p[1].idade);
	
	/* Ao Combinar arrays com estruturas, a manipulação das
	   variaveis da estrutura é feita de forma mais facil */
	int i;
	for( i = 0; i < 2 ; i++){
		gets(p[i].nomePessoa);
		scanf("%d",&p[i].idade);
		fflush(stdin);
		gets(p[i].morada);
		scanf("%d",&p[i].bi);
		fflush(stdin);
	}
	for(i = 0; i < 2 ; i++)
	printf("%s %d %s %d\n",p[i].nomePessoa,p[i].idade,p[i].morada,p[i].bi);
}
