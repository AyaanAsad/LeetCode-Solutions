class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> str_map;
        vector<vector<string>> result;
        // if(strs.size()==1){
        //     result.push_back({strs[0]});
        //     return result;
        // }
        for(int i=0;i<strs.size();i++){
            string sorted_str=strs[i];
            sort(sorted_str.begin(),sorted_str.end());
            str_map[sorted_str].push_back(strs[i]);
        }
        for(auto &pair : str_map){
            result.push_back(pair.second);
        }
        return result;
    }
};