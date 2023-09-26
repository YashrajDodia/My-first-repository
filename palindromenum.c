#include<stdio.h>

void main(){
	int n,box,rnum=0,ld;
	printf("enter a number : ");
	scanf("%d", &n);
	box=n;
	while(n>0){
		ld=n%10;
		rnum=rnum*10 + ld;
		n=n/10;
	}
	if(rnum==box){
		printf("%d is a palindrome number", box);
	}else{
		printf("%d is not a palindrome number", box);
	}
}
