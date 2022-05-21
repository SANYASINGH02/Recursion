#include<bits/stdc++.h>
using namespace std;
   /*
    void solve(vector<int> &arr,vector<int> &subset,int index,int target,int currsum,vector<vector<int>> &answer)
    {
        if(currsum==target)  
        {
            answer.push_back(subset);
            return;
        }
    
         if(index==arr.size() || currsum+arr[index]>target) return;
         int num=arr[index++];   //num=first index number
         subset.push_back(num);
         solve(arr,subset,index,target,currsum+num,answer);
         subset.pop_back();

         while(index<arr.size() && arr[index]==num) index++;
        solve(arr,subset,index,target,currsum,answer);
         
     }
     */
     void solve(vector<int> &arr,vector<int> &subset,int index,int target,int currsum,vector<vector<int>> &answer)
    {
        if(currsum==target)  
        {
            answer.push_back(subset);
            return;
        }
     for(int i=index;i<arr.size();i++)
     {   
         if(currsum+arr[i]>target) return;
         if(i>index && arr[i]==arr[i-1]) continue;
         subset.push_back(arr[i]);
         solve(arr,subset,i+1,target,currsum+arr[i],answer);
         subset.pop_back();
     }
        
    } 
     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       sort(candidates.begin(),candidates.end());
        vector<vector<int>> answer;
        vector<int> subset;
        solve(candidates,subset,0,target,0,answer);
        return answer;
    }

    int main()
    {
    #ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
    #endif 
    int n;  cin>>n;
    vector<int> candidates(n);
    for(int i=0;i<n;i++) cin>>candidates[i];
        int target;  cin>>target;
    vector<vector<int>> ans=combinationSum2(candidates,target);
        for(auto x: ans){
            for(auto y: x) cout<<y<<" ";
                cout<<endl;
        }        	

            return 0;
 
    }