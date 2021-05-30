// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define M 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define pii pair< int,int >
#define pll pair< ll,ll >
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define vii vector<pii>
#define vll vector<pll>
#define pqueue priority_queue< ll >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define endc "\n"
#define MAX 100003
using namespace std;

int helper(int n,ll k,string s)
{
    ll ans = 0,mid = 0;
    if(n == 1)return s[0]-'a';
    if(n&1)mid = (n)/2 + 1;
    else mid = n/2;
    for(int i = 0;i<mid;i++){
        ll pos = s[i]-'a'+1;
        // ans += (pos);
        // ll temp = 0,j = i;
        ans += 1LL*(min(k,pos));
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    f(i,0,t){
        int n;
        ll k;cin>>n>>k;
        string s;cin>>s;
        int ans = helper(n,k,s);
        cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
    return 0;
}