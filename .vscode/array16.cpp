#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    bool a=true;
    cout<<"enter number of array you want ";
    cin>>n;
    int arr[n][n];
    cout<<"enter elements in the array ";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n-1;i++){
            if(arr[i][i]>arr[i+1][i+1]){
                a=false;
                break;
            }
        }
    if(a){
        cout<<"the array is sorted in assending order ";
    }
    else {
        cout<<"the array is not in assending order ";
    }
}