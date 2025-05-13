#include<iostream>
using namespace std;
int main(){
    int row=2,coloum=3;
    int metrix[2][3]={{1,2,3},{4,5,6}};
    int trans[3][2];
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<coloum;j++){
            trans[j][i]=metrix[i][j];
        }
    }
    for(i=0;i<coloum;i++){
        for(j=0;j<row;j++){
            cout<<trans[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
}