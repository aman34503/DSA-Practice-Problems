class Solution{
  public:
    int maxLen(int arr[], int n)
    {
        // Your code here
        unordered_map<int, int>map;
        int prefixsum = 0;
        int ans = 0;
        map[prefixsum] = -1;
        
        for(int i=0; i<n; i++){
            int current = arr[i];
            
            if(current == 0){
                prefixsum += -1;
            }
            else
                prefixsum += 1;
            
            if(map.find(prefixsum) != map.end()){
                int temp = i - map[prefixsum];
                ans = max(temp, ans);
            }
            else
            map[prefixsum] = i;
        }
        return ans;
    }
};