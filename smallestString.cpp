
//  https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/582/week-4-january-22nd-january-28th/3619/

string getSmallestString(int n, int k) {
        // if(n == 1)return k+'a';
    string ans;
    for(int i=n-1;i>=0;i--)
    {
        int temp = k-i;
        if(temp >= 26){
            ans += 'z';
            k -= 26;
        }
        else {
            ans += ('a'+temp-1);
            k -= (temp);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
