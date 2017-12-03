#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocarEx4(int *v1, int *v2){
	int aux = *v1;
	*v1 = *v2;
	*v2 = aux;
}

void somarEx5(int *v1, int v2){
	int soma = *v1 + v2;
	*v1 = soma;
}

int main(){
	/* EX1 */
	int x = 10;
	float f = 12.5;
	char c = 'd';
	int *xp;
	float *fp;
	char *cp;
	
	xp = &x;
	fp = &f;
	cp = &c;
	
	printf("A->x=%d\n",x);// 10
	printf("A->f=%.2f\n",f);// 10
	printf("A->c=%c\n",c);// 10
	*xp = 20;
	*fp = 24.45;
	*cp = 'g';
	printf("D->x=%d\n",x);// 10
	printf("D->f=%.2f\n",f);// 10
	printf("D->c=%c\n",c);// 10
	/* Ex2 */
	int x2,x3;
	printf("x2=%d  x3=%d\n",&x2,&x3);
	if(&x2 > &x3)
		printf("%d\n",&x2);
	else
		printf("%d\n",&x3);
		/* OU */
	int x2_,x3_;
	int *x2p = &x2_,*x3p=&x3_;
	printf("x2=%d  x3=%d\n",&x2_,&x3_);
	if(x2p > x3p)
		printf("%d\n",&x2_);
	else
		printf("%d\n",&x3_);	
	/* Ex3 */
	int ex3 = 13,ex3_=34;
	int *ex3p = &ex3,*ex3_p=&ex3_;
	printf("ex3=%d  ex3_=%d\n",&ex3,&ex3_);
	if(ex3p > ex3_p)
		printf("%d\n",*ex3p);
	else
		printf("%d\n",*ex3_p);
	/* Ex4 */
	int ex4 ,ex4_;
	int *ex4p= &ex4,*ex4p_ = &ex4_;
	scanf("%d %d",ex4p,ex4p_);
	printf("A->%d %d\n",*ex4p,*ex4p_);
	trocarEx4(ex4p,ex4p_);
	printf("D->%d %d\n",*ex4p,*ex4p_);
	
	/* Ex5 */
	int ex5 ,ex5_;
	int *ex5p= &ex5,*ex5p_ = &ex5_;
	scanf("%d %d",ex5p,ex5p_);
	printf("A->%d %d\n",*ex5p,*ex5p_);
	somarEx5(ex5p,*ex5p_);
	printf("D->%d %d\n",*ex5p,*ex5p_);
	/* OU */
	somarEx5(ex5p,ex5_);
	printf("D->%d %d\n",*ex5p,ex5_);
}







