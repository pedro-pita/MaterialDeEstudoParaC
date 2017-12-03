#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define PI 3.14
void calcular(char op, float x, float y){
	switch(op){
		
		case '+':
			printf("%.2f + %.2f = %.2f" ,x ,y ,x + y);
			break;
		case '-':
			printf("%.2f - %.2f = %.2f" ,x ,y ,x - y);
			break;
		case '*':
			printf("%.2f * %.2f = %.2f" ,x ,y ,x * y);
			break;
		case '/':
			printf("%.2f / %.2f = %.2f" ,x ,y ,x / y);
			break;
		default:
				printf("Essa operassao nao existe.");
	}
}
int main(){
	setlocale(LC_ALL,"Portuguese");
	char op;
	float pNum,sNum;
	printf("Introduza dois valores:\n");
	scanf("%f %f",&pNum, &sNum);
	//Vai dar um problema uma vez que ao inserir um valor e pressionar enter o que receve é o carater mais o \n, fica por exemplo 12\n
	//fflush(stdin); //limpa o cuffer do teclado
	fflush(stdin);
	printf("Escolha a operação (+, -, *, /)\n");
	scanf("%c", &op);
	calcular(op,pNum,sNum);
	
}
