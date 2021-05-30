#include <bits/stdc++.h>
#define f(i,a,b) for(int i= a;i<b;i++)

using namespace std;

void Znaive(string s){
    int n = s.size();
    vector<int>z(n,0);
    for(int i = 1; i< n;i++){
        int j = i,k = 0;
        while(j<n && s[j] == s[k]){
            j++;k++;
            z[i]++;
        }
    }
    // O(n^2) time 
    for(auto x:z)cout<<x<<" ";
    cout<<endl;
}

vector<int> Z(string s){
    int n = s.size();
    vector<int>z(n,0);
    for(int i = 1,l = 0,r = 0;i < n;i++){
        if(i <= r){
            z[i] = min(r - i + 1,z[i-l]);
        }
        
        while(i+z[i] < n && s[z[i]] == s[i+z[i]]){
            z[i]++;
        }
        if(z[i] + i - 1 > r){
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}

int main(){
    // int t;cin>>t;
    // while(t--)
    // {
        string s;cin>>s;
        // Znaive(s);
        vector<int>z = Z(s);
        int n = s.size();
        int ans = -1,f = 0;
        
        
        if(!f)cout<<"Just a legend"<<endl;
        return 0;
    // }
}