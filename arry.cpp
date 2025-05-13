#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements in the array";
    cin>>n;
    int arry[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arry[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
     sum+=arry[i];
    }
        cout<<"sum="<<sum;
    
    

}