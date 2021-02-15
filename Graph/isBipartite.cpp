//  ---->>>https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/585/week-2-february-8th-february-14th/3639/

Observations:
    1. Graph is bipartitte iff it is 2 - colorable.
    2. Graph can be disconnected.
    3. Make sure you do not visit the parent node.
    

class Solution {
public:
    int col[103];
    
    bool helper(vector<vector<int>>& graph,int node,int par,int color){
        bool ans = true;
        col[node] = color;
        for(auto x:graph[node]){
            if(x == par)continue;
            if(col[x] == -1){
                ans = ans && helper(graph,x,node,color^1);
            }
            else if(col[x] != -1 && col[x] != 1 - color)return false;
        }
        return ans;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        memset(col,-1,sizeof(col));
        bool ans = true;
        for(int i=0;i<graph.size();i++){
            if(col[i] == -1)ans = ans && helper(graph,i,-1,0);
        }
        return ans;
    }
};