#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ans;
    vector<vector<int>>matrix={
        {1,2,3},{4,5,6},{7,8,9}
    };
    int row=matrix.size();
    int col=matrix[0].size();
    int total=row*col;
    int cnt=0;
    int sRow=0;
    int sCol=0;
    int eCol=col-1;
    int eRow=row-1;
    while(cnt<total){
         for(int i=sCol;i<=eCol && cnt<total;i++){
            ans.push_back(matrix[sRow][i]);
            cnt++;
         }
         sRow++;

         for(int i=sRow;i<=eRow && cnt<total;i++){
            ans.push_back(matrix[i][eCol]);
            cnt++;
         }
         eCol--;
         
         for(int i=eCol;i>=sCol && cnt<total;i--){
           ans.push_back(matrix[eRow][i]);
           cnt++;
         }
         eRow--;

         for(int i=eRow;i>=sRow && cnt<total;i--){
            ans.push_back(matrix[i][sCol]);
            cnt++;
         }
         sCol++;
    }
    for(int i=0;i<total;i++){
        cout<<ans[i]<<" ";
    }
}