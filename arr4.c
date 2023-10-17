#include<stdio.h>
void main(){
	int n,i,element,k;
	printf("enter a number : ");
	scanf("%d", &n);
	printf("enter a element : ");
	scanf("%d", &element);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter arr[%d] : ",i);
		scanf("%d", &arr[i]);
		if(arr[i]==element){
			k=i;
		}
	}
	printf("element is at index : %d", k);
}
