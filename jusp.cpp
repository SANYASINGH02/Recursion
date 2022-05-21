#include<bits/stdc++.h>
using namespace std;

string one[] = { "", "One ", "Two ", "Three ", "Four ",
                 "Five ", "Six ", "Seven ", "Eight ",
                 "Nine ", "Ten ", "Eleven ", "Twelve ",
                 "Thirteen ", "Fourteen ", "Fifteen ",
                 "Sixteen ", "Seventeen ", "Eighteen ",
                 "Nineteen " };

string ten[] = { "", "", "Twenty ", "Thirty ", "Forty ",
                 "Fifty ", "Sixty ", "Seventy ", "Eighty ",
                 "Ninety " };
string nWords(int n, string s)
{
    string str = "";
    if (n > 19)
        str += ten[n / 10] + one[n % 10];
    else
        str += one[n];
    if (n)
        str += s;
 
    return str;
}
string inWords(long n)
{
    string out;
    out += nWords((n / 10000000), "crore ");
    out += nWords(((n / 100000) % 100), "lakh ");
    out += nWords(((n / 1000) % 100), "thousand ");
    out += nWords(((n / 100) % 10), "hundred ");
 
    if (n > 100 && n % 100)
        out += "and ";
    out += nWords((n % 100), "");
    if(out=="")
    out = "zero";
 
    return out;
}
bool Prime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main()
{
    
	#ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
    #endif
  int n,c=0; cin>>n;
  string s;
  vector<int> arr(n,0);
  unordered_map<string,int> m={{"Land",1},{"Road",2},{"People",3},{"Stone",3},{"Clouds",2},{"House",3},{"Forest",2},{"Gates",2},{"Water",2},{"Electricity",4},{"Agricultural",5},{"Farms",1},{"Shops",1},{"Transport",2},{"Mountains",4} };
  for(int i=0;i<n;i++)
  {
    cin>>s;
    arr[i]=s[0]-'0';
    s.erase(0,1);
    c+=m[s]*arr[i];
  }   
  int ans=0;
 
  unordered_map<string,int> m1={{"Happy",10},{"Sad",5},{"Neutral",2},{"None",1}};
  for(int i=0;i<n;i++)
  {
  	cin>>s;
  	ans+=arr[i]*m1[s];
  }
  ans=ans/c;
  if(Prime(ans))
  	cout<<"Yes ";
  else cout<<"No ";
 
  cout<<inWords(ans);
  return 0;
}
