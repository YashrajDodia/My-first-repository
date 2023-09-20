#include<stdio.h>

void main(){
	int n,i,sum=0,b=1;
	printf("enter a number : ");
	scanf("%d", &n);
	while(b<=n){
		i=b;
	  if(i%2==0){
	  	i=i*(-1);
	  }
	  sum=sum+i;
	  b++;	
	}
	printf("the sum is : %d", sum);
}
