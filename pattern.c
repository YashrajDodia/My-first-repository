#include<stdio.h>

void main(){
	int i,j,n;
	char alpha = 'A';
	printf("enter a number : ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}if(i%2==0){
			for(j=1;j<=i;j++){
				printf(" %c", alpha);
				alpha++;
			}
		}else{
		
		for(j=1;j<=i;j++){
			printf(" %d", j);
		}
	 }
		printf("\n");
	}
}
