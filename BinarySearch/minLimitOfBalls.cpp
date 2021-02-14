//  ----->>>>>  https://leetcode.com/contest/weekly-contest-228/problems/minimum-limit-of-balls-in-a-bag/

Observations:
    1.  Maximum number of balls in a bag after maxOperations can be thought of as
        whether the # of opn is lesser or equal to maxOperations.
    2.  Search for the maximum # of balls.
    3.  If we do linear search,we will get TLE.Do binary search.

//   C++ Code
bool isPossible(int m,vector<int>& nums, int maxOperations)
    {
        int cnt = 0;
        for(auto x:nums){
            if(x <= m)continue;
            else cnt += ((x+m-1)/m - 1);
        }
        if(cnt <= maxOperations)return true;
        return false;
    }
    
    int minimumSize(vector<int>& nums, int maxOperations) {
        int s = 1,e = 1e9,ans = -1;
        while(s <= e){
            int m = s + (e-s)/2;
            if(isPossible(m,nums,maxOperations)){
                e = m-1;
                ans = m;
            }
            else s = m+1;
        }
        return ans;
    }
};


// Java Code
class Solution {
    public boolean isPossible(int m,int[] nums, int maxOperations)
    {
        int cnt = 0;
        for(int i=0;i<nums.length;i++){
            int x = nums[i];
            if(x <= m)continue;
            else cnt += ((x+m-1)/m - 1);
        }
        if(cnt <= maxOperations)return true;
        return false;
    }
    
    public int minimumSize(int[] nums, int maxOperations) {
        int s = 1,e = (int)1e9,ans = -1;
        while(s <= e){
            int m = s + (e-s)/2;
            if(isPossible(m,nums,maxOperations)){
                e = m-1;
                ans = m;
            }
            else s = m+1;
        }
        return ans;
    }
}