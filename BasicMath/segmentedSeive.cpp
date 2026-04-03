#include<iostream>
#include<vector>
#include <algorithm>
#include<cmath>
using namespace std;
//return vector of prime between L and R
vector<int> seiveOfEratosthenes(int n){
    vector<bool>isPrime(n+1,true);
    vector<int> primes;
    isPrime[0]=isPrime[1]=0;
    // if(n<2){
    //     return isPrime;
    // }
    for(int i=2;i*i<n;i++){
        if(isPrime[i]){
         for(int j=i*i;j<n;j+=i){
          isPrime[j]=false; 
        }
        }   
    }
    // int cnt=0;
    for(int i=0;i<n;i++){
      if(isPrime[i]) primes.push_back(i);
    }
    return primes;
}

vector<int> segmentedSeive(int L, int R){
    int limit=sqrt(R);
    vector<int>primes=seiveOfEratosthenes(limit);
    vector<bool>isPrime(R-L+1,true);
    
    for(int p:primes){      //first multiple in range
       int start= max(p * p,((L+p-1)/p)*p);

       for(int j=start;j<=R;j+=p){
        isPrime[j-L]=false;
       }
    }
    if(L==1) isPrime[0]=false;
    
    vector<int> result;
    for(int i=L;i<=R;i++){
        if(isPrime[i-L]) result.push_back(i);
    }
    return result;

}
void print(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int L=10;
    int R=30;
    vector<int>ans=segmentedSeive(L,R);
    print(ans);
    return 0;
}