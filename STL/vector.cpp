//vector-> dynamic, size can be inc or dec 
//naya vector bnega naye size k then purane s values copis hogi, or purane vla dead ho jayega vector
//string to fit function can be used to reduce the size
#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>v;
    vector<int>a(5,1);//initialize with 1
    vector<int> last(a);//a k ele copy ho jayenge last namak vector m
    cout<<"print last "<<endl;
    for(int i:last){
        cout<<i<<" "<<endl;
    }
    cout<<"size->"<<v.capacity()<<endl;//0
    v.push_back(1);
    cout<<"size->"<<v.capacity()<<endl;//1
    v.push_back(2);
    cout<<"size->"<<v.capacity()<<endl;//2
    v.push_back(3);
    cout<<"size->"<<v.capacity()<<endl;//4
    cout<<"size->"<<v.size()<<endl;//3
    cout<<"element at 2nd index "<<v.at(2)<<endl;//o(1)
    //OPERATIONS ->push_back,front,back,pop_back, starter iterator use .begin()
    cout<<"before clr ,size= "<<v.size()<<endl;
    v.clear();//capacity not chnge only size will becoe zero
    cout<<"after clr ,size= "<<v.size()<<endl;
     
 }