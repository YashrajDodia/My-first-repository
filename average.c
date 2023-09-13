#include<stdio.h>

void main(){
	int a,b,c;
	printf("give number a : ");
	scanf("%d", &a);
	
	printf("give number b : ");
	scanf("%d", &b);
	
	printf("give number c : ");
	scanf("%d", &c);
	
	float d;
	d = (a+b+c)/3.0;
	printf("average of three numbers is : %f \n", d);
	printf("%d", &d);
}
