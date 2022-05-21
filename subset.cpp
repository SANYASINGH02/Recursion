//GENERATE ALL SUBSETS OF A SET

#include<bits/stdc++.h>
using namespace std;

void subset(vector<int> &nums,vector<int> &sub,int i,vector<vector<int>>& ans)
{
    if(i==nums.size())
    { 
        ans.push_back(sub);
        return;
    }
    subset(nums,sub,i+1,ans);

    sub.push_back(nums[i]);
    subset(nums,sub,i+1,ans);
    sub.pop_back();
    }
/*
void subset(vector<int>& nums, vector<int>& sub,int ind, vector<vector<int>>& ans) {
        subs.push_back(sub);
        for (int i = ind; i < nums.size(); i++) {
            sub.push_back(nums[i]);
            subset(nums,sub, i + 1, subs);
            sub.pop_back();
        }
    }
    */
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
    #endif
    int n; cin>>n;
    vector<int> v(n),empty;
    for(int i=0;i<n;i++) cin>>v[i];
        vector<vector<int>> ans;
    subset(v,empty,0,ans);
    for(auto x:ans) {
        for(auto ele:x) 
            cout<<ele<<" ";
        cout<<endl;
    }
    
}