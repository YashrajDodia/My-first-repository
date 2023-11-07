#include<stdio.h>

int factorial(int);

int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int ans = factorial(n);
	printf("%d",ans);
	return 0;
}

int factorial(int n){
	if(n==0){
		return  1;
	}
		return n*factorial(n-1);
	
}
