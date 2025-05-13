#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of array you want ";
    cin>>n;
    int arr[n];
    cout<<"enter number of elements in an array ";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int b;
    cout<<"enter the number you want to count ";
    cin>>b;
    int count=0;
    for(int j=0;j<n;j++){
        if(arr[j]==b){
            count++;
        }
        
    }
    cout<<"number of "<<b<<" in the array are   "<<count;
}