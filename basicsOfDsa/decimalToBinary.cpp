#include<iostream>
// #include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int firstAns=0;
    int place=1;
    // string ans=" ";
    while(n!=0){
        int bit=n & 1;
        ans=bit*place+ans;
        place=place*10;
        n=n>>1; 
    }

    cout<<"Ans: "<<ans<<endl;
}