class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k=0;
        int size=nums.size();
        
        for(int i=0;i<size;i++){
            if(target<=nums[i])
                return k;
            k++;
        }
        return k;
    }
};