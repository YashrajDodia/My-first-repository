#include<stdio.h>

void main(){
	int n;
	printf("enter a number : ");
	scanf("%d", &n);
	if(n<=12){
		switch(n){
			case 1: printf("month has 31 days");
				     break;
			case 3: printf("month has 31 days");
				     break;
			case 5: printf("month has 31 days");
				     break;
			case 7:
				    printf("month has 31 days");
				     break;
			case 8:
				    printf("month has 31 days");
				     break;
			case 10:printf("month has 31 days");
				     break;
			case 12:
				printf("month has 31 days");
				     break;
			case 4:printf("month has 30 days");
				      break;
			case 6:printf("month has 30 days");
				      break;
			case 9:printf("month has 30 days");
				      break;
			case 11:printf("month has 30 days");
				      break;
				
			default:
				printf("month has 28 days");
				      break;
		}
	}else{
		printf("enter valid day");
	}
}
