#include<stdio.h>

void main(){
    int n,sum=0,i;
	printf("enter a number : ");
	scanf("%d", &n);
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==n){
		printf("%d is a perfect number", n);
	}else{
		printf("%d is not a perfect number", n);
	}	
}
