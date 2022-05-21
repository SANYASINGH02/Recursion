// PRINT ALL SUBSEQUENCE/SUBSET WHOSE SUM IS EQUAL TO THE GIVEN SUM

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void subset(vector<int> &sub,vector<int> &v,int i,int n,int s,int sum)
{
    if(i==n)
    {   if(s==sum)
        ans.push_back(sub);  // u can also print here "sub" instead of inserting it into "ans" vector
        return;
    }Q
    subset(sub,v,i+1,n,s,sum);

    sub.push_back(v[i]);
    s+=v[i];
    subset(sub,v,i+1,n,s,sum);
    s-=v[i];
    sub.pop_back();
    }

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inp.txt","r",stdin);
	freopen("out.txt","w",stdout);
    #endif
    int n; cin>>n;
    vector<int> v(n),empty;
    for(int i=0;i<n;i++) cin>>v[i];
        int sum;  cin>>sum;
    subset(empty,v,0,n,0,sum);
    for(auto x:ans) 
    {
        for(auto ele:x) 
            cout<<ele<<" ";
        cout<<endl;
    }
    
}