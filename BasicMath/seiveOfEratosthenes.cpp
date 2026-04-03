//count prime number less thn n
#include<iostream>
#include<vector>
using namespace std;
int seiveOfEratosthesis(int n){
    vector<bool>isPrime(n,true);
    isPrime[0]=isPrime[1]=0;
    if(n<2){
        return 0;
    }
    for(int i=2;i*i<n;i++){
        if(isPrime[i]){
         for(int j=i*i;j<n;j+=i){
          isPrime[j]=false; 
        }
        }   
    }
    int cnt=0;
    for(int i=0;i<n;i++){
      if(isPrime[i]) cnt++;
    }
    return cnt;
}

int main(){
    int n =20;
    int ans=seiveOfEratosthesis(n);
    cout<<ans<<endl;
}