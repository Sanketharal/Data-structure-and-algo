#include<iostream>
using namespace std;

int main(){
// in this code i written a nested if else
    int age;
    cout<<"Enter"<<endl;
    cin>>age;

    // if(age>20){
    //     cout<<"You can vote"<<endl;
    // }
    // else{
    // if(age<10){
    //     cout<<"you can not vote"<<endl;

    // else{
    //     cout<<"you are a baccha"<<endl;
    //   }
    
    // }
    
if(age>20,age<29){
    cout<<"you can vote";
}

else{
    if(age<10){
        cout<<"you cant vote";
    }
    else{
        if(age>=30,age<=110){
            cout<<"is time to leave the india";
        }
        else{cout<<"you are not a human"<<endl;
        }
    }
}
}