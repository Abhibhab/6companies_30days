class Solution {
public:
void backtrack(string dig,vector<string>&vec,string &sub,map<int,string>&mp){
    if(dig.size()==0){
        if(sub.size()){
        vec.push_back(sub);
        }
        return;
    }
    string str=mp[dig[0]-'0'];
    for(auto it:str){
        sub+=it;
        backtrack(dig.substr(1),vec,sub,mp);
        sub.pop_back();
    }

    
}
    vector<string> letterCombinations(string digits) {
        map<int,string>mp;
         mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] ="jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        vector<string>ans;
        string sub="";
        backtrack(digits,ans,sub,mp);
        return ans;
 
    }
};
