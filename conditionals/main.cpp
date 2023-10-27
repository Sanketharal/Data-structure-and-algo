#include<iostream>
using namespace std;

int main()
{
int age;
cout<<"Enter your age"<<endl;
cin>>age;

if(age>20)
{
    cout<<"you can vote"<<endl;
}
else if(age<10){
    cout<<"You can not vote"<<endl;
}
else{
    cout<<"you are not a human";
}

}
