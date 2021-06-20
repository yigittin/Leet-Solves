class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {        
      int in=digits.size()-1;
      while(in>=0){
          if(digits[in]==9)
              digits[in]=0;
          else{
              digits[in]+=1;
              return digits;
          }
          in--;
      }
        digits.insert(digits.begin(),1);
        return digits;
    }
};