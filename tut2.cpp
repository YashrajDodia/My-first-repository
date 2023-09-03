#include<iostream>
using namespace std;

int main(){
  int a =5;
  int* b=&a;

  // & == address of anything
  // * == value at that address

  // cout<<a<<endl; //5
  // cout<<*b<<endl; //5
  // cout<<b<<endl; //address of a
  // cout<<&a<<endl; //address of a
  // cout<<&b<<endl; //address of b
  // cout<<&(*b)<<endl; //address of a
  // cout<<*(&b)<<endl; //address of a

  // *b+=5;
  // cout<<a<<endl; //10
  // cout<<*b<<endl; //10

  int** c=&b;
  cout<<&b<<endl;
  cout<<c<<endl;
  cout<<&c<<endl;
  cout<<&(*c)<<endl;
  cout<<*(&c)<<endl;
  cout<<**c<<endl;
  return 0;
}