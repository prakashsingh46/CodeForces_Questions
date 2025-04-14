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
        fori(n) cin>>v[i];

        sort(v);
        if(v[0]!=1){
            cout<<"NO"<<endl;
            continue;
        }
        ll sum=1;
        bool f=true;
        for(int i=1;i<n;i++){
            if(sum<v[i] and i>0){
                f=false;
                break;
            }
            sum+=v[i];
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}