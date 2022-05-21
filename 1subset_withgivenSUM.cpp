// PRINT only 1 SUBSEQUENCE/SUBSET WHOSE SUM IS EQUAL TO THE GIVEN SUM
//FUNCTIONAL METHOD IS MORE EFFICIENT

#include<bits/stdc++.h>
using namespace std;

bool subset(vector<int> &sub,vector<int> &v,int i,int n,int s,int sum)
{
    if(i==n)
    {   //condition sutisfied
        if(s==sum)
        {
            for(auto x:sub) cout<<x<<" ";
                cout<<endl;
                return true;
        }
        //condition not satisfied
        else
        return false;
    }
    if(subset(sub,v,i+1,n,s,sum)==true) return true;

    sub.push_back(v[i]);
    s+=v[i];
    if(subset(sub,v,i+1,n,s,sum)==true)  return true;
    s-=v[i];
    sub.pop_back();

    return false;
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
    
}