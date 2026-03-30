//transpose and reverse rows
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void print(vector<vector<int>>& matrix){
    int n =matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
void rotate(vector<vector<int>>& matrix){
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j = i; j < n; j++){
            swap(matrix[i][j],matrix[j][i]);
    }   
}
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main(){
    vector<vector<int>> ans={{1,2,3},{4,5,6},{7,8,9}};
    rotate(ans);
    print(ans);
}