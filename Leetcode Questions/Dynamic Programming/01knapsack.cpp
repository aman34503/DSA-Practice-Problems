
//Recursive Code

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       return outputsum( W,  wt,  val,  n, 0);
    }
    
    int outputsum(int W, int wt[], int val[], int n, int current){
        if(current==n){
            return 0;
        }
        
        int currentweight = wt[current];
        int currentvalue = val[current];
        
        int consider = 0;
        
        if(current <= W)
            consider = val[current]+  outputsum( W-currentweight, wt, val,  n, current+1);
        
        int notconsider = outputsum(W, wt, val, n,current+1);
        
        return max(consider, notconsider);
        
        }
};
