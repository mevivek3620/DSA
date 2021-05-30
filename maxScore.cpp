// ---->>> https://leetcode.com/problems/maximum-score-from-removing-stones/

#include "header.h"
using namespace std;

class Solution {
private:
      string s = "Fuck You";
public:
    void call(){
        cout<<this->s<<endl;
    }
    int maximumScore(int a, int b, int c) {
        int val[3] = {a,b,c};
        sort(val,val+3);
        int ans = 0;
        if(val[0] + val[1] < val[2])ans = val[0]+val[1]; 
        else ans = (val[0] + val[1] + val[2])/2;
        return ans;
    }
};

int main()
{
    int a,b,c;cin>>a>>b>>c;
    Solution obj;
    obj.call();
    cout<<obj.maximumScore(a,b,c)<<endl;
}