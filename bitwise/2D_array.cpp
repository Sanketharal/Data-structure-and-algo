#include<bits/stdc++.h>
using namespace std;
int main(){
// code for adding 2 dimensional array 
    int A[2][3]={{2,3,5},{6,7,4}};
    int B[2][3]={{4,7,8},{2,8,4}};
    int C[2][3];

    for(int i=0;i<2;i++){

        for(int j=0;j<3;j++){

            C[i][j]=A[i][j]+B[i][j];
        }   
    }
    for(int i=0;i<2;i++){

        for (int j=0;j<3;j++){

            cout<<C[i][j]<<"  ";
            
        }
        cout<<endl;
    }
}