#include<iostream>
#include<deque>
using namespace std;

int main(){
 deque<int> d;
      d.push_back(2);
      d.push_front(1);
      d.push_back(3);
      d.push_back(4);
      d.push_back(5);
      d.push_back(6);
      d.pop_front();
      d.pop_back();
    //   cout<<"Print first index element->" <<d.at(0)<<endl;
        cout<<"print deque "<<endl;
        for(int i:d){
        cout<<i<<" "<<endl;
        }

        cout<<"Empty or not "<<d.empty()<<endl; // 1-> EMPTY , 0-> NOT EMPTY
        cout<<"front: "<<d.front()<<endl;
        cout<<"back: "<<d.back()<<endl;
        d.erase(d.end()-1,d.end());// last element remove kro
        d.erase(d.begin(),d.begin()+1); //first element remove kro
                cout<<"print deque "<<endl;
        for(int i:d){
        cout<<i<<" "<<endl;
        }
}