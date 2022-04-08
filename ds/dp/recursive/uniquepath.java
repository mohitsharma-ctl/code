class Solution {
    public int uniquePaths(int m, int n) {
        int dp[][] = new int[m][n];
        return dfs(m-1,n-1,dp);
        
        
    }
    public int dfs(int m , int n,int[][] dp){
        if(m==0 && n==0){
            return 1;
        }
        if(m<0||n<0){
            return 0;
        }
        if(dp[m][n]!=0){
            return dp[m][n];
        }
         return dp[m][n] = dfs(m-1,n,dp) + dfs(m,n-1,dp);

        //  starting from last and checking each element
    }
}