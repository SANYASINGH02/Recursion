
#include<bits/stdc++.h>
using namespace std;

bool isPalin(string &subst,int start,int end)
    {
       while(start<=end)
           if(subst[start++]!=subst[end--])
               return false;
        return true;
    }
 
   void PalinSubstrings(string &s,vector<string> &subst,vector<vector<string>> &ans,int index)
    {
        if(index==s.length())
        {
            ans.push_back(subst);
            return;
        }
        for(int i=index ; i<s.length() ; i++)
        {
            if(isPalin(s,index,i))
            {
                subst.push_back(s.substr(index,i-index+1));
                PalinSubstrings(s,subst,ans,i+1);
                subst.pop_back();
            }
        }
    }

       vector<vector<string>> partition(string s) 
    {
        vector<vector<string>> ans;
        vector<string> subst;
        PalinSubstrings(s,subst,ans,0);
        return ans;
    }
        
    int main()
    {
    #ifndef ONLINE_JUDGE
    freopen("inpsub.txt","r",stdin);
    freopen("outsub.txt","w",stdout);
    #endif

    string s;
    cin>>s;
    vector<vector<string>> ans = partition(s);
    for(auto x:ans) {
        for(auto ele:x) 
            cout<<ele<<" ";
        cout<<endl;
    }

    }