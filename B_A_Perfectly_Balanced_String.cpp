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
        set<int> st;
        for(char ch : s) st.insert(ch);

        int n=st.size();
        map<int, int> mp;
        int j=0;
        bool flag=true;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            if(i-j+1>n){
                mp[s[j]]--;
                if(mp[s[j]]==0) mp.erase(s[j]);
                j++;
            }
            if(i-j+1==n){
                if(mp.size()<n){
                    flag=false;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}