#include<iostream>
using namespace std;

int main(){
  for (int i = 0;i<=50; i++)
  {
    /* code */
    
    if(i%2==0){
      continue;
    }
    cout<<i<<endl;

  }
  
  return 0;
}