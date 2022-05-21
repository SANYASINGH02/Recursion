//COUNT NUMBER OF SUBSEQUENCE/SUBSETS WITH GIVEN SUM

#include<bits/stdc++.h>
using namespace std;

int subset(vector<int> &sub,vector<int> &v,int i,int n,int s,int sum)
{   
    //condition not satisfied
    //this is strictly done if array contains  positives only
    if(i==n)
    {   //condition satisfied
        if(s==sum)
        return 1;
        //condition not satisfied
        else return 0;
    }
    int l=subset(sub,v,i+1,n,s,sum);

    sub.push_back(v[i]);
    s+=v[i];
    int r=subset(sub,v,i+1,n,s,sum);
    s-=v[i];
    sub.pop_back();

    return l+r;
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
    cout<<subset(empty,v,0,n,0,sum);
    
}