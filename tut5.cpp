#include<iostream>
using namespace std;

typedef struct employee
  {
    /* data */
    int emailid;
    char bloodgroup;
    float salary;
  }ep;// ep ka matlab hai jisko mai pehle struct employee bolta tha usko ab mai ep bolta hu zyada koi farak nahi padta typedef likhne se

int main(){
  ep Yashraj;
  Yashraj.emailid = 123;
  Yashraj.bloodgroup = 'b';
  Yashraj.salary = 120000000;


  cout<<"email id is : "<<Yashraj.emailid<<endl;
  cout<<"blood group is : "<<Yashraj.bloodgroup<<endl;
  cout<<"salary is : "<<Yashraj.salary<<endl;
  
  return 0;
}