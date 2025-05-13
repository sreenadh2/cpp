#include<iostream>
using namespace std;
int main(){
    char x;
  cout<<"enter the colour ";
  cin>> x;

  switch (x){
    case 'r':
    cout<<"stop";
    break;
    case 'y':
    cout<<"slow dwon";
    break;
    case 'g':
    cout<<"go";
    break;
    default:
    cout<<"invalid input";
  }  
  
}