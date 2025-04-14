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
        vi v(n);
        fori(n) cin>>v[i];

        int i=0, j=n-1, A=0, B=0, ans=0;
        while(i<=j ){
            if(A==B){
                ans= max(ans, i + n-j-1);
            }
            if(A<=B){
                A+=v[i];
                i++;
            }
            else if(A>B) {
                B+=v[j];
                j--;
            }
            
        }
        if(A==B) ans= max(ans, n);

        cout<<ans<<endl;
    }
}