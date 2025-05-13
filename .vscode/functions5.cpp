#include<iostream>
using namespace std;
int sumofdigits(int n){
    int t,sum= 0;
    while(n>0){
        t=n%10;
        n=n/10;
        sum+=t;
        
    }

        
        return sum;
    }
    int main(){
        int n;
        cout<<"enter the number ";
        cin>>n;
         cout << sumofdigits(n);

        
    }

