//generate all unique subsets when duplicates are present in the given set

#include<bits/stdc++.h>
using namespace std;

 void solve(vector<vector<int>> &ans,vector<int> &num,vector<int> &subset,int ind)
    {   
        ans.push_back(subset);
       
       for(int i=ind;i<num.size();i++)
       {  
          if(i!=ind && num[i]==num[i-1]) continue;
          subset.push_back(num[i]);
          solve(ans,num,subset,i+1);
          subset.pop_back();
       }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      vector<vector<int>> ans;
        vector<int> subset;
        sort(nums.begin(),nums.end());
        solve(ans,nums,subset,0); 
        return ans;
    }

    int main()
    {
    	#ifndef ONLINE_JUDGE
	    freopen("inpsub.txt","r",stdin);
	    freopen("outsub.txt","w",stdout);
        #endif
        int n; cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        vector<vector<int>> ans= subsetsWithDup(vec);
        for(auto x:ans) {
        for(auto ele:x) 
            cout<<ele<<" ";
        cout<<endl;
    }

    }