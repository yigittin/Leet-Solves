class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if (nums.size() == 0) {
            return 0;
        }
        int size=nums.size();
        int streak=1;
        int maxStreak=1;
        sort(begin(nums),end(nums));
        
        for(int i=1;i<size;i++){
         cout<<nums[i]; 
            if(nums[i]!=nums[i-1]){
                if(nums[i]==nums[i-1]+1){
                streak++;
            }
            else{
                maxStreak=max(maxStreak,streak);
                streak=1;
            } 
            }
        
       
    }
    return max(maxStreak,streak);
   
    }
};
 