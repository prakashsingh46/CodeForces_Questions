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
        vll v(n);
        fori(n) cin>>v[i];

        ll dev=2;
        bool f=true;
        while(f){
            set<ll> st;
            fori(n){
                st.insert(v[i]%dev);
            }
            if(st.size()==2){
                f=false;
                break;
            }
            dev*=2;

        }
        cout<<dev<<endl;
    }
}