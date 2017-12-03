#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct pessoa{
	char nomePessoa[80], morada[80];
	int idade,bi;
};

int main(){
	/* Inicializando a estrutura */
	struct pessoa p;
	
	/* Usamos strcpy- copiar string */
	strcpy(p.nomePessoa, "S�rgio");
	strcpy(p.morada, "Funchal");
	// Atribui��o simples
	p.idade = 30;
	printf("%s %d\n",p.nomePessoa,p.idade);
	
	/* Defini��o de uma lista de valores para a estrutura, 
	   como se de array se tratasse */
	/* Campos n�o indicados s�o inicializados com zero 
	   ou vazio se for string, apenas os ultimos podem ser deixados vazio,
	   n�o podemos pular campos */
	struct pessoa p1 = {"Ana","Machico",29};
	struct pessoa p2 = {"Antonio","St. Cruz",29};
	printf("%s %d\n",p2.nomePessoa,p2.idade);
	
	
	/* Exemplo de copia (para,de) */
	strcpy(p.nomePessoa, p1.nomePessoa);
	strcpy(p.morada, p1.morada);
	p.idade = p2.idade;
	printf("%s %d\n",p.nomePessoa,p.idade);
	
	/* Em estruturas uma vez que os campos s�o os mesmos tipo e
	   a mesma estrutura � possivel atribuir de forma simples uma
	   estrutura */
	struct pessoa p3;
	p3 = p2;
	printf("%s %d\n",p3.nomePessoa,p3.idade);
}
