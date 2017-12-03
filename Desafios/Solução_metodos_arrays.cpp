#include<stdio.h>
#include<stdlib.h>
 /* Desafio Métodos*/
/* ----------------------*/
/* 		Pergunta 1 */
/* ----------------------*/
void imprimeSequencia(int i, int f){
	int c;
	for(c=i;c<=f;c++){
	if(c >= 52 && c <= 63) continue;
	printf("%d\t%c\n",c,c);
	}
}
int main(){
	imprimeSequencia(38,145);
}
/* ----------------------*/
	//Pergunta 2 e2 2.a 
/* ----------------------*/
int verificaPosNeg(char v){
	return ((v >='0') ? 1 : 0);
}
int main(){
	int n,n0,n1;
	char c;
	while((c=getchar())!= '.'){ // Enquanto não pressionar .
		if(n = verificaPosNeg(c))
			n1++;
		else
			n0++;
	printf("%d\n",n);
	fflush(stdin);
}
	printf("Negativos:%d Positivos: %d\n",n0, n1-1);// n1-1, descontar o '.'
}
/* ----------------------*/
	/* Pergunta 3 */
/* ----------------------*/
float mediaAluno(float not1,float not2,float not3){
	return ((not1*0.5)+(not2*0.3)+(not3*0.2));
}
int main(){
	float not1,not2,not3,media;
	
	printf("Digite a primeira nota:");
	scanf("%f",&not1);
	printf("Digite a segunda nota:");
	scanf("%f",&not2);
	printf("Digite a terceira nota:");
	scanf("%f",&not3);
	media = mediaAluno(not1,not2,not3);

	printf("A media das notas e:%0.2f\n",media);
	system("pause");
}
/* ----------------------*/
	/* Pergunta 4 */
/* ----------------------*/
float soma(float x, float y, char op); // Protótipo da função

int main(){
	printf("Resultado = %0.2f",soma(14,12,'+'));
}

float soma(float x, float y, char o){
	float r=0;
	switch(o){
		case '+': r = x+y;break;
		case '-': r = x-y;break;
		case '*': r = x*y;break;
		case '/': r = x/y;break;
}
	return r;
}
/* ----------------------*/
	/* Pergunta 5 */
/* ----------------------*/
int letra(char c){
	if (c>='a' && c<='z' || c>='A' && c<='Z')
		return 1;
	return 0;
}
		/* OU*/
int letra(char c){
	return (c>='a' && c<='z' || c>='A' && c<='Z');
}

/* ----------------------*/
	/* Pergunta 6 */
/* ----------------------*/
main(){
	int n, c;
	n=0;
	c=getchar(); // L^e o primeiro caracter
	while(c!= '.'){ // Enquanto não pressionar .
	if(letra(c)) // Se for letra, incrementa o contador
		n++;
	c=getchar(); // L^e o caracter seguinte
	}
	printf("%d letras\n",n); // Imprime o n ´umero de letras
}
/* ----------------------*/
	/* Pergunta 7 */
/* ----------------------*/
void imprimeCarateres(int *naA, int *nzZ, int *nB, int *nO){
	int c;
	while((c = getchar()) != '.'){
		switch(c){
		case 'a':
		case 'A': *naA = *naA + 1;break;
		case 'z':
		case 'Z': ++*nzZ;break;
		case 'B': ++*nB;break;
		default: ++*nO;
		}
	}
}

main(){
	int naA = 0, nzZ=0, nB=0, nOutros =0;
	
	imprimeCarateres(&naA,&nzZ,&nB,&nOutros);
	/* Introduza exemplo : sadsadmszzb.
		Inserir um carater por linha contabilizará o \n(ao pressionao o enter)
	*/
	printf("\n A\t Z\t B\t O\n");
	printf("\n %d\t %d\t %d \t%d\n",naA,nzZ,nB,nOutros); // Imprime o inteiro
	}
	
/* ----------------------*/
	/* Pergunta 8 */
/* ----------------------*/
#define MAX 5 //onde ocorrer MAX no código será atribuido o valor 9
void inverter(int v[]){
	int i,aux;
	for (int i=0; i < MAX/2; i++) {
		aux = v[i];// Valor da posição atual
		v[i] = v[MAX-i-1];//Ultima posição
		v[MAX-i-1] = aux;// troco com o valor da ultima posição
	}
}
int main (void){
	int numeros[MAX] = {1, 2, 3, 4, 5};
	int i, aux;
	
	for(i=0; i<MAX;i++)printf("%d ", numeros[i]);
		inverter(numeros);
		printf("\n");
	for(i=0; i<MAX;i++)printf("%d ", numeros[i]);
		printf("\n");
		system("PAUSE");
	return 0;
}
	/* OU */
	/* Neste caso visualmente inverte, no entanto fisicamente o array mantem-se
inalterado*/
	#define MAX 5
	void programa(int numeros[],int pos) {
		if(pos == MAX) return;
		programa(numeros,pos+1);
		printf("%d", numeros[pos]);
	}
	int main() {
	int numeros[MAX];
		for(int i = 0; i < MAX; i++){
		scanf("%d", &numeros[i]);
	}
	programa(numeros,0);
}

/* ----------------------*/
	/* Pergunta 9 */
/* ----------------------*/
int main(){
	int seqvalor[] = {100, 50, 20, 10, 5, 2, 1};
	int numvalores = sizeof seqvalor / sizeof *seqvalor; /* 6 */
	int valor = 0;
	int seqtroco[] = {0, 0, 0, 0, 0, 0, 0};
	
	printf("Insira o valor a pagar :");
	scanf("%d",&valor);
	
	for (int i = 0; i < numvalores; i++) {
		seqtroco[i] = valor / seqvalor[i];
		valor=valor%seqvalor[i];
		//printf("%d %d\n",seqtroco[i],valor);
	}
	
	for(int i = 0; i < numvalores; i++){
		printf("%d nota de %d\n",seqtroco[i],seqvalor[i]);
	}
}



