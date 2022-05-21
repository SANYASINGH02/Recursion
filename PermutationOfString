//permutation of a string

#include<bits/stdc++.h>
using namespace std;
/*
void solve( vector<int> &nums,vector<int> &ds,vector<vector<int>> &ans,vector<int> &freq)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                solve(nums,ds,ans,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    */
    void solve( vector<int> &nums,vector<vector<int>> &ans,int index)
    {
        if(index==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index ; i<nums.size() ; i++)
        {
            swap(nums[i],nums[index]);
            solve(nums,ans,index+1);
            swap(nums[i],nums[index]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>> ans;
        /*   vector<int> ds;
        vector<int> freq(nums.size(),0);
        solve(nums,ds,ans,freq);     */
        solve(nums,ans,0);
        return ans;
    }

    int main()
    {
    #ifndef ONLINE_JUDGE
    freopen("inpsub.txt","r",stdin);
    freopen("outsub.txt","w",stdout);
    #endif
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<vector<int>> ans=permute(v);
    for(auto x:ans) {
        for(auto ele:x) 
            cout<<ele<<" ";
        cout<<endl;
    }
    return 0;
    }