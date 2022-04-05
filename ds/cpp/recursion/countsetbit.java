// code to find set bit
// if no is even , no of set bit == no of set bit in no/2
// if no is odd, no of set bit == no of set bit in no/2+1

class Solution {
    public int findBit(int x){
    if(x==0) return 0;
    if(x==1) return 1;
        
    if(x%2==0){
        return findBit(x/2);
    }
    else{
        return 1+findBit(x/2);
    }
    }
    public int[] countBits(int n) {
        
        int[] arr = new int[n+1];
        for(int i = 0;i<=n;i++){
            arr[i] = findBit(i);
    }
    return arr;
    }
    
}