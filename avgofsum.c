#include<stdio.h>

void main(){
	int n=1,sum=0,i,count=0,avg;
	
	while(n!=0){
		scanf("%d", &n);
		sum = sum +n;
		count++;
	}
	avg=sum/(count-1);
	printf("%d \n", avg);
	printf("%d \n", sum);
	
}
