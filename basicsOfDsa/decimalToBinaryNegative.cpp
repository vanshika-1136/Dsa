#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the -ve number: ";
    cin>>n;
    int ans=00000000000000000000000000000000;
    int firstAns=0;
    int place=1;
    // string ans=" ";
    while(n!=0){
        int bit=n & 1;
        ans=bit*place+ans;
        place=place*10;
        n=n>>1; 
    }
}