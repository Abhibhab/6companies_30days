#include <vector>

class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
       int n=nums.size();
        vector<vector<int>>vec;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                vector<int>temp;
                for(int hi=0;hi<n;hi++){
                    if(hi<i || hi>j){
                        temp.push_back(nums[hi]);
                    }
                }
//                 for(int k=i;k<=j;k++){
//                     temp.push_back(nums[k]);
                    
                // }     
                 vec.push_back(temp);
            }
           
        }
        // vec.push_back({});
     
        // return vec.size();
        int ans=0;
        for(auto it:vec){
            if(it.size()==1 || it.size()==0){
                ans++;
                // continue;
            }else{
                bool helo=true;
            for(int i=1;i<it.size();i++){
                if(it[i]<=it[i-1]){
                 helo=false;
                 break;
                }
                                
            }
            if(helo)ans++;
            }
        }
        return ans;
        
    }
};
