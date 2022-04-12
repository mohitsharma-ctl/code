class Solution{
    int helper(String s1,String s2,int n,int m,int count){
               
    if(n==0 || m == 0){
        return count;
    }
    
    if(s1.charAt(n-1) == s2.charAt(m-1)){
        
       count =  helper(s1,s2,n-1,m-1,count+1);
    }
        int final_result = Math.max(count,Math.max(helper(s1,s2,n,m-1,0),helper(s1,s2,n-1,m,0)));

        return final_result;
        
    
    }
    int longestCommonSubstr(String S1, String S2, int n, int m){

    int result = helper(S1,S2,n,m,0);
   
    return result;
    }
}