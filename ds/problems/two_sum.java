// https://leetcode.com/problems/two-sum/submissions/
class Solution {
    public int[] twoSum(int[] arr, int target) {
    int[] result = new int[2];
    
    HashMap<Integer,Integer> hm = new HashMap<>();
    
    for(int i=0;i<arr.length;i++){
      
      if(hm.containsKey(target-arr[i])){
        System.out.println("key there");
        result[0] = i;
        result[1] = hm.get(target-arr[i]);
        return result;
      }
      hm.put(arr[i],i);
      
    }
    return result;
       
    }
}