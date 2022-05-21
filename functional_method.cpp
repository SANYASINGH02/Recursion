//  FUNCTIONAL METHOD
//sum of first n terms

#include<bits/stdc++.h>
using namespace std;

int calculate(int n )
{
	if(n==0) {
	return 0;
	}
	return n+calculate(n-1);
}
int main()
{   
#ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
#endif
   int n; cin>>n;
   cout<<calculate(n);
   return 0;
}