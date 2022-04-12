
class Solution{
    int helper(String s1,String s2,int n,int m,int count,HashMap<String,Integer> hm){
        
    if(n==0 || m == 0){
        return count;
    }
    
    String key = n + ":" + m + ":" + count;
    
    if(hm.containsKey(key)){
        return hm.get(key);
    }
    
    if(s1.charAt(n-1) == s2.charAt(m-1)){
        
       count =  helper(s1,s2,n-1,m-1,count+1,hm);
    }
         int final_result = Math.max(count,Math.max(helper(s1,s2,n,m-1,0,hm),helper(s1,s2,n-1,m,0,hm)));
         hm.put(key,final_result);
        return final_result;
        
    }
    int longestCommonSubstr(String S1, String S2, int n, int m){
    HashMap<String,Integer> hm = new HashMap<>();
    int result = helper(S1,S2,n,m,0,hm);
   
    return result;
    }
}


