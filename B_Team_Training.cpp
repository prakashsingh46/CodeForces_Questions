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
        int n, x;
        cin>>n>>x;
        vi v(n);
        fori(n) cin>>v[i];

        sort(v);
        int ans=0;
        int p=1;
        for(int i=n-1;i>=0;i--){
            if(1ll*p*v[i]>=x){
                ans++;
                p=1;
            }
            else{
                p++;
            }
        }
        cout<<ans<<endl;
    }
}