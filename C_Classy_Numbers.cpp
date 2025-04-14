#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;
int dp[20][2][4];
ll solve(string &s, int idx, bool tight, int nonZero){
    if(idx==s.length()) return 1;
    if(dp[idx][tight][nonZero]!=-1) return dp[idx][tight][nonZero];

    int limit = tight==1 ? s[idx]-'0' : 9;
    ll ans=0;
    for(int i=0;i<=limit ;i++){
        int newNonZero =nonZero + (i!=0 ? 1: 0); 
        if(newNonZero<=3){
            ans += solve(s, idx+1, tight & (i==s[idx]-'0'), newNonZero);
        }
    }
    return dp[idx][tight][nonZero] = ans;
}

int main(){
     int t;
     cin>>t;
     while(t--){
        ll l, r;
        cin>>l>>r;

        memset(dp, -1, sizeof(dp));
        string rs = to_string(r);
        ll a=solve(rs, 0, 1, 0);
        memset(dp, -1, sizeof(dp));
        string ls = to_string(l-1);
        ll b=solve(ls, 0, 1, 0);

        cout<<a-b<<endl;

    }
}