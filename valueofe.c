#include<stdio.h>

void main(){
	float n,i,j,e=1;
	float fact=1;
	printf("Enter a number : ");
	scanf("%f", &n);
	for(i=1;i<=n;i++){     
		for(j=1;j<=i;j++){
			fact=fact*j;
		}
		e = e + (1/fact);
		fact=1; 
	}
	printf("%f", e);
}
