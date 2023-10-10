#include<stdio.h>

void main(){
    int n,i,j;
    printf("Enter a number : ");
    scanf("%d", &n);
    int arr[n],temp;
    for(i=0;i<n;i++){
    	printf("enter arr[%d] : ", i);
    	scanf("%d", &arr[i]);
    	
	}
	 temp=arr[0];
	 
	for(j=n-1;j>=0;j--){
		if(temp<arr[j]){
			temp=arr[j];
		}
	}
	printf("max number in array is : %d", temp);
}
