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
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vi v(n);
        fori(n) cin>>v[i];
        map<int, int> mp;
        mp[0]=3;
        mp[1]=1;
        mp[3]=1;
        mp[2]=2;
        mp[5]=1;
        int st=0;
        for(int i=0;i<n;i++){
            st++;
            if(mp.count(v[i])) mp[v[i]]--;
            if(mp[v[i]]==0) mp.erase(v[i]);
            if(mp.size()==0) break;
        }
        if(mp.size()==0) cout<<st<<endl;
        else cout<<0<<endl;
    }
}