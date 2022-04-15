
class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>m;
        m.insert(make_pair(0,-1));
        int maxi = 0 , sum = 0;
        for(int i=0;i<n;++i){
            sum+=A[i];
            if(m.find(sum)!=m.end())
                maxi = max(maxi,(i-m[sum]));
            else
            m[sum] = i;
        }
     return maxi;   
    }  
}
