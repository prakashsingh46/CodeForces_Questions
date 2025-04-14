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
        
        vi arr(n);
        set<int> st;
        fori(n){
            cin>>arr[i];
            st.insert(arr[i]);
        }
        vi v(k, -1);
        map<int, priority_queue<int> > mp;
        for(int i=0;i<n;i++){
            int c=arr[i];
            mp[c].push(i-v[c]-1);
            v[c]=i;
        }
        for(int c : st){
            mp[c].push(n-v[c]-1);
        }
        int ans=INT_MAX;
        for(auto p: mp){
            auto q=p.second;
            int a=q.top(); 
            q.pop();
            int b=q.top();
            q.pop();

            int temp=max(a/2, b);
            ans=min(ans, temp);
        }
        cout<<ans<<endl;
    }
}