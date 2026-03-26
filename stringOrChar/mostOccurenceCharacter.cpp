//krna h abhi
// using vector maximum lexographical character return
#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s="hello";
    vector<int>count(26,0);
    vector<bool>visited(s.size(),false);
    for(auto i:visited){
        if(visited[i]==true){
            count[s[i]-'a']++;
        }else{
            visited[i]=true;

        }
    }
     int maxFreq=-1;
     char ans;
    for(int i=0;i<26;i++){
        if(count[i]>maxFreq){
            maxFreq=count[i];
            ans=i+'a';
        }
    }
    cout<< ans;
    return 0;
}
