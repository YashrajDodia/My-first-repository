#include<iostream>
using namespace std;


int main(){
   int n;
   cout<<"enter a number : ";
   cin>>n;                                    // 34 56 32 54 72 3 9 8

   int arr[n];
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }

   for(int i=0; i<n-1; i++){
      for(int j=i+1; j<n; j++){
         if(arr[j]<arr[i]){
            int temp;
         temp = arr[j];
         arr[j]=arr[i];
         arr[i]=temp;
         }
      }
   }

   for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
   }

   
   return 0;
}