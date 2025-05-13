#include<iostream>
using namespace std;
int main(){
    int n;
    int t=0;
    
   
    int esum=0;
    int osum=0;
    cout<<"enter a number ";
    cin>>n;
    while(n>0){
        t=n%10;
        n=n/10;
        if(t%2==0){
            esum += t;
        }
       
        else{
            osum += t;
        }
        
    }
    cout<<"SUM OF EVEN NUMBERS ARE "<<esum<<endl;
    cout<<"SUM OF ODD NUMBERS ARE "<<osum<<endl;
}
  
