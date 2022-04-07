import java.util.*;

public class Main {
    public static void main(String[] args) {
    int M=11;
    int V=4;
    int[] coins = new int[]{9,6,5,1};
    int[][] dp= new int[4+1][11+1];
    for(int i=0;i<dp.length;i++){
      
      for(int j=0;j<dp[0].length;j++){
        
      if(j==0){    //iterating in first column
      dp[i][j] = 0;
      }
      else if(i==0){   //iterating in first row
      dp[i][j] = Integer.MAX_VALUE-1;
      }
      else{
        
      if(j>=coins[i-1]){     //include the coin
      dp[i][j] = Math.min(dp[i-1][j],1+dp[i][j-coins[i-1]]);  
      }
      else{                 //excluding the first coin
        dp[i][j] = dp[i-1][j]; 
      }
      
      }
          
      }
    }


System.out.println(dp[dp.length-1][dp[0].length-1]);
}


}