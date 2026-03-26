#include<iostream>
using namespace std;
long long int floorSqrt(int n)
{
    // Write your code here.
    int  ans=0;
    int s=0;
    int e=n;
    while(s<=e){
    long long int mid=s+ (e-s)/2;
    long long int sq=mid*mid;
    if(sq==n){
        return mid;
    }
    else if(sq<n){
        ans=mid;
        s=mid+1;
    }else{
        e=mid-1;
    }

    }    
    return ans;
}
double morePrecision(int n, int precision, int tempSoln){
    double factor=1;
    double ans=tempSoln;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<" ENTER THE NUMBER : ";
    cin >>n;
    int tempSoln=floorSqrt(n);
    double ans=morePrecision(n,3,tempSoln);
    cout<<ans;
    return 0;
}