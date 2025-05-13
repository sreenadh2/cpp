#include<iostream>
using namespace std;
int main(){
    int metrix[2][3];
    int tran[3][2];
    int i, j;
    cout<<"enter the elements ";
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cin>>metrix[i][j];
            tran[j][i]=metrix[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cout<<tran[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
}