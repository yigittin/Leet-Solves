class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string temp=s;
        reverse(s.begin(),s.end());
        if(temp==s)
            return true;
        else
            return false;
    }
};