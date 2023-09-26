#include<stdio.h>

void main(){
	int n,sum=0,i;
	printf("enter a number : ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			sum = sum + (-1)*i;
		}else{
		
         sum = sum +i;		
	    }
		
	}
	printf("%d", sum);
	
}
