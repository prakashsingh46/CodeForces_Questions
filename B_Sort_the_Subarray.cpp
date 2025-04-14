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
        vi a(n);
        vi b(n);
        fori(n) cin>>a[i];
        fori(n) cin>>b[i];
        
        int first=-1,last=-1;
        fori(n){
            if(a[i]!=b[i]){
                first=i;
                break;
            }
        }
        fori(n){
            if(a[n-1-i]!=b[n-1-i]){
                last=n-1-i;
                break;
            }
        }

        int i=first;
        while(i-1>=0 and b[i]>=b[i-1]){
            i--;
            first--;
        }
        int j=last;
        while(j+1<n and b[j]<=b[j+1]){
            j++;
            last++;
        }
        cout<<first+1<<" "<<last+1<<endl;
    }
}