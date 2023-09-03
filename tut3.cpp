#include<iostream>

using namespace std;

int main(){
  int marks[] = {23,46,69,73,75};
  int n=0;
  // while(n<=4){
  //   cout<<marks[n]<<endl;
  //   n++;
  // }

  // do
  // {
  //  cout<<marks[n]<<endl;
  //  n++;
  // } while (n<=4);

  int* p = marks;
  cout<<p<<endl;  // address of 23
  cout<<(p+1)<<endl; // 46
  cout<<(p+2)<<endl; //69
  cout<<(p+3)<<endl; //73

   cout<<&(*(p+1))<<endl;
  
  return 0;
}