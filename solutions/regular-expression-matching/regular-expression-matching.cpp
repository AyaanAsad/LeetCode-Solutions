// class Solution {
// public:
//     bool isMatch(string s, string p) {
//         if(s==".*" || p==".*"){
//             return true;
//         }
//         // string str1=s;
//         // string str2=p;
//         int i=0; int j=0;
//         while(i<s.length() && j<p.length()){
//             if (j + 1 < p.length() && p[j + 1] == '*') {
//                 if (s[i] == p[j] || p[j] == '.') {
//                 i++;
//             } else {
//                 j += 2;
//             }
//         }
// else if (s[i] == p[j] || p[j] == '.' ) {
//     i++;
//     j++;
// }
//             else if(s[i]=='*'){
//                 while(s[i-1]==p[j] && (j+1)<p.length()){
//                     j++;
//                 }
//                 if(s[i-1]==p[j]){
//                     j++;
//                     i++;
//                 }else{
//                     i++;
//                 }
//             }
//             else if(p[j]=='*'){
//                 while(p[j-1]==s[i] && (i+1)<s.length()){
//                     i++;
//                 }
//                 if(p[j-1]==s[i]){
//                     i++;
//                     j++;
//                 }else{
//                     j++;
//                 }
//             }
//             else{
//                 if(s[i+1]=='*'){
//                     i++;
//                 }
//                 if(p[j+1]=='*'){
//                     j++;
//                 }
//                 else{
//                     return false;
//                 }
//             }
            
//         }
//         if(i!=s.length() || j!=p.length()){
//             return false;
//         }
//         return true;
//     }
// };
class Solution {
public:
    int dp[21][21];

    bool solve(int i, int j, string& s, string& p) {
        if (dp[i][j] != -1){
            return dp[i][j];
        }
        if (j == p.length()){
            return dp[i][j] = (i == s.length());
        }
        bool firstMatch = (i < s.length() && (s[i] == p[j] || p[j] == '.'));
        bool ans;

        if (j + 1 < p.length() && p[j + 1] == '*') {
            ans = solve(i, j + 2, s, p) || (firstMatch && solve(i + 1, j, s, p));
        } else {
            ans = firstMatch && solve(i + 1, j + 1, s, p);
        }

        return dp[i][j] = ans;
    }

    bool isMatch(string s, string p) {
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, s, p);
    }
};