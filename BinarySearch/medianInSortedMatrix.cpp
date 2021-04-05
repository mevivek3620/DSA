// --- >>>>   https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

// Observations:
    // 1.Solving the problem in r*log(c)*32 by binary search is the only option.
    // 2.So what is the low and high?
    // 3.low = min(a[i][0]) for each i , high = max(a[i][c-1])
    // 4.we have to check whether the low is median or not 
    // 5.Find upper bound of mid for each row.
    // 6. Check whether the cnt is less than required or not.
    // 7. If it is less than required low = mid+1.
    // 8. Else high = mid.


int median(vector<vector<int>> &matrix, int r, int c){
    int mn = INT_MAX,mx = INT_MIN;
    
    for(int i = 0;i<r;i++){
        mn = min(matrix[i][0],mn);
        mx = max(matrix[i][c-1],mx);
    }
    int low = mn,high = mx,required = (r*c)/2 + 1;
    while(low < high){
        int mid = (low + high)/2;
        //check this is median or not
        int cnt = 0;
        for(int i = 0;i < r;i++){
            auto it = upper_bound(matrix[i].begin(),matrix[i].end(),mid);
            cnt += (it - matrix[i].begin());
        }
        if(cnt < required)low = mid+1;
        else high = mid;
    }
    return low;
}