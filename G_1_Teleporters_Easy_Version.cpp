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
        int n,c;
        cin>>n>>c;
        vi v(n);
        fori(n) cin>>v[i];
        fori(n) v[i]+=i+1;
        sort(v);
        int i=0;
        while(i<n and c-v[i]>=0){
            c-=v[i];
            i++;
        }
        cout<<i<<endl;
    }
}