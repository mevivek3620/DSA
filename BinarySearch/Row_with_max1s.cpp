// link to the question---->> https://www.geeksforgeeks.org/find-the-row-with-maximum-number-1s/

// naive approach takes O(n*m)

// o(n*logm)approach using binary search
int first(vector<int>&a,int low,int high)
{
    if(high>=low)
    {
        int mid = (low+high)/2;
        if(a[mid] == 1 && (mid == 0 || a[mid-1]==0)){
            return mid;
        }
        else if(a[mid]==0){
            return first(a,mid+1,high);
        }
        else{
            return first(a,low,mid-1);
        }
    }
    return -1;
}


int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    int ans = 0,row = -1;
    for(int i=0;i<n;i++)
    {
        int first_col = first(arr[i],0,m-1);
        // cout<<first_col<<endl;
        if(first_col != -1 && m-first_col > ans){
            ans = m-first_col;
            row  = i;
        }
    }
    return row;
}


// O(n+m) approach using some modifications on above approach

int first(vector<int>&a,int low,int high)
{
    if(high>=low)
    {
        int mid = (low+high)/2;
        if(a[mid] == 1 && (mid == 0 || a[mid-1]==0)){
            return mid;
        }
        else if(a[mid]==0){
            return first(a,mid+1,high);
        }
        else{
            return first(a,low,mid-1);
        }
    }
    return -1;
}

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    int ans = 0,row = -1;
    int first_col = first(arr[0],0,m-1);
    for(int i=1;i<n;i++)
    {
        
    }
    return row;
}













    