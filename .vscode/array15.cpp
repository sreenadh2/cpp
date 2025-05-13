#include<iostream>
using namespace std;
int main (){
    int n,i,j;
    int counte = 0;
    int counto = 0;
    cout<<"enter the number of array ";
    cin>>n;
    int arr[n][n];
    cout<<"enter the number of elements in the array ";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]%2==0){
                counte++;
            }
            else{
                counto++;
            }
        }
    }
    cout<<"even numbers in the array are "<<counte<<endl;
    cout<<"odd numbers in the array are "<<counto<<endl;
}