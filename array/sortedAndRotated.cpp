#include<iostream>
#include<vector>
using namespace std;

    bool check(vector<int>& nums) {
        int n=nums.size();

        int i=0;
        int temp=nums[0];
            while(nums[i]<=nums[i+1] && i<n-1){
                i++;
            }
            if(i==n-1){
                return false;
            }
            int k=i+1;
            while(nums[k]<=nums[k+1] && k<n-1){
                k++;
            }
            if(k==n-1 && temp>=nums[k]){
                return true;
            }
            // else{
            //     return false;
            // }
        return false;
       
    }

    int main(){
    vector<int>nums={2,1,3,4};
    bool ans=check(nums);
    cout<<ans;
    return 0;

    }