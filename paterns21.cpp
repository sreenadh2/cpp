#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        char ch='A'-1;
        int num=0;
        for(int j=1;j<=8;j++){
            if(j>=5-i&&j<=4+i){
                if(j<=4){
                    ch++;
                    cout<<ch;
                }
                else{
                    num++;
                cout<<num;
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}