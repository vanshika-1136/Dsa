#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int>& arr,vector<int>&output,vector<vector<int>>&ans,int index){
    if(index>=arr.size()){
        ans.push_back(output);
        return ;
    }
    subset(arr,output,ans,index+1);
    output.push_back(arr[index]);
    subset(arr,output,ans,index+1);
    output.pop_back();
}
void print(vector<vector<int>>ans){
    for(int i=0;i<ans.size();i++){
        cout<<"{ ";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"} ";
        cout<<endl;
    }
}
int main(){
   vector<int>arr={1,2,3};
   vector<int>output;
   vector<vector<int>>ans;
   subset(arr,output,ans,0);
   print(ans);
   return 0;
}