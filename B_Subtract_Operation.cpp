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
        map<int, int> mp;
        vi v(n);
        fori(n){ 
            cin>>v[i];
            mp[v[i]]++;
        }
        bool f=false;
        for(int it : v){
            if(mp.count(it-k)){
                f=true;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}