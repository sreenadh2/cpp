#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the number of array you want ";
    cin>>n;
    int arr[n][n];
    cout<<"enter the elements ";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i][n-1-i];
        cout<<" ";
    }
}