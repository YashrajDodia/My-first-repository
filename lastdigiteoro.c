#include<stdio.h>

void main(){
	int n,lastdigit;
	printf("enter a number: ");
	scanf("%d", &n);
	lastdigit=n%10;
	lastdigit%2==0?printf("lastdigit is even"):printf("lastdigit is odd");
}
