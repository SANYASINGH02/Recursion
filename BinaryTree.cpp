
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data; Node* left ; Node* right;
  /*
   Node(int val)
    {
       data=val;
       left=NULL;
       right=NULL;
    }
    */ 
};

void preorder(Node* root)
{
    if(root){
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right); }
}

void postorder(Node* root)
{
if(root){
    postorder(root->left);
    postorder(root->right); 
    cout<<root->data<<" ";
    }

}
void inorder(Node* root)
{
   if(root){
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right); 
    } 
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inpsub.txt","r",stdin);
    freopen("outsub.txt","w",stdout);
    #endif
int arr[]={1,2,3,4,5,6,7,-1,-1,-1,-1};
   //create root node
    Node *root;
   // cout<<"enter root data"<<endl;
    int x;
   // cin>>x;
    root=new Node();
    root->data=arr[0];
    root->left=NULL;
    root->right=NULL;
Node *p,*t; int i=1;
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty() && i<11)
    {
         p=Q.front();
         Q.pop();
        // cout<<"Enter a left data of  "<<p->data<<endl;
         //cin>>x;
         x=arr[i++];
         if(x!=-1)
         { t=new Node(); //t=new Node(x)
            t->data=x;
            t->left=NULL;
            t->right=NULL;
            p->left=t;
            Q.push(t);
         }
       //  cout<<"Enter a right data of  "<<p->data<<endl;
        // cin>>x;
         x=arr[i++];
         if(x!=-1)
         { t=new Node();
            t->data=x;
            t->left=NULL;
            t->right=NULL;
            p->right=t;
            Q.push(t);
         }

    }
    cout<<"PreOrder:   ";
  preorder(root);
  cout<<endl;
  cout<<"PostOrder:  ";
  postorder(root);
  cout<<endl;
  cout<<"InOrder:    ";
  inorder(root);
  cout<<endl;
return 0;
}
