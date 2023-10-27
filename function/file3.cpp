#include<iostream>
using namespace std;

//in this code i used function concept for finding max num from 3 numbers

void maxnum(int a,int b,int c)
{
    if(a>b && a>c){
        cout<<"A max "<<a<<endl;

    }
    else{

        if(b>a && b>c){
            cout<<"B max "<<b<<endl;
        }
        else{
            cout<<"C max "<<c<<endl;
        }
    }
}

int main(){

    maxnum(12,10,15);
    maxnum(12,121,15);
    maxnum(12,10,1635);
    maxnum(1234,10,15);
    maxnum(12,1065,15);



}