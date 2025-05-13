#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int i,j;
    cout<<"enter the elements ";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"primary daigonal elements are ";
    for(i=0;i<3;i++){
        cout<<arr[i][i];
        cout<<" ";
    }
    cout<<endl;
}