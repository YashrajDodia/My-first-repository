#include<stdio.h>

void main(){
   char alpha;
   printf("enter alphabet : ");
   scanf("%c", &alpha);
   if(alpha>='A'&&alpha<='Z'){
   	printf("given alphabet is upper case");
   }
   else if(alpha>='a'&&alpha<='z'){
   	printf("given alphabet is lower case");
   }
   else{
   	printf("given character is not alphabet");
   }
}
