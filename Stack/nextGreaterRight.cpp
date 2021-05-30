//----->>> https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1


vector<long long> nextLargerElement(vector<long long> arr, int n){
    stack<long long>st;
    vector<long long> r(n,-1);
    
    for(int i=n-1;i>=0;i--){
        //check if top ele of stack is gretaer than the curr ele
        // if no popout from stack
        while( !st.empty() && arr[st.top()] < arr[i] )st.pop();

        // if stack is empty it means that there is no greater ele on right
        if( !st.empty() )r[i] = arr[st.top()];

        // push the curr ele to stack
        st.push(i);
    }
    return r;
}


// Now for the problem to find next greater on the left
// 1.Just iterate from the left to right
// 2.