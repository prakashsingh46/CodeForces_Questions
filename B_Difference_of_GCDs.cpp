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
        int n,l, r;
        cin>>n>>l>>r;

        vi v(n);
        bool flag=false;
        // v[0]=l;
        for(int i=1;i<=n;i++){
            int ele = l;
            if(l%i!=0) ele+=(i-l%i);
            if(ele<=r) v[i-1]=ele;
            else{
                flag=true;
                break;
            }
        }
        if(flag) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int it : v) cout<<it<<" ";
            cout<<endl;
        }
    }
}