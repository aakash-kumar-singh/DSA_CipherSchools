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
void display(Node* head){
  Node* temp=head;
  if(head==NULL){
    return;
  }
  while(temp->next!=head){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
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
void insertAtBegin(Node* &head,int val){
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
  temp->next=n;
  n->next=head;
  head=n;
}
int main(){

}