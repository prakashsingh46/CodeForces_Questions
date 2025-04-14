#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;
bool solve(vll &v, ll hcf, int f){
    fori(v.size()){
        if(i%2==f && v[i]%hcf==0) return false;
    }
    return true;
}

int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vll v(n);
        fori(n) cin>>v[i];
        ll hcf1=0, hcf2=0;
        fori(n){
            if(i%2==0) hcf1=__gcd(hcf1, v[i]);
            else hcf2=__gcd(hcf2, v[i]);
        }
        if(hcf1==1 and hcf2==1){
            cout<<0<<endl;
            continue;
        }
        if(solve(v, hcf2, 0)){
            cout<<hcf2<<endl;
        }
        else if(solve(v, hcf1, 1)){
            cout<<hcf1<<endl;
        }
        else{
            cout<<0<<endl;
        }

    }
}