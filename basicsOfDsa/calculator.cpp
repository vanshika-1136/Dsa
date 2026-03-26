#include<iostream>
using namespace std;
int main(){
    int a, b; 
    cout<<"Enter the operands a and b : ";
    cin>>a>>b;
    char ch;
    cout<<"Enter the operator (+,-,*,/): ";
    cin>> ch;

    switch (ch){
        case '*':{cout<<a*b;
        break;}
        case '+':cout<<a+b;
        break;
        case '-':cout<<a-b;
        break;
        case '/':cout<<a/b;
        break;
        default : cout<<"Please enter valid arguments";
    }
  return 0;
}