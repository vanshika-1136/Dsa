// Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

// The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

// Return the quotient after dividing dividend by divisor.

// Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231, 231 − 1]. For this problem, if the quotient is strictly greater than 231 - 1, then return 231 - 1, and if the quotient is strictly less than -231, then return -231.
#include<iostream>
#include<climits>
#include <cmath>
using namespace std;
int divide(int dividened,int divisor){
    if(dividened==INT_MIN && divisor==-1){
        return INT_MAX;
    }
    bool negative=(dividened<0)^(divisor<0);
    long long dvd=llabs((long long)dividened);
    long long dsr=llabs((long long)divisor);
    long long ans=0;
    while(dvd>=dsr){
    long long temp=dsr;
    long long multiple=1;
    
    while(dvd>=temp<<1){
        temp<<=1;
        multiple<<=1;
    }
    dvd-=temp;
    ans+=multiple;
    }
    if(negative) ans=-ans;

    return (int)ans;
}
int main(){
   int ans=divide(15,3);
   cout<<ans;
   return 0;
}