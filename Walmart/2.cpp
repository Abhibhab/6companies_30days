class Solution {
public:

    vector<int> maxSubsequence(vector<int>& nums, int k) {
    unordered_map<int,int>mp;
    vector<int>vec=nums;
    sort(vec.begin(),vec.end());
    for(int i=nums.size()-1, j=0;i>=0 and j<k;i--,j++){
        mp[vec[i]]++;
    }
    vector<int>ans;
    for(auto it:nums){
        if(mp.count(it)!=0){
            ans.push_back(it);
            mp[it]--;
            if(mp[it]==0){
                mp.erase(it);
            }

        }
    }
    return ans;

        
    }
};
