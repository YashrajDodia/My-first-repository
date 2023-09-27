#include<stdio.h>

void main(){
	int x,y,count=1,power=1;
	printf("enter value of x : ");
	scanf("%d", &x);
	printf("enter value of y : ");
	scanf("%d", &y);
    while(count<=y){
    	power=power*x;
    	count++;
	}
	printf("%d", power);	
}
