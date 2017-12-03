#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Struct como parametros e como retorno */
   
struct pessoa{
	char nomePessoa[80], morada[80];
	int idade,bi;
};

int imprimir(struct pessoa p){
	int r = 0;
	if(p.idade>=18){
		printf("%s %d\n",p.nomePessoa,p.idade);
		r = 1;
	}else{
		r = 0;
	}
	return r;
}


struct pessoa preenchePessoa(char nomePessoa[], char morada[],int idade,int bi){
	struct pessoa p;
	strcpy(p.nomePessoa,nomePessoa);
	strcpy(p.morada,morada);
	p.idade      = idade;
	p.bi         = bi;
	return p;
}

/* (*p)-> apontador para a mem�ria onde esta guardada a estrutura passada  */
void preenchePessoaRef(struct pessoa *p){
	printf("Nome:");
	gets((*p).nomePessoa);
	printf("Morada:");
	gets((*p).morada);
	printf("Idade:");
	/* No caso de var do tipo inteiro temos que 
	  referenciar o endere�o que o apontador referencia */
	scanf("%d",&(*p).idade);
	printf("BI:");
	scanf("%d",&(*p).bi);
}

/*
	Explica��o:
	Se tivessemos *p.nomePessoa ao inves de 
	(*p).nomePessoa - Estariamos a tentar aceder ao elemento nomePessoa , 
	que � um campo da struct que � apontada pelo ponteiro 'p'.
	No fundo tentamos aceder ao ponteiro nomePessoa, da estrutura 
	p(representa uma pessoa).
	
	Problema, uma vez que, p n�o � uma estrutura, muito menos tem um campo nomePessoa,
	Da forma que referimos sabemos que p � um ponteiro para uma estrutura, isto �, 
	um endere�o de mem�ria.
	Isto acontece porque em 'C' o operador '.' tem precedencia sobre o '*'.
	Ent�o referenciamos que 1 deve capturar o endere�o apontado por p (*p),
	s� depois nesse endere�o capturar o campo nomePessoa.
	
	Por forma a facilitar a programa��o e percep��o usamos o operador '->'. 
	Que simplesmente � um 'atalho' de substitui��o da expressao anterioemente citada.
	Suma:
		Em vez de : *(ponteiro)
		Escrevemos ponteiro->
	Exemplo :
		Em vez de : scanf("%d",&(*p).idade);
		Temos : scanf("%d",&p->idade);

void preenchePessoaRef(struct pessoa *p){
	printf("Nome:");
	fflush(stdin);
	gets(p->nomePessoa);
	printf("Morada:");
	gets(p->morada);
	printf("Idade:");
	scanf("%d",&p->idade);
	printf("BI:");
	scanf("%d",&p->bi);
}*/

int main(){
	/* Inicializando a estrutura */
	struct pessoa p = {"Ana","Machico",29,23424234};
	/* */
	
	struct pessoa nova = preenchePessoa("Sergio","Funchal",35,123321);
	
	int res = imprimir(p);
	printf("%d\n",res);
	
	int res1 = imprimir(nova);
	printf("%d\n",res);
	
	/* Passagem por referencia */
	struct pessoa nova_ref;
	preenchePessoaRef(&nova_ref);
	imprimir(nova_ref);
}
