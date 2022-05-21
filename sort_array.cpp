//SORT AN ARRAY

#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &arr,int temp)
{
   if(arr.size()==0 || arr[arr.size()-1]<=temp)
   {
      arr.push_back(temp);
      return;
   }
   int num=arr[arr.size()-1];
   arr.pop_back();
   insert(arr,temp);
   arr.push_back(num);
}

void sortArr(vector<int> &arr)
{
   if(arr.size()==0 || arr.size()==1) return;
   int num=arr[arr.size()-1];
   arr.pop_back();   
   sortArr(arr);
   insert(arr,num);
}

int main()
{   
#ifndef ONLINE_JUDGE
	freopen("inp.txt","r",stdin);
	freopen("out.txt","w",stdout);
#endif
  int n,t; cin>>n;
   vector<int> arr(n);
   for(int i=0;i<arr.size();i++) cin>>arr[i];
   sortArr(arr);
   for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
   return 0;
}