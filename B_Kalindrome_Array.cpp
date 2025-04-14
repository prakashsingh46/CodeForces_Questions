#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;
bool solve(vi &v, int val){
    vi arr;
    fori(v.size()){
        if(v[i]!=val) arr.push_back(v[i]);
    }
    
    int i=0, j=arr.size()-1;
    while(i<j){
        if(arr[i]!=arr[j]) return false;
        i++, j--;
    }
    return true;
}
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vi v(n);
        fori(n) cin>>v[i];
        int i=0, j=n-1;
        bool f=true;
        while(i<j){
            if(v[i]!=v[j]){
                if(!solve(v, v[i]) and !solve(v, v[j])){
                    f=false;
                }
                break;
            }
            i++, j--;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}