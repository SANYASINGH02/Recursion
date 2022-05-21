// 

#include<bits/stdc++.h>
using namespace std;

void subsequence(string op,string in)
{
    if(in.size()==0)
    {
        cout<<op<<endl;
        return;
    }
    op.push_back(in[0]);
    in.erase(in.begin()+0);
    subsequence(op,in);
    op.pop_back();
    subsequence(op,in);
   
}
/*
void subsequence(string op,string in,int ind)      ind=>> starting index of string
{
    if(in.size()==ind)
    {
        cout<<op<<endl;
        return;
    }
    subsequence(op+in[ind],in,ind+1);
    subsequence(op,in,ind+1);
   
}
*/
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
    #endif
    
    string s,o="";
    cin>>s;
    subsequence(o,s);

}