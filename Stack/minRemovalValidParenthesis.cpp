//---->>>>    https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/

//      To make the string valid with minimum removals, 
//      we need to get rid of all parentheses that do not have a matching pair.
//      1. Maintain a stack and push '('.
//      2. If there is a ')' and stack is empty,it means there is a mismatch.
//      3. Whatever left in the stack is mismatched opening bracket.


class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans;
        stack<int>st;
        for(int i = 0;i<s.size();i++){
            char x = s[i];
            if(x == '(')st.push(i);
            else if(x == ')'){
                if(!st.empty()){
                    st.pop();
                }
                else s[i] = '*';
            }
        }
        while(!st.empty()){
            s[st.top()] = '*';
            st.pop();
        }
        for(auto x:s){
            if(x != '*')ans += x;
        }
        return ans;
    }
};