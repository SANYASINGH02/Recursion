#include<bits/stdc++.h>
using namespace std;
       

/*

    //====================================
    int coinChange(vector<int>& coins, int amount) {
      int n=coins.size();
       vector<int> prev(amount+1,0),curr(amount+1,0);
        for(int T=0;T<=amount;T++)
            if(T % coins[0]==0) prev[T]=T/coins[0];
             else prev[T]=1e9;
        
        for(int ind=1;ind<n;ind++)
        {
            for(int T=0;T<=amount;T++)
            {
                 int notTake=0+prev[T];
                 int take=INT_MAX;
                 if(coins[ind]<=T) take=1+prev[T-coins[ind]];
                 prev[T]=min(take,notTake);
            }
          
        }
        
         int ans=prev[amount];    
         if(ans>=1e9) return 0;
        return ans;
    }
    int first(int arr[], int low, int high, int x)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] <= x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x);
        else
            return first(arr, low, (mid - 1), x);
    }
    return -1;
}
int getInvCount(vector<int>arr, int n)
{multiset<int> set1;
    set1.insert(arr[0]);
     int in = 0;
    multiset<int>::iterator it; 
    for (int i=1; i<n; i++)
    {  set1.insert(arr[i]);
        it = set1.upper_bound(arr[i]);
        in += distance(it, set1.end());
    }
  return in;
}
unsigned int Bit(unsigned int n)
{
	unsigned int rev = 0;
	while (n > 0) 
	{
		rev <<= 1;
		if (n & 1 == 1)
		n >>= 1;
	}
	return rev;
}

bool Palin(unsigned int n)
{ unsigned int rev = Bit(n);
  return (n == rev);
}
 
 int power(int x, unsigned int y)
{
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}*/
bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inpsub.txt","r",stdin);
	freopen("outsub.txt","w",stdout);
    #endif
int ans=0;
 for(int i=a;i<=b;i++)
 	if(i%div==0) ans++;
 return ans;

}
struct Node* res = NULL;
    struct Node *temp, *prev = NULL;
    int carry = 0, sum;
    while (first != NULL || second != NULL) {
        sum = carry + (first ? first->data : 0)
              + (second ? second->data : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        temp = newNode(sum);
        if (res == NULL)
            res = temp;
        else
            prev->next = temp;
        prev = temp;
        if (first)
            first = first->next;
        if (second)
            second = second->next;
    }
 
    if (carry > 0)
    return res;
}

stack<int> s1,s2;
    while(l1!=NULL){
        s1.push(l1->data);
        l1=l1->next;
    }
    while(l2!=NULL){
        s2.push(l2->data);
        l2=l2->next;
    }
    int carry=0;
    Node* result=NULL;
    while(s1.empty()==false || s2.empty()==false){
        int a=0,b=0;
        if(s1.empty()==false){
            a=s1.top();s1.pop();
        }
        if(s2.empty()==false){
            b=s2.top();s2.pop();
        }
        int total=a+b+carry;
        Node* temp=new Node();if(n%2==0) return state;
else{
	if(state=='H') return 'T';
	return 'H';
}
        temp->data=total%10;
        carry=total/10;
        if(result==NULL){
            result=temp;
        }else{
            temp->next=result;
            result=temp;
        }
    }
    if(carry!=0){
        Node* temp=new Node();
        temp->data=carry;
        temp->next=result;
        result=temp;
    }
    return result;
}

int a=Ax*Ax + Ay*Ay;
int b=Bx*Bx + By*By;
if(a<=b) return a;
return b;

