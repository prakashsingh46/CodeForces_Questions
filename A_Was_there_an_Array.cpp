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
        vi v(n-2);
        fori(n-2) cin>>v[i];
        int i=0;
        bool f=true;
        while(i+2<n-2){
            if(v[i]==1 && v[i+1]==0 and v[i+2]==1){
                f=false;
                break;
            }
            i++;
        }
        if(f) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
}