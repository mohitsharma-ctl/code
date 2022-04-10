class Solution
{
    //Function to find the length of longest common subsequence in two strings.
    static int lcs(int x, int y, String s1, String s2)
    {
        
        int[][] dp = new int[x+1][y+1];
        
                for(int i = 0;i<dp.length;i++){
            for(int j = 0;j<dp[0].length;j++){
                if(i==0 || j == 0){
                    dp[i][j] = 0;
                }
                else{
                    if(s1.charAt(i-1) == s2.charAt(j-1)){        //if element from string 1 and string 2 matches

                        dp[i][j] = 1+dp[i-1][j-1];               // add that 1 with excluding both of these character from s1 and s2
                    }
                    else{
                        dp[i][j] = Math.max(dp[i-1][j],dp[i][j-1]); // check which length is greater, excluing character from s1(dp[i-1][j]) or exclduing character from s2(dp[i][j-1])
                    }
                }
            }
        }
        return dp[dp.length-1][dp[0].length-1];
    }
    
}