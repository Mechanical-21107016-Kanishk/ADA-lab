#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
class Solution {
      public:
     
    // space optimization
    int editDistance(string s, string t)
    {
        int n = s.size();
        int m = t.size();
         
        vector<int>prev(m+1, 0), curr(m+1, 0);
         
        for(int j =0; j<=m; j++)
        {
            prev[j] = j;
        }
         
        for(int i = 1; i <= n; i++)
        {
            curr[0] = i;
            for(int j = 1; j<= m; j++)
            {
                if(s[i-1] == t[j-1])
                {
                    curr[j] = prev[j-1];
                }
                else
                {
                    int mn = min(1 + prev[j], 1 + curr[j-1]);
                    curr[j] = min(mn, 1 + prev[j-1]);                  
                }
            }
            prev = curr;
        }
         
        return prev[m];
    }
     
};
 
int main()
{
    string s = "ada", t = "lab";
 
    Solution ob;
    int ans = ob.editDistance(s, t);
    cout << ans << endl;
}
