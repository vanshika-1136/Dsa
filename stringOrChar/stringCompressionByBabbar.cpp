#include<iostream>
#include<vector>
#include<string>
using namespace std;
int compress(vector<int>chars){
   int i=0;
   int idx=0;
   int n =chars.size();

   while(i<n){
    int j=i+1;
    while(j<n && chars[i]==chars[j]){
        j++;
    }
    chars[idx++]=chars[i];
    int cnt=j-i;
    if(cnt>1){
        string s=to_string(cnt);
        for(char ch: s){
          chars[idx++]=ch;
        }
    }
    i=j;
   }
   return idx;
}
int main(){
    vector<int>chars={'a','b','b','c','c'};
    int n=compress(chars);
    cout<<n;
}