//reverse the order of the words 
//input=["t","h","e","","e","y","e","s"]
//output=["e","y","e","s","","t","h","e"]
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

    string reverseWords(string s) {
        string res = "";
        int n = s.length();
        int e=n-1;
        
        while(e>=0){
            while(e>=0 && s[e]==' ') e--;
            int e2=e;
            if(e<0){
                break;
            }
            while(e2>=0 && s[e2]!=' '){
                e2--;
            }
            if(!res.empty()){
                res+=' ';
            }
            res+=s.substr(e2+1,e-e2);
            e=e2-1;
        }

        return res;
        
    }

int main(){
    string s="The Apple is  Awesome  ";
    string ans=reverseWords(s);
    cout<<ans;
}
