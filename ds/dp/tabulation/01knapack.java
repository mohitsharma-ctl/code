import java.util.*;

public class Main {
    public static void main(String[] args) {
    
    int[] weight = {2,5,1,3,4};
    int[] value = {15,14,10,45,30};
    int total = 7;
    int[][]dp = new int[weight.length+1][total+1];
    

  for (int i = 0; i < dp.length; i++) 
        {
            for (int j = 0; j < dp[0].length; j++) 
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;

                else if (j>= weight[i - 1])
                
                    dp[i][j]
                        = Math.max(value[i - 1]
                         + dp[i - 1][j - weight[i - 1]],
                         dp[i - 1][j]);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

    for(int i = 0;i<dp.length;i++){
      System.out.println("");
      // 
      for(int j = 0;j<dp[0].length;j++){
      // 
      System.out.print(dp[i][j]+" ");
    // 
      }
      // 
      // 
    }
  
    }
}
