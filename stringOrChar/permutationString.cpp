#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool permutationString(string s1, string s2){
    vector<int>freq1(26,0);
    vector<int>freq2(26,0);
    for(int i=0;i<s2.size();i++){
        freq1[s1[i]-'a']++;
        freq2[s2[i]-'a']++;
    }
    int matches=0;
    for(int i=0;i<26;i++){
        if(freq1[i]==freq2[i]) matches++;
    }
    int k=s2.size();
    for(int i=k;i<s1.size();i++){
        if(matches==26){
            return true;
        }
        int indexIn=s1[i]-'a';
        int indexOut=s1[i-k]-'a';
        freq1[indexIn]++;
        if(freq1[indexIn]==freq2[indexIn]){
            matches++;
        }else if(freq1[indexIn]==freq2[indexIn]+1){
            matches--;
        }
        freq1[indexOut]--;
        if(freq1[indexOut]==freq2[indexOut]){
            matches++;
        }else if(freq1[indexOut]==freq2[indexOut]-1){
            matches--;
        }
    }
    return matches==26;
}

int main(){
    string s1 ="abcdef";
    string s2="gc";
    
    if(permutationString(s1,s2)){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}