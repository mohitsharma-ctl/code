import java.util.*;

public class Main {
    public static void main(String[] args) {
  
        int x = 6;
        int y = 6;
        String s1 = "ABCDGH";
        String s2 = "AEDFHR";
        int[][] dp = new int[x+1][y+1];
        // fill initial value
        for(int i = 0;i<dp.length;i++){
            for(int j = 0;j<dp[0].length;j++){
                if(i==0 || j == 0){
                    dp[i][j] = 0;
                }
                else{
                    if(s1.charAt(i-1) == s2.charAt(j-1)){
                        dp[i][j] = 1+dp[i-1][j-1];
                    }
                    else{
                        dp[i][j] = Math.max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
        }
        String subseq = "";
        int i = dp.length-1;
        int j = dp[0].length-1;
        // System.out.println(dp[i][j]);
        
        while(i>0 && j>0){          //iterating from last cell of dp matrix
          
        if(s1.charAt(i-1)==s2.charAt(j-1)){    //checking if both characters are equal in ip strings...if so...add them to op string
          
        subseq = subseq + s1.charAt(i-1);
        i--;                                  //decrement both counter to reduce the string size(problem shortened)
        j--;
        }
        else{
          
          if(dp[i-1][j]>dp[i][j-1]){         //check which cell is greater (either s1 or s2)
            i--;                            // if s2 is greater...go to remainig string of s1
          }else{                            //else
            j--;                            //go to remaining string of s1
          }
          
        }
          
        }
        System.out.println(subseq;
    //return 0;
       

}


}