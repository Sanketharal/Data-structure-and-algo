#include<iostream>
using namespace std;

void countzeroone(int arr[],int size){
    int one =0;
    int zero=0;
for(int i=0;i<size;i++){
    if(arr[i]==1){
        one++;
    }
    if(arr[i]==0){
        zero++;
    }
}
cout<<"zero is :"<<zero;
cout<<endl;
cout<<"one is :"<<one;
}

int main()
{
    
int arr[]={1,1,1,0,0,0,1,1,0,0,1,0,1,0,1};
int size=15;
void countzeroone(int arr[],int size);

}