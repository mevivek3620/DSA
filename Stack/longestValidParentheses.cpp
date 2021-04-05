//  --->>>  https://leetcode.com/problems/longest-valid-parentheses/ 

// Observations:
//     1. Put the indices into the stack if s[i] == '('.
//     2. If s[i] == ')',pop out the top element.Then there are two possible cases.
//         a. If stack is empty, it means that it is not a part of balanced parentheses. 
//         b. Else it contains the indices of last ')' which is not balanced.
//         c. ans = max(ans,i - st.top())
//     3. If stack is empty put the current indices to the stack.

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int ans = 0 ;
        for(int i = 0;i < s.size();i++){
            if(s[i] == '(')st.push(i);
            else{
                st.pop();
                if(!st.empty())ans = max(ans,i - st.top());
                else st.push(i);
            }
        }
        return ans;
    }
};