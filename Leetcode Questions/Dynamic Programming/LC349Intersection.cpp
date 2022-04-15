class Solution {

public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        map<int, bool> isPresent;
        
        for(int i=0;i<nums1.size();i++){
            isPresent[nums1[i]] = false; 
        }
        
        for(int i=0;i<nums2.size();i++){
           if(isPresent.find(nums2[i]) != isPresent.end())
           {
               isPresent[nums2[i]] = true;
           }
        
        }
        
        for(auto it : isPresent){
            int temp = it.first;
            if(it.second)
                ans.push_back(temp);
            }
        return ans;
    }
};
