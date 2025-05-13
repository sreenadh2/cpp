#include<iostream>
using namespace std;
char gradeofstudent(int n){
    char grade;
    if(n<=100&&n>=90){
        grade='A';
    }
    else if(n>=80){
        grade='B';
    }
    else if(n>=70){
        grade='C';
    }
    else if(n>=60){
        grade='D';
    }
    else if(n>=50){
        grade='E';
    }
    else if(n<50){
        grade='F';
    }
    return grade;
}
int main(){
    int mark;
    cout<<"ENTER YOUR MARKE ";
    cin>>mark;
    cout<<"YOUR GRADE IS "<<gradeofstudent(mark);
}