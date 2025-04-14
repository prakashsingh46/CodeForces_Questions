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
        ll sum=0;
        int neg=0, mx=INT_MAX;
        fori(n){
            int inp;
            cin>>inp;
            sum+=abs(inp);
            if(inp<0) neg++;
            mx=min(mx, abs(inp));
        }
        if(neg%2==0) cout<<sum<<endl;
        else cout<<sum-2*mx<<endl;
    }
}