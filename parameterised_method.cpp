//  PARAMETERISED METHOD
//sum of first n terms

#include<bits/stdc++.h>
using namespace std;

void calculate(int i,int s)
{
	if(i<1) {
	cout<<s;
	return;
	}
	calculate(i-1,s+i);
}
int main()
{   
#ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
	#endif
   int n; cin>>n;
   calculate(n,0);
	return 0;
}