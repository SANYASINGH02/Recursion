//PRINT 1 TO N 

#include<bits/stdc++.h>
using namespace std;
/*void func(int i,int n){
	if(i>n) return;
	cout<<i<<" ";
	func(i+1,n);
	return;
}*/

/*
void func(int n){
	if(n==1) { cout<<"1 ";  return;}
    func(n-1);
	cout<<n<<" ";
}
*/

void func(int n){
	if(n<1) {return;}
    func(n-1);
	cout<<n<<" ";
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