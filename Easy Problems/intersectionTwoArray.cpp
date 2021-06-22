class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> dp;        
        //unordered_set<int>s;
        int n=nums1.size();
        int m=nums2.size();       
        vector<int> s;
        for(int i=0;i<n;i++){
            dp.insert(nums1[i]);
          for(int k=0;k<m;k++){
            int key=nums2[k];
            if(dp.find(key)==dp.end()){ 
                
            }
            else{
                nums2[k]=-1;
                dp.erase(key);
                s.push_back(nums1[i]);          
            }
         }
        }
       
        return s;
        
    }
};