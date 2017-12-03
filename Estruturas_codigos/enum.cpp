#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Enum - Pode ser vista como uma lista de constantes, 
onde cada constante possui um nome significativo
enum nome_enum{nvar,zvar};
*/

enum semana{Domingo,Segunda,Terca,Quarta,Quinta,Sexta,Sabado};


int main(){
	//declaraçao de uma variavel enum
	enum semana s;
	//atribuirum valor a variavel, s é um identificador que representa um numero da lista
	// Terca é o valor 2, visto Domingo ser 0
	s = Quarta;
	printf("Valor = %d\n",s);
	
	/* Exemplo 2*/
	enum semana s1,s2,s3;
	s1 = Quarta;//3
	s2 = Sexta;//5
	s3 = Domingo;//0
	printf("Segunda = %d\n",Segunda);// Devolve valor do dia (1)
	printf("S1= %d\n",s1);// Devolve valor do dia (3)
	printf("S2 = %d\n",s2);// Devolve valor do dia (5)
	printf("S3 = %d\n",s3);// Devolve valor do dia (0)
	
	if(s2 == Sexta)
		printf("Iguais");
	else
		printf("Diferentes");
		
	/* Definir valores para numeração, constante após vale valor anterior mais 1 */	
	enum mes{Janeiro=2,Fev,Mar,Abril,Maio=8,Junho,Julho,Agosto,Setembro,Outubro,Novembro,Dezembro};
	printf("Janeiro = %d\n",Janeiro);// Devolve valor do dia (2)
	printf("Fev = %d\n",Fev);// Devolve valor do dia (3)
	printf("Maio = %d\n",Maio);// Devolve valor do dia (8)
	printf("Julho = %d\n",Julho);// Devolve valor do dia (10)
	
	/* Carateres de escape*/
	
	enum c_escapes{novaLinha='\n',tabulacao='\t'};
	enum c_escapes e = novaLinha;
	printf("Teste de nova linha %c via %c enum\n",e,e);
	e = tabulacao;
	printf("Teste de tabulação com %c via %c enum\n",e,e);
	printf("Teste %c de nova linha via %c enum com tabulação\n",novaLinha,tabulacao);
}







