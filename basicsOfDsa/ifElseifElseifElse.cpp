#include<iostream>
using namespace std;
// a-z =>lowercase  , A-Z => uppercase , 0-9 =>numeric
int main(){
    char a;
    cout<<"enter a:";
    cin>>a;
    cout<< a<<endl;
    
 if(a>='0' && a<='9'){
    cout<<"numeric"<<endl;
 }
 else if(a>='a' && a<='z') //else if(a>=96 && a<=122)
 {
    cout<<"lowercase"<<endl;
 }
 else if(a>='A' && a<='Z') //else if(a>=65 && a<=90)
 {
    cout<<"uppercase"<<endl;
 }
 else{
    cout<<"invalid"<<endl;
 }
}