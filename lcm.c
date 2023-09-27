#include<stdio.h>

void main(){
   int n1,n2,i=1,m1,m2;
   printf("enter first number : ");
   scanf("%d", &n1);
   printf("enter second number : ");
   scanf("%d", &n2);
   
    
   	while(i<=n2||i<=n1){
   		m1=n1*i;  
   		if(m1==m2){
   			break;
		   }
		m2=n2*i;
		   i++;
	   }
	printf("%d is LCM of %d and %d",m1,n1,n2);
	
}
