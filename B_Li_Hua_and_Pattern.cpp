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
        int n,k;
        cin>>n>>k;
        vector<vector<int>> v(n, vector<int>(n));
        fori(n){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        int ct=0;
        fori(n/2){
            for(int j=0;j<n;j++){
                if(v[i][j]!=v[n-1-i][n-1-j]) ct++;
            }
        }
        if(n%2==1){
            fori(n/2){
                if(v[n/2][i]!=v[n/2][n-1-i]) ct++;
            }
        }
        cout<<ct<<endl;
        // if((ct<=k and (k-ct)%2==0) || n==1) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
    }
}