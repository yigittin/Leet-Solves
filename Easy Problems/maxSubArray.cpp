class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      //Kadanes Algorithm
        int size=nums.size();
        int max=nums[0];
        int maxEnding=0;
        for(int i=0;i<size;i++){
            maxEnding+=nums[i];
            if(maxEnding<nums[i])
                maxEnding=nums[i];
            if(maxEnding>max)
                max=maxEnding;
        }
        
        return max;
    }
};