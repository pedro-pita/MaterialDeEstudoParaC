#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* O C permite criar estuturas próprias,
  Variaveis personalizaveis por nós.
  Usamos struct(estrutura) */
  
/*
	Sintaxe generica:
	struct nome_struct{
		tipo1 nome1; //campos ou declarações das nossas variaveis
		tipo2 nome2;
		tipoN nomeN;
	};
*/

/* Definimos no escopo global, por forma que
   esteja acessivel em todo o porgrama */
   
/* Desta forma empacotamos dados que juntos representam 
   dados comuns de algo */
struct pessoa{
	char nomePessoa[80], morada[80];
	int idade,bi;
};
int main(){
	/* declaração de variaveis nativas ou locais, desta forma 
	   nada nos indica que representam algo comum
	*/
	char nomePessoa[80], morada[80];
	int idade;
	int bi;
	
	/* declaração da variavel de estrutura, referenciamos uma
	 estrutura que representará um conjuntode dados comuns */
	struct pessoa p;

	/* Acesso aos atributos/variaveis(campos) da estrutura
	   usamos o operador '.' 
	*/
	//Atribuimos um valor ao campo idade da estrutura pessoa
	p.idade = 35;
	// leitura via teclado para o campo bi da estrutura pessoa
	// leitura  como inteiro, visto o campo bi ser do tipo inteiro
	scanf("%d",&p.bi);
	fflush(stdin);
	gets(p.nomePessoa);// leitura de string
	printf("%d %s",p.bi,p.nomePessoa);
}
