

//Exercicio 3
#include <stdio.h>
int main() {
	int x;
	printf("Introduza valor: \n");
	scanf("%d", &x);
	printf("Antecessor: %d \n Sucessor: %d",x-1, x+1);
}

//Exercicio 4
#include <stdio.h>
int main() {
	int n1,n2,n3,n4;
	scanf("%d %d %d %d", &n1,&n2,&n3,&n4);
	printf("Media das notas: %d", (n1+n2+n3+n4)/4);
}

//Exercicio 5
#include <stdio.h>
#include <stdlib.h>
int main(){
	float lado;
	printf("Introduza o tamanho do lado:\n");
	scanf("%f",&lado);
	printf("Resultado: %0.2f", (float)lado * lado);
	
}

//Exercio 6
#include <stdio.h>
#include <stdlib.h>
int main(){
	float salario;
	printf("Introduza o valor do salario que ira receber o aumento:\n");
		scanf("%f",&salario);
	printf("Salario Aumentado Para: %0.2f", (float)salario + (salario * 25 / 100));
}

//Exercio 7
#include <stdio.h>
int main() {
	int alt_degrau, alt_max;
	
	printf("Altura do degrau e altura pretendida: ");
	scanf("%d %d", &alt_degrau, &alt_max);
	printf("Degraus necessarios: %0.2f", (float)alt_max / alt_degrau);
}

//Exercicio 8
#include <stdio.h>
#define PI 3.141592
int main(){
	float raio;
	printf("Introduza o valor do raio:\n");
	scanf("%f",&raio);
	printf("A area do circulo: %0.2f",PI*(raio*raio));	
}

//Exercio 9
#include <stdio.h>
int main() {
	int v1, v2, v3;
	
	printf("Insira 3 valores : ");
	scanf("%d %d %d", &v1,&v2,&v3);
	printf("Soma dos quadrados dos 3 valores : %d", (v1 * v1) + (v2 * v2) + (v3 * v3));
}

//Exercicio 10
#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf("Introduza o valor das variaveis a e b:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(!(a%b))
		printf("a é multipo de b\n");
	else
		printf("a nao é multipo de b\n");
	
	if(!(b%a))
		printf("b é multiplo de a\n");
	else
		printf("b não é multiplo de a\n");	
}
//Exercicio11
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char x;
	
	printf("Insira caracter : ");
	scanf("%c", &x);
	
	if((x >= '0') && (x <= '9')) {
		printf("É um digito");
	} else {
		if((x >= 'a') && (x <= 'z')) {
			printf("É minuscula");
		} else if((x >= 'A') && (x <= 'Z')) {
			printf("É maiuscula");
		}
	}
}

//Exercicio 12
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero;
	printf("Introduza o numero que deseja:\n");
	scanf("%d", &numero);
	if(numero >= 0){
		printf("Este numero é positivo.\n");
		printf("%d ao quadrado é %d. \n", numero, numero * numero);
		printf("Numero sucessor a %d é %d.", numero, numero + 1);
	}else
		printf("Nao podemos fazer nada, %d é negativo.", numero);
}

//Exercicio13
#include <stdio.h>
int main () {
	int x;
	
	printf("Insira valor: ");
	scanf("%d", &x);
	
	if(x%2) {
		printf("Valor é impar");
	} else {
		printf("Valor é par");
	}
}

//Exercicio 14
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf("Introduza o valor das variaveis a e b:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a > b)
		printf("O primeiro numero (%d) é maior do que o segundo numero (%d), e o resto de ambos os numero é %d.",a,b,a-b);
	else if(b > a)
		printf("O segundo numero (%d) é maior do que o primeiro numero (%d), e o resto de ambos os numeros é %d.",b,a,b-a);
	else
		printf("O primeiro numero (%d) e o segundo numero (%d) são iguais, logo o resto de ambos os numeros é 0.",a,b);
}

//Exercicio 15
#include <stdio.h>
int main() {
	char sexo;
	float alt;
	
	printf("Insira sexo(h / m) seguido de altura : ");
	scanf("%s %f", &sexo, &alt);
	
	if(sexo == 'h') {
		printf("Peso ideal : %0.1f", (72.7 * alt) - 58.0);
	} else if (sexo == 'm') {
		printf("Peso ideal : %0.1f", (62.1 * alt) - 44.7);
	}	
}

//Exercicio 16
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float nota1,nota2,nota3;
	printf("Introduza o valor das notas:\n");
	scanf("%f",&nota1);
	scanf("%f",&nota2);
	scanf("%f",&nota3);
	
	float media = ((20 * nota1)/100) + ((20 * nota2)/100)+ ((60 * nota3)/100);
	
	if(media >= 95)
		printf("Voçe esta aprovado com uma media de %0.2f.", media);
	else
		printf("Voçe esta reprovado com uma media de %0.2f.", media);
}

//Exercicio 17
#include <stdio.h>
int main() {
	float v1,v2,v3;
	
	printf("Insira 3 valores (0-20)");
	scanf("%f %f %f", &v1,&v2,&v3);
	
	if((v1 > 8.0) && (v2 > 8.0) && (v3 > 8.0)) {
		printf("Aprovado. Média de %0.1f", (v1 + v2 + v3) / 3);
	} else {
		printf("Reprovado");
	}
}
