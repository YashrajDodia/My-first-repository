# include<stdio.h>

int main(){
  int n;
  printf("enter a number : ");
  scanf("%d",&n);
  for (int i = 1; i <= n-1; i++)
  {
    if(i<n-1){
    for (int j = 1; j <= n-i; j++)
    {
        printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
        printf(" *");
    }
    printf("\n");
}if(i==n-1){
 for (int k = n-1; k >= 1; k--)
{
    for (int j = 1; j <= n-k; j++)
    {
        printf(" ");
    }
    for (int j = 1; j <= k; j++)
    {
        printf(" *");
    }
    printf("\n");
    
}
}

}


  
  return 0;
}