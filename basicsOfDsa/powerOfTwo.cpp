#include<iostream>
using namespace std;
bool PowerOfTwo(int n){
    return n>0 && (n&(n-1))==0;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    bool ans=PowerOfTwo(n);
    cout<<ans;
}