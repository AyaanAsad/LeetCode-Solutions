class Solution {
public:
    string convert(string s, int numRows) {
        //PAYPALISHIRING
        string result;int colChar=0;int zigChar=0;
        if(numRows == 1){
            return s;
        }
        for(int i=0; i<numRows; i++){
            if(i==0 || i==(numRows-1)){
                colChar=i;
                while(colChar<s.length()){
                    result.push_back(s[colChar]);
                    colChar=colChar+((numRows-1)*2);
                }
            }
            else{
                colChar=i; zigChar=i;
                while(colChar<s.length()){
                    result.push_back(s[colChar]);
                    zigChar=colChar+(((numRows-1)*2)-(2*i));
                    colChar=colChar+((numRows-1)*2);
                    if(zigChar<(s.length())){
                    result.push_back(s[zigChar]);
                    }
                }
            }
        }
        return result;
    }
};