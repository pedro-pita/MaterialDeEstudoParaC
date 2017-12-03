#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Uma estrutura sendo um tipo de dados, 
   tambem pode ser referenciada como variavel.
   Estruturas aninhadas
   struct nStruc1{
   		...
	}
   struct nStruc2{
   		...
   		struct nStruc1 varNStruct1;
	}
*/
   
struct morada{
	char morada[80];
	int numeroPorta;
};

struct pessoa{
	char nomePessoa[80];
	int idade,bi;
	struct morada endereco;
};

int main(){
	/* Inicializando a estrutura */
	struct pessoa p;
	strcpy(p.nomePessoa,"Sergio");
	p.idade = 35;
	p.endereco.numeroPorta = 127;
	strcpy(p.endereco.morada,"Funchal");
	
	printf("%s %d %d %s\n",p.nomePessoa,p.idade,
	      p.endereco.numeroPorta,p.endereco.morada);
	      
	/* Ler via teclado para a estrutura aninhada*/
	gets(p.nomePessoa);
	scanf("%d",&p.idade);
	fflush(stdin);
	gets(p.endereco.morada);
	fflush(stdin);
	scanf("%d",&p.endereco.numeroPorta);
	printf("%s %d %d %s\n",p.nomePessoa,p.idade,
	      p.endereco.numeroPorta,p.endereco.morada);
}
