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
        vector<int> pos(1001,0);
        set<int> st;
        fori(n){
            cin>>v[i];
            st.insert(v[i]);
            pos[v[i]]=i;
        }
        int ans=-1;
        for(int i=0;i<=1000;i++){
            for(int j=0;j<=1000;j++){
                if(st.count(i) and st.count(j) and __gcd(i, j)==1){
                    ans=max(ans, pos[i]+pos[j]+2);
                    // break;
                }
            }
        }
        cout<<ans<<endl;
        
    }
}