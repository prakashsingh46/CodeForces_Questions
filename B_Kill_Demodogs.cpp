#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
#define mod 1000000007
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
        ll n;
        cin>>n;
        ll ans = (337*((n*(n+1)%mod)*(4*n-1)%mod))%mod;
        // ans-=(n*(n+1)%mod)/2;
        // ans=(ans*2022)%mod;
        cout<<ans<<endl;
    }
}