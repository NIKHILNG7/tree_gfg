//print level order elements during tree transversal

#include<bits/stdc++.h>
using namespace std;

struct Node{

Node *left, *right;
int data;

Node(int k){

data=k;
left=NULL;
right=NULL;

}


};





void print(Node *root) {

 if(root==NULL)return;

 queue<Node *>q;

 q.push(root);


 while(!q.empty()){


 	Node *curr= q.front();

   cout<<curr->data<<" ";

    q.pop();

    if(curr->left !=NULL) q.push(curr->left);

if(curr->right !=NULL) q.push(curr->right);


 } 





}


int main()

{

Node *root=new Node(10);

root->left=new Node(20);

root->right=new Node(30);

root->left->left=new Node(40);

root->left->right=new Node(50);

root->right->right=new Node (60); 


print(root);



}