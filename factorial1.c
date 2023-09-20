#include<stdio.h>

void main(){
	int n,fact=1,i=1;
	printf("enter value of n : ");
	scanf("%d", &n);
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("factorial of a given number is : %d", fact);
}
