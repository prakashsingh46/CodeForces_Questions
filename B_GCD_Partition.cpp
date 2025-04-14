#include<bits/stdc++.h>
#include <numeric> 
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
        vll pref(n);
        pref[0]=v[0];
        for(int i=1;i<n;i++) pref[i]=pref[i-1]+v[i];

        ll ans=1;
        for(int i=0;i<n-1;i++){
            ll gc=__gcd(pref[i],pref[n-1]-pref[i]);
            ans=max(ans, gc);
        }
        cout<<ans<<endl;
    }
}