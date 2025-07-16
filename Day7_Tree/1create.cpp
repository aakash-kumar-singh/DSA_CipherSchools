#include<iostream>
#include<queue>
using namespace std;
class TreeNode{
  public:
  int data;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int val){
    data=val;
    left=nullptr;
    right=nullptr;
  }
};
void preorderTraversal(TreeNode* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}
void inorderTraversal(TreeNode* root){
  if(root==NULL){
    return;
  }
  inorderTraversal(root->left);
  cout<<root->data<<" ";
  inorderTraversal(root->right);
}
void postorderTraversal(TreeNode* root){
  if(root==NULL){
    return;
  }
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  cout<<root->data<<" ";
}
void levelOrder(TreeNode* root){
  if(root==NULL) return;
  queue<TreeNode*> q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    TreeNode* temp=q.front();
    q.pop();
    if(temp!=NULL){

      cout<<temp->data<<" ";
      if(temp->left)
      {
        q.push(temp->left);
      }
      if(temp->right){
        q.push(temp->right);
      }
    }
    else if(!q.empty()){
      q.push(NULL);
    }

  }

}
int countNodes(TreeNode* root){
  if(root==NULL) return 0;
  return 1+countNodes(root->left)+countNodes(root->right);
}
int countLeaf(TreeNode* root){
  if(root==NULL){
    return 0;
  }
  if(!root->left && !root->right) return 1;
  return countLeaf(root->left)+countLeaf(root->right);
}


int main(){
  TreeNode* root=new TreeNode(1);
  root->left=new TreeNode(2);
  root->right=new TreeNode(3);
}
