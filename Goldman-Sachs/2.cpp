class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
            map<string,vector<string>>mp;
            for(auto it:access_times){
                mp[it[0]].push_back(it[1]);

            }
            // for(auto it:mp){
            // sort(it.second.begin(),it.second.end());
            // }
            vector<string>ans;
            for(auto it:mp){
                if(it.second.size()>=3){
                for(int i=0;i<it.second.size()-2;i++){
                    sort(it.second.begin(),it.second.end());
                    int first=stoi(it.second[i]);
                    // int second=stoi(it.second[i+1]);
                    int third=stoi(it.second[i+2]);
                    // int dif1=second-first;
                    int dif2=third-first;
                    if( dif2<100){
                        ans.push_back(it.first);
                        break;
                    }                                                      
                }
                }else{
                    continue;
                }
            }
            return ans;

    }
};
