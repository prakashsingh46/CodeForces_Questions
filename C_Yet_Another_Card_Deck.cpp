#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;

int main(){
     int n, q;
     cin>>n>>q;
     vi v(n);
     fori(n) cin>>v[i];
     vi query(q);
     fori(q) cin>>query[i];

     map<int, int> mp;
     vi ans;
    fori(n){
        if(!mp.count(v[i])) mp[v[i]]=i;
    }
    fori(q){
        int card=query[i];
        ans.push_back(mp[card]);
        for(auto& p: mp){
            if(mp[card]>p.second) p.second++;
        }
        mp[card]=0;
    }
    for(int it: ans) cout<<it+1<<" ";
    cout<<endl;
     
}