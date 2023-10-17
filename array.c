#include<stdio.h>
void main(){
	int i,j,n1;
	printf("enter a number : ");
	scanf("%d",&n1);
	
	int arr[n1],arra[n1];
	for(i=0;i<n1;i++){
		printf("enter arr[%d] : ",i);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n1;i++){
		arra[i]=arr[i];
	}for(i=0;i<n1;i++){
		printf("arra[%d] : %d \n",i, arra[i]);
	}
	
}
