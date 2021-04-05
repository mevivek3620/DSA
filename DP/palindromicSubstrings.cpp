//----->>>> https://leetcode.com/problems/palindromic-substrings/

// 1. Brute force approach would give o(n^3) time complexity.
// 2. What are we doing? -> Create all substrings and then checking whether it is palindrome or not.
// 3. We have to check it in O(1).
// 4. So basically we have to use the previous result.
// 5. Here comes the Dp solution into the picture -->> dp[i][j] = substring starting from i to j is palindrome or not 
// 6. Base cases are: All one length substrings are palindromes.Two length substrings having both character equal are palindromes.
// 7. State change: dp[i][j] = (dp[i+1][j-1] and s[i] == s[j]).



#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int dp[n+1][n+1];
        for(int i = 0;i < n+1;i++){
            for(int j = 0;j<n+1;j++){
                dp[i][j] = 0;
            }
        }
        
        int ans = 0;
        for(int i = 0;i < n;i++){
            dp[i][i] = 1;
            ans++;
        }
        
        for(int i = 0;i < n-1;i++){
            dp[i][i+1] = (s[i] == s[i+1]);
            ans += dp[i][i+1];
        }
        
        for(int len = 3;len <= n;len++){
            for(int i = 0,j = len + i - 1; j < n ;i++,j++){
                if(i+1 < n && j-1 >= 0){
                    dp[i][j] = (dp[i+1][j-1] == 1 && s[i]==s[j]);
                    ans += dp[i][j];
                }
            }
        }
    
        return ans;
    }
};

int main(){
    Solution obj;
    string s;cin>>s;
    cout<<obj.countSubstrings(s)<<endl;
}