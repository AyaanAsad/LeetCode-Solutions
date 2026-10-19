class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<end){
            char sch=s[start];
            char ech=s[end];
            sch=tolower(static_cast<unsigned char>(sch));
            ech=tolower(static_cast<unsigned char>(ech));
            if(sch==ech){
                start++;
                end--;
            }else if(!isalnum(static_cast<unsigned char>(sch))){
                start++;
            }else if(!isalnum(static_cast<unsigned char>(ech))){
                end--;
            }else{
                return false;
            }
        }
        return true;
    }
};