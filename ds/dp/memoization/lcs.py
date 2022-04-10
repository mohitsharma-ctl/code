class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        m = len(text1)
        n = len(text2)
        arr = [[-1] *10000]*10000
        def lcs(X,Y,m,n):
            if (m == 0 or n == 0):
                return 0
            if (arr[m][n] != -1):
                return arr[m][n]
    
            if (X[m - 1] == Y[n - 1]):
                arr[m][n] = 1 + lcs(X, Y, m - 1, n - 1)
                return arr[m][n]
            else:
                arr[m][n] = max(lcs(X, Y, m, n - 1),
                                        lcs(X, Y, m - 1, n))
                return arr[m][n]
                return 0
        return lcs(text1,text2,m,n)