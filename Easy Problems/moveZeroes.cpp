class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int m=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
               nums[m++]=nums[i];
            }            
        }
        for(int i=m;i<n;i++){
            nums[i]=0;
        }
        
    }
};