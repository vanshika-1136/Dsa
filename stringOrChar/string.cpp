#include<iostream>
#include<cstring>
using namespace std;

int getLenth(char name[]){
    int i=0;
    int cnt=0;
    while(name[i]!='\0'){
        i++;
        cnt++;
    }
    return cnt;
}
char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
int main(){
    char ch[]="hello";
    // cin>> ch;
    // cout<<ch;
    reverse(ch,strlen(ch));
    for(int i=0;i<strlen(ch);i++){
       cout<<ch[i];
    }
    cout<<" character is "<<toLowerCase('@')<<endl;
    return 0;
}