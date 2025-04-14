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
        int x,y,k;
        cin>>x>>y>>k;
        int p1=x/k;
        int p2=y/k;

        for(int i=0;i<k;i++){
            int xi;
            if(x>0) xi=i+p1;
            else if(i==k-1) xi=i+x;
            x-=p1;
            int yi;
            if(x>0) yi=i+p2;
            else if(i==k-1) yi=i+y;
            y-=p2;
            
            cout<<xi<<" "<<yi<<endl;
            
        }
    }
}