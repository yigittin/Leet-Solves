class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size=strs.size();
        string prefix = strs[0];        
        for(int i=0;i<size;i++){
            for(int j=0;j<prefix.length();j++){
                if(strs[i][j] != prefix[j])
                    prefix.erase(j);                
            }
        }
        return prefix;
    }
};