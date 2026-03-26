// reverse a words in a sentence with respect to white space
#include<iostream>
#include<string>
using namespace std;

int main(){
   string s="hi my name is vanshika";
   int st=0;
   
   for(int i=0;i<s.length();i++){
    if(i==s.length()-1 || s[i]==' '){
      int e=i-1;

    while(st<e){
     swap(s[st],s[e]);
     st++;
     e--;
    }
    st=i+1;
    }
   }
  cout<<s;
  return 0; 
}