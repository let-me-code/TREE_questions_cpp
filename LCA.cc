#include<iostream>
using namespace std;

struct node{
int data;
node *left,*right;
};

node* newNode(int data)
{
node *head=new node();
head->data=data;
head->right=head->left=NULL;
return(head);
}
node *lca(node *head,int n1,int n2)
{

if(head==NULL)return NULL;
if(head->data>n1 && head->data>n2)
  return lca(head->left,n1,n2);
if(head->data<n1 && head->data<n2)
  return lca(head->right,n1,n2);
return head;


}
int main()
{

node *head=newNode(20);
head->left=newNode(8);
head->left->left=newNode(4);
head->left->right=newNode(12);
head->left->right->left=newNode(10);
head->left->right->right=newNode(14);
head->right=newNode(22);
int n1,n2;
cin>>n1>>n2;
node *t = lca(head, n1, n2);
cout<<"LCa is "<<t->data<<endl;
}
