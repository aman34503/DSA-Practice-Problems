class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start =0; 
        int end = nums.size() -1;
        
        int index= -1;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(nums[mid] == target)
                return mid;
            
            if(nums[mid] < target){
                start =mid +1;
            }
            else{
                index = mid;
                end = mid-1;
            }
        }
        if(index == -1)
            return nums.size();
        
        return index;
    }
};