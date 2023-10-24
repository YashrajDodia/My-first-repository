# include<stdio.h>

int main(){
  for (int i = -127; i <= 127; i++)
  {
    printf("%d : %c \n\n", i,i);
  }
  
  return 0;
}