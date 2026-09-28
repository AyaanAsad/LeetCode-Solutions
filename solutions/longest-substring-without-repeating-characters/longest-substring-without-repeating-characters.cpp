class Solution {
public:
    bool checked(vector<char>& check, char ch){
        for(int i=0;i<check.size(); i++){
            if(ch == check[i]){
                return false;
            }
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        
        int max = 0;
        vector<char> check;
        for(int i=0; i<s.length(); i++){
            char ch = s.at(i);
            if(checked(check,ch)){
                check.push_back(ch);
                if(check.size()>=max){
                    max=check.size();
                }
            }
            else{
                int i = 0;
                    while(check[i] != ch) {
                        i++;
                    }
                check.erase(check.begin(), check.begin() + i + 1);
                check.push_back(ch);
                if(max<=check.size()){
                    max = check.size();
                }
            }
        }
        return max;
    }
};