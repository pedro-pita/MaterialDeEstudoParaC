#include <stdio.h> //
#include <locale.h> //biblioteca de idiomas
#include <stdlib.h>//possui funções envolvendo alocação de memória, controle de processos, conversões e outras.
int main(){
	setlocale(LC_ALL,"Portuguese"); //idioma para Portugues
	//variaveis e mostrar variaveis
	int g=2;//variavel inteira
	printf("%d \n",g);//mostrar um inteiro
	
	short int si=2;//variavel inteira curta
	printf("%d \n",si);//mostrar um short int
	
	char frase[80]="Sergio";//string
	printf("%s \n",frase);//mostrar uma string
	
	float z=2.0;//variaveis reais
	printf("%f \n",z);//mostrar um float
	
	float j=73.0;//variaveis reais
	printf("%.02f \n",z);//mostrar um float com duas casas decimais
	
	system("pause");//Mete pausa no programa e espera carregar em alguma tecla
	system("cls");//limpa a tela
	system("color E4");//Mudar cor da letra e do fundo *Tabela no print chamado "tabela de cores"
	
	//receber valor de uma variavel via teclado
	int x;
	scanf("%d",&x);//é preciso referenciar o endereço com "&"
	char scan[80];
	char get[80];
	scanf("%s",scan);//arrays nao é necessario o endereço, scanf só capta uma palavra
	gets(get);//gets capta até o utilizador carregar enter, mas só funciona em strings	
	printf("%d, %s, %s", x, scan, get);
	//fflush(stdin); limpa buffer do teclado
	
	//Operadores aritméticos
	/*
	Operador	Significado
		+		Adição
		-		Subtração	
		*		Multiplicação
		/		Divisão
		%		Resto da Divisão
	*/
	//Calculos
	int n1,n2;
	printf("Introduza dois numeros\n");
	scanf("%d %d",&n1,&n2);
	printf("Numeros digitados: %d %d\n",n1,n2);
	system("pause");
	printf("%d + %d é %d\n",n1,n2,n1+n2);
	printf("%d - %d é %d\n",n1,n2,n1-n2);
	printf("%d * %d é %d\n",n1,n2,n1*n2);
	printf("%d / %d é %0.2f\n",n1,n2,(float)n1/n2);
	
	//Prioridades
	/*				Operadaor
	Maior prioridade  ^   ++ --
					  |	  * / %
	Menor prioridade  |   + -
	*/
	
	//Operadores relacionais (Return 0-False;1-True)
	/*Operador	significado
		>			maior
		<			menor
		>=			maior ou igual
		<=			menor ou igual
		==			igual
		!=			diferente
	*/
	printf("Introduza dois numeros\n");
	scanf("%d %d",&n1,&n2);
	printf("Numeros digitados: %d %d\n",n1,n2);
	system("pause");
	printf("%d < %d + 200 é %d\n", n1,n2,n1 < n2+200);//Verdadeiro =1 Falso = 0
	printf("%d < (%d + 200) é %d\n", n1, n2, n1 < (n2+200)); //Verdadeiro =1 Falso = 0
	
	//Operadores logicos
	/*				Operadaor
	Maior prioridade  ^   !
					  |	  > >= < <=
					  |	  &&
	Menor prioridade  |   ||
	*/
	printf("Introduza dois valores. \n");
	scanf("%d %d", &n1, &n2);
	printf("%d E %d é %d\n", n1,n2,(n1 > 20)&&(n2 > 10));//Verdadeiro
	printf("%d E %d é %d\n", n1, n2, n1 > 20 && n2 > 10); //Verdadeiro
	printf("%d E %d é %d\n",n1,n2,n1||n2);
	printf("Não %d é %d\n", n1,!n2);
	
	//Switch
	int i;
	printf("Introduza o valor:\n");
	scanf("%d",&i);
	
	switch(i){
		case 0: 
			printf("valor: 0\n");
			break;
			
		case 1: 
			printf("valor: 1\n");
			break;
		
		case 2: 
			printf("valor: 2\n");
			break;
			
		case 3: 
			printf("valor: 3\n");
			break;
			
		default: 
			printf("Outro Valor\n"); 
			break;
	}
	
	//estrutura do if
	int j;
	printf("Introduza o valor:\n");
	scanf("%d",&j);
	if(j == 0){
		printf("valor: 0");
	}else if(j == 1){
		printf("valor: 1");
	}else if(j == 1){
		printf("valor: 2");
	}else if(j == 1){
		printf("valor: 3");
	}else{
		printf("Outro Valor");
	}	
}	
//Type Def
/*
	Comando typedef - permite definir um "referencia"(apelido)
	para um tipo existente
	
	Sintaxe:
	typedef tipo_existente novo_nome;
*/
//Criar um apelido para os valores inteiros nativos
typedef int inteiro;

int main(){
	// iniciar as var, int e inteiro representam o mesmo tipo
	int a = 20;
	inteiro z = 20;
	z += a;
	printf("Soma= %d\n",z) ;
	
	
	/*Exemplo com struct proprias */
	// struct pessoa
	struct pessoa{
		char nomePessoa[80];
		int idade, bi;
	};
	typedef struct pessoa tpessoa;
	/* tpessoa e pessoa representam o mesmo tipo*/
	struct pessoa p;
	tpessoa p1;
	
	p.idade  = 12;0
	p1.idade = 15;
	printf("%d, %d\n",p.idade,p1.idade);
}

//Enum
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

//Estruturas numa pasta a parte

