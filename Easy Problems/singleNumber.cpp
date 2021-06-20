class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();       
        sort(nums.begin(),nums.begin()+n);
        if(n==1){
            return nums[0];
        }
        for(int i=0;i<n;i=i+2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
       return 0;
    }
};