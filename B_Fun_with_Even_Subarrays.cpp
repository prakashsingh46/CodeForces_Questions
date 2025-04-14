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
        vi v(n+1);
        fori(n){
            cin>>v[n-i];
        }

        int i=1, ct=0;
        while(i<n){
            if(v[1]==v[i+1]){
                i++;
            }
            else{
                ct++;
                i*=2;
            }
        }
        cout<<ct<<endl;
    }
}