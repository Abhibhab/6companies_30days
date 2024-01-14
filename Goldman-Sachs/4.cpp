class Solution {
public:
    void helper(int ind,int k,vector<int>&sub,vector<vector<int>>&ans,int sum){
        if(ind==10){
            if(sub.size()==k){
                if(sum==0){
                    ans.push_back(sub);
                }
            }
            return;
        }
       
            sub.push_back(ind);
            helper(ind+1,k,sub,ans,sum-ind);  
        
            sub.pop_back();
        
        helper(ind+1,k,sub,ans,sum);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>sub;
        helper(1,k,sub,ans,n);
        return ans;
        
    }
};
