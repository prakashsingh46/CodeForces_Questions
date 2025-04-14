#include<bits/stdc++.h>
#define ll long long
#define pp pair<int, int>
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
        vector<pair<int,int>> a, b, c;
        priority_queue<pp, vector<pp>, greater<pp>> pq;
        fori(n){
            int ip;
            cin>>ip;
            pq.push({ip,i});
            if(pq.size()>3) pq.pop();
        }
        while(!pq.empty()){
            a.push_back(pq.top());
            pq.pop();
        }
        fori(n){
            int ip;
            cin>>ip;
            pq.push({ip,i});
            if(pq.size()>3) pq.pop();
        }
        while(!pq.empty()){
            b.push_back(pq.top());
            pq.pop();
        }
        fori(n){
            int ip;
            cin>>ip;
            pq.push({ip,i});
            if(pq.size()>3) pq.pop();
        }
        while(!pq.empty()){
            c.push_back(pq.top());
            pq.pop();
        }
        int ans=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(a[i].second!=b[j].second){
                    for(int k=0;k<3;k++){
                        if(c[k].second!=a[i].second and c[k].second!=b[j].second){
                            ans= max(ans, a[i].first+b[j].first+c[k].first);
                        }
                    }

                }
            }
        }
        cout<<ans<<endl;
    }
}