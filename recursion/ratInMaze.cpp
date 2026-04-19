#include<iostream>
#include<vector>
using namespace std;
void recurse(int r, int c,vector<vector<int>>& maze,vector<vector<bool>>&visited,string path,vector<string>&ans)
{
    int n=maze.size();
if(r<0 ||c<0 || r>n-1 || c>n-1 || maze[r][c]==0 || visited[r][c]==true){
  return;
}
if(r==n-1 && c==n-1){
    ans.push_back(path);
    return;
}
visited[r][c]=true;
recurse(r+1,c,maze,visited,path+'D',ans);
recurse(r,c-1,maze,visited,path+'L',ans);
recurse(r,c+1,maze,visited,path+'R',ans);
recurse(r-1,c,maze,visited,path+'U',ans);
visited[r][c]=false;
}
    vector<string> ratInMaze(vector<vector<int>>& maze){
    vector<string>ans;
    string path="";
    int n=maze.size();
    if(maze[0][0]==0 || maze[n-1][n-1]==0){
        return ans;
    }
    vector<vector<bool>>visited(n,vector<bool>(n,false));
    recurse(0,0,maze,visited,path,ans);
  return ans;
}
void print(vector<string>ans){
    for(string s : ans) {
    cout << s << endl;
}
}
int main(){
    vector<vector<int>>maze={{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string>ans=ratInMaze(maze);
    print(ans);
}