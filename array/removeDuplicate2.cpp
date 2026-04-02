#include<iostream>
#include<vector>
using namespace std;
//remove duplicate from sorted array s.t only 2 samre ele is alloud
int remove(vector<int>& nums){
    int write=0;
    int cnt=0;
    int n=nums.size();
    
    for(int i=0;i<n;i++){
        if(i==0 || nums[i-1]!=nums[i]){
        cnt=1;
        }else{
           cnt++; 
        }

        if(cnt<=2){
          nums[write]=nums[i];
          write++;
        }
    }
    return write;

}
int main(){
   vector<int>nums={1,2,2,3,4,4,4,5,6,6,6};
    int newSize = remove(nums);
   for(int i=0;i<newSize;i++){
      cout<<nums[i]<<" ";
   }
   
}