class Solution {
    public static int solve(int N, int[] A) {
        // code here
        int i, p = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(i = 0; i < N; i++){
            if(!map.containsKey(A[i]))
                map.put(A[i], 0);
        }
        while(!map.isEmpty()){
            if(!map.containsKey(p))
                break;
            else
                p++;
        }
       return(p);
    }
}