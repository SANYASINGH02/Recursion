//factorial

#include<bits/stdc++.h>
using namespace std;

int functional_fact(int n )
{
	if(n==1) {
	return 1;
	}
	return n*functional_fact(n-1);
}

void parameterised_fact(int i,int f)
{
   if(i==1) {
   	cout<<f;
   	return ;
   }
 parameterised_fact(i-1,f*i);  
}
int main()
{   
#ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
#endif
   int n; cin>>n;
   cout<<functional_fact(n);
   cout<<endl;
   parameterised_fact(n,1);
   return 0;
}