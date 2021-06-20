class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            
			
	unordered_map<int,int> m;
    int i,a,b;
	
    for(i=0;i<nums.size();i++)
    {
        m.insert({nums[i],i});
    }
	
    for(i=0;i<nums.size();i++)
    {
        auto it=m.find(target-nums[i]);
		
        if(it!=m.end())
        {
            a=i;
            b=it->second;  
        }
		
    }
	
    return {a,b};
    
}
    
};