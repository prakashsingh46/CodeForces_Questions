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
        int n,m;
        cin>>m>>n;
        vector<vi> mat(m, vi(n));
        fori(m){
            for(int j=0;j<n;j++) cin>>mat[i][j];
        }
        map<int ,int> mp;
        vector<vector<int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
        fori(m){
            for(int j=0;j<n;j++){
                for(int z=0;z<4;z++){
                    int newi=i+dir[z][0];
                    int newj=j+dir[z][1];
                    mp[mat[i][j]]=max(mp[mat[i][j]], 1);
                    if(newi<0 || newi>=m || newj<0 || newj>=n) continue;
                    if(mat[i][j]==mat[newi][newj]){
                        mp[mat[i][j]]=2;
                    }
                    
                }
            }
        }
        
        int op=0;
        bool f=false;
        for(auto p : mp){
            op+=p.second;
            if(p.second>1) f=true;
        }
        op--;
        if(f) op--;
        cout<<op<<endl;

    }
}