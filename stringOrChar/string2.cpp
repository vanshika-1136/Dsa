//char array vs string with '\0'
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    char array1[7]="He\0llo";
    string s="He\0llo";
    string s2("He\0llo", 6); //TO STORE \0 IN THE STRING
    cout<<array1<<endl;
    cout<<s2.length()<<endl;
    return 0;
}
