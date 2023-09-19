#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n,i=1,sum=0,container=0;
  cout<<"enter a number : ";
  cin>>n;
  while (container<=n){
    i=container;
    if(i%2==0){
      i=i*(-1);
    }
    sum = sum+i;
    container++;
  }
  cout<<sum<<endl;
  
  return 0;
}