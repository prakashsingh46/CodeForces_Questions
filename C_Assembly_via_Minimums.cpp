#include<bits/stdc++.h>
#define ll long long
#define pp pair<int ,int>
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
        int m=(n*(n-1))/2;

        vi v(m);
        map<int, int> mp;
        int mx=INT_MIN;
        fori(m){ 
            cin>>v[i];
            mp[v[i]]++;
            mx=max(mx, v[i]);
        }

        priority_queue<pp, vector<pp>, greater<pp>> pq;
        for(auto p : mp){
            pq.push(p);
        }
        vi ans;
        int c=n-1;
        while(!pq.empty()){
            auto p=pq.top();
            int k=p.first;
            int f=p.second;
            pq.pop();
            ans.push_back(k);
            f = f-c;

            if(f>0) pq.push({k, f});
            c--;
        }
        ans.push_back(mx);

        for(int it: ans) cout<<it<<" ";
        cout<<endl;

    }
}