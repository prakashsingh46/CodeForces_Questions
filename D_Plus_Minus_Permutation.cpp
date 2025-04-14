#include<bits/stdc++.h>
#include<numeric>
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
        int n, x, y;
        cin>>n>>x>>y;
        ll z=(1ll*x*y)/(__gcd(x,y));

        ll p=n/x, q=n/y , r=n/z;

        p-=r;
        q-=r;

        ll ans = (1ll*n*(n+1))/2 - (1ll*(n-p)*(n-p+1))/2 - (1ll*q*(q+1))/2;

        cout<<ans<<endl;
        // cout<<p<<" "<<q<<endl;

    }
}