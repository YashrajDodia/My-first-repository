# include<stdio.h>

int main(){
  int n,temp,k=1;
  printf("enter a number : ");
  scanf("%d", &n);
  int arr[n];
 
  for (int i = 0; i < n; i++)
  {
    printf("enter arr[%d] : ",i);
    scanf("%d",&arr[i]);
  }for (int i = 0; i < n/2; i++)
  {
   temp=arr[i];
   arr[i]=arr[n-k];
   arr[n-k]=temp;
   k++; 
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ",arr[i]);
  }
  
 
  return 0;
}