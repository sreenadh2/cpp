#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool a=true;
    cout<<"enter number of array you want ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
       if(arr[i]>arr[i+1]){
        a=false;
        break;
       }
    }
    if(a){
        cout<<"the array is in assending order ";
    }
    else{
        cout<<"the array is not in assending order ";
    }
}