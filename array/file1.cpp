#include<iostream>
using namespace std;

int main(){

    int arr[10];
    
      for(int i=0;i<10;i++){
           cout<<"Enter the value of "<<i<<" is:";
           cin>>arr[i];
        }
        cout<<"arry printing before double: ";
        for(int i=0;i<10;i++){
            
            cout<<arr[i]<<" ";
        }
        cout<<endl;


      cout<<"array printing after double: ";

        for(int i=0;i<10;i++){
            arr[i]=arr[i]*2;
            cout<<arr[i]<<" ";
        }


        
        
    
}