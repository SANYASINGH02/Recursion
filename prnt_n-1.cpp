//PRINT N TO 1 

#include<bits/stdc++.h>
using namespace std;
/*   => calling is func(n,n)
void func(int i,int n){
	if(i<1) return;
	cout<<i<<" ";
	func(i-1,n);
	return;
}
*?
/*
void func(int n){
	if(n==1) { cout<<"1 ";  return;}
    cout<<n<<" ";
    func(n-1);
}
*/

void func(int n){
	if(n<1) {return;}
    cout<<n<<" ";
    func(n-1);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
	#endif
    int n; cin>>n;
	func(n);
}