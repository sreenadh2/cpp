#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        char ch='A'-1;
        for(int j=1;j<=7;j++){
            if(j>=5-i&&j<=3+i){
                j<=4 ? ch++: ch--;
                cout<<ch;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}