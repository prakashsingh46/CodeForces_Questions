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
        string s;
        cin>>s;
        int n=s.length();
        int ct=0;
        int ans=0;
        for(int i=0;i<2*n-1;i++){
            if(s[i%n]=='1') ct++;
            else{
                ans=max(ans, ct);
                ct=0;
            }
            if(i==2*n-2){
                ans=max(ans, ct);
            }
        }
        ans=min(ans,n);
        ll area;
        if(ans==n){
            area= 1ll*ans*ans;
            
        }
        else{
            int a=(ans+1)/2;
            area=a*1ll*(ans+1-a);
        }
        cout<<area<<endl;
    }
}