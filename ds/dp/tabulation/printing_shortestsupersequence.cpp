class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
      int n=str1.length();
        int m=str2.length();
        int t[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {                   //       LCS CODE
                if(str1[i-1]==str2[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                {
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        int i=n;
        int j=m;
        string ans="";
        while(i>0 and j>0)
        {
            if(str1[i-1]==str2[j-1])
            {
                ans.push_back(str1[i-1]);
                i--,j--;
            }                              // basically iterate in 2 d grid
            else
            {
                if(t[i][j-1]>t[i-1][j])
                {                         // move forward in direction where maximum meet
                    ans.push_back(str2[j-1]);
                    j--;
                }
                else 
                {
                    ans.push_back(str1[i-1]);
                    i--;
                }
            }
        }
        while(i>0)
        {                // if one of the string length is==0
            ans.push_back(str1[i-1]);
            i--;
        }
        while(j>0)
        {
            ans.push_back(str2[j-1]);
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};