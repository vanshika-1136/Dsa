#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int c=a+b;
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int i=1;
        cout<<a<<" ";
        cout<<b<<" ";
        cout<<c<<" ";
        
    while(i <=n){
        a=b;
        b=c;
        c=a+b;
        cout<<c<<" ";
        i++;
    }
}