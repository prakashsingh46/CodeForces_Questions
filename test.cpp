#include<bits/stdc++.h>
#define ll long long
#define sort2D(arr,cmp) sort(arr.begin() , arr.end(),cmp)
#define sort(arr) sort(arr.begin() , arr.end())
#define vi vector<int>
#define vll vector<long long>
#define fori(n) for(int i=0;i<n;i++)
#define forl(n) for(long long i=0;i<n;i++)
using namespace std;
vector<int> dp;
int solve(int i,vector<int>& nums ){
    if(i+1==nums.size()) return nums[i];
    if(i+2==nums.size()){
        return max(nums[i], nums[i+1]);
    }
    // if(dp[i]!=-1) return dp[i];
    int x=nums[i],y=nums[i+1],z=nums[i+2];
    int a=INT_MAX, b=INT_MAX,c=INT_MAX;
    
    a=max(x, y) + solve(i+2, nums);
    nums[i+2]=y;
    b=max(x, z) + solve(i+2, nums);
    nums[i+2]=x;
    c=max(y, z) + solve(i+2, nums);

    return dp[i]=min({a,b,c});
}
int minCost(vector<int>& nums) {
    dp.resize(nums.size()+1, -1);
    return solve(0, nums);
}
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vi v(n);
        fori(n) cin>>v[i];
        cout<<minCost(v)<<endl;
    }
}