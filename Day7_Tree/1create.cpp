#include<iostream>
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

int main(){
  TreeNode* root=new TreeNode(1);
  root->left=new TreeNode(2);
  root->right=new TreeNode(3);
}
