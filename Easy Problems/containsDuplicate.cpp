class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool b=false;
        int n=nums.size();
        sort(nums.begin(),nums.begin()+n);
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                b=true;
                return b;
            }
        }
        return b;
    }
};