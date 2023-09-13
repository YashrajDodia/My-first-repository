#include<stdio.h>

void main(){
	float a,b;
	int choice;
	printf("enter a : ");
	scanf("%f", &a);
	printf("enter b : ");
	scanf("%f", &b);
	printf("enter choice : ");
	scanf("%d", &choice);
	switch(choice){
		case 1 : printf("sum of two numbers is : %f", a+b);
		         break;
		case 2 : printf("difference of two numbers is : %f", a-b);
		         break;
		case 3 : printf("product of two numbers is : %f", a*b);
		         break;
		case 4 : printf("divison of two numbers is : %f", a/b);
		         break;
		default : printf("enter valid choice");
		           break;
	}
}
