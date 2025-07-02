#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int val){
    data=val;
    next=NULL;
  }
};
void insertAtEnd(Node* &head,int val){
  Node* n=new Node(val);
  if(head==NULL){
    n->next=n;
    head=n;
    return;
  }
  Node* temp=head;
  while(temp->next!=head){
    temp=temp->next;
  }
  n->next=head;
  temp->next=n;

}
int main(){

}