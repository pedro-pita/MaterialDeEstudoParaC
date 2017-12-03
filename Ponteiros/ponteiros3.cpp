#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/* 
		Atribui��o: ponteiros podem apenas receber o endere�o 
		de variaveis do memso tipo que o ponteiro
	*/
	int *p,*p1,x = 10; // inicializa��o da variavel
	float y = 12.4; // referencia de ponteiro
	p = &x;//o ponteiro p aponta para a variavel x	
	printf("*p = %d\n",*p); 
	p1 = p;
	printf("*p1 = %d\n",*p1);
	//p = &y; // N�o permite tipos diferentes(float*,int*)
	printf("x = %d\n",x);
	
	/* O valor de um endere�o armazenado por um 
	ponteiro pode ser somado e subtraido (valores Inteiros)*/
	printf("p = %d\n",p);
	p++; // por padr�o o tipo int � representado por 4bytes, somamos sempre em rela��o ao tipo do ponteiro
	printf("p = %d\n",p); 
	p += 20;// 20*4 = 80
	printf("p = %d\n",p);
	p -= 2;// 2*4 = 8
	printf("p = %d\n",p); 
	
	/* Exemplo de adi��o subtra��o de endere�o.
	Depende do tipo de dados que o ponteiro aponta */
	
	char a = 'a';
	char *c = &a;
	printf("\n\n\nAntes -> \np = %d\nc = %d",p,c); 
	p++;// incrementa 4 posi��es(4 bytes)
	c++;// incrementa 1 posi��o(1byte), o char � representado por 1 byte
	printf("\nDepois-> \np = %d\nc = %d",p,c);
	
	/* Compara��o de Ponteiros (==,!=,>,<,<=,>=) 
	Estas verifica��e indicam se o Ponteiros apontam para o mesmo local da memoria
	*/
	
	int *w,*w1, q, o=12;
	w = &o;
	w1 = &o;
	printf("\nw = %d\n",w);
	printf("w1 = %d\n",w1); 
	if(w > w1)
		printf("w > w1\n");
	else
		printf("w <= w1\n");
		
	if(w == w1)
		printf("Apontam para a mesma zona da memoria:%d\n",*w);
	
	
	
	
}
