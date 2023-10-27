#include<iostream>
using namespace std;

int main()
{
    int score;
    cin>>score;

    if(score>=90)
    {
        cout<<"grade A"<<endl;
    }
    else if(score>=80)
    {
        cout<<"grade B"<<endl;
     }
    else if(score>=70)
     {
        cout<<"grade C"<<endl;
     }
     else{
        cout<<"you are fail in exam"<<endl;
     }

}    