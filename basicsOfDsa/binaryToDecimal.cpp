#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int n;
    int ans=0;
    cout<<"Enter binary digit: ";
    cin>>n;
    int i=0;
    while(n!=0){
        int digit=n%10;
        // int bit=n&1; // n=101 ko ye decimal number treat krega naki binary number
        if(digit==1){ 
            ans=ans+pow(2,i);
        }else{
            ans=ans;
        }
        n=n/10;
        // n=n>>1; //as hum bit nhi man rhe to right shift nhi krege , divide krenge kyunki decimal manenge
        i++;
    }
    cout<<ans;
}