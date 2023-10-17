#include<stdio.h>
void main(){
	int n,i,j,count=1,flag=1;
	printf("Enter a number : ");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter arr[%d] : ",i);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i+=count){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				flag=0;
				break;
			}
		}
		j=i+1;
		count=1;
		while(arr[i]==arr[j]){
			count++;
			j++;
		}if(count<3){
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("1");
	}else{
		printf("0");
	}
}
