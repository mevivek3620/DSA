
https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1#

// merge function merges the two subarrays
// 

long long merge(long long arr[], long long start,long long mid,long long end)
{
    long long  i = start,j = mid+1,n1 = mid-start+1,n2 = end - mid;
    long long temp[n1+n2];
    long long cnt = 0,k = 0;
    while(i<=mid && j<=end){
        if(arr[i] > arr[j]){
            cnt += mid-i+1;
            temp[k++] = arr[j++];
        }
        else{
            temp[k++] = arr[i++];
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=end){
        temp[k++] = arr[j++];
    }
    for(int l = start;l<=end;l++)arr[l] = temp[l-start];
    return cnt;
}


long long int mergeSort(long long arr[], long long start,long long end)
{
    if(start >= end)return 0;
    long long mid = start + (end - start)/2;
    long long left = mergeSort(arr,start,mid);
    long long right = mergeSort(arr,mid+1,end);
    return left + right + merge(arr,start,mid,end);
}