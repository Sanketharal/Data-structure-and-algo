#include<iostream>
using namespace std;
// this is a wrong code because code find a factorial correct but formating of code is wrong
void factorial(int n){
    int mul=1;
    for(int i=n;i>=1;i=i-1){

       

        mul=i*mul;

        
    }
    cout<<"the factorial of "<<n<<" is :"<<mul<<endl;
}

int main(){
    factorial(5);
}