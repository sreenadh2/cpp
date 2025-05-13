#include<iostream>
using namespace std;
int main(){
    char valu;
    cout<<"enter a charactor ";
    cin>>valu;
    if(valu=='a'||valu=='e'||valu=='i'||valu=='o'||valu=='u'||
      valu=='A'||valu=='E'||valu=='I'||valu=='O'||valu=='U') {
        cout<<"entered value is a vowel";
    }
    else if((valu>='a'&&valu<='z')||(valu>='A'&&valu<='Z')){
        cout<<"the value is consonent ";
    }
    else if(valu>='0'&&valu<='9'){
        cout<<"value is digit ";
    }
    else{
        cout<<"value is a special charator ";
    }
}