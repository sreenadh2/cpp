#include<iostream>
using namespace std;
int main(){
    int num;
    int lar=0;
    int temp=0;
    cout<<"enter a number ";
    cin>>num;
    while(num>0){
        temp=num%10;
        num=num/10;
        if(temp>lar){
            lar=temp;
        }
    }
    cout<<"the largest is "<<lar;
}