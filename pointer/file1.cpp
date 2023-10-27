#include <iostream>
using namespace std;

void solve(int* &p){
    p=p+1;
    
}

int main(){

    int a=5;

    int *p=&a;

    cout<<"value store in p pointer  :"<<p<<endl;
    cout<<"address of p  :"<<&p<<endl;
    cout<<*p;

    cout<<endl;


    solve(p);

     cout<<"value store in p pointer  :"<<p<<endl;
    cout<<"address of p  :"<<&p<<endl;
    cout<<*p;

}