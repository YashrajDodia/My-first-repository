#include<stdio.h>

void main(){
	int n,ld,ld1,rnum=0,fd;
	printf("enter a number : ");
	scanf("%d", &n);
	ld = n%10;
	while(n>0){
		ld1=n%10;
		rnum=rnum*10+ld1;
		n=n/10;
	}
	fd=rnum%10;
	printf("the sum of first digit and lastdigit of given number is : %d", ld+fd);
}
