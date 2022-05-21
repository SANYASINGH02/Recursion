//REVERSE AN ARRAY

#include<bits/stdc++.h>
using namespace std;

void reverse(int i,int arr[],int n)
{
   if(i>=n/2) return;
   swap(arr[i],arr[n-i-1]);
   reverse(i+1,arr,n);
}

int main()
{   
#ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
#endif
   int n; cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   reverse(0,arr,n);
   for(int i=0;i<n;i++) cout<<arr[i]<<" ";
   return 0;
}