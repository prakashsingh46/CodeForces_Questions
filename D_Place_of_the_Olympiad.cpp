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
        ll n,m,k;
        cin>>n>>m>>k;
        if(k<=n){
            cout<<1<<endl;
            continue;
        }
        ll p=(m)/2;
        ll rem = k-min(k, p*n);

        ll r=((rem+(n-1))/n)*2;

        ll ans = 1+r;
        if(m%2==0 and ans>1) ans--;
        cout<<ans<<endl;
    }
}