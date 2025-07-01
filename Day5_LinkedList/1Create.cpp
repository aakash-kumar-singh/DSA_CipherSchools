#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;

  Node(int val){
    data=val;
    next=NULL;
  }

};
void insertAtEnd(Node* &head,int val){
  Node* n=new Node(val);
  if(head==NULL){
    head=n;
    return;
  }
  Node* temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=n;
}
void insertAtBegin(Node* &head,int val){

}
void insertAtPos(Node* &head,int pos,int val){
  if(pos==0){
    insertAtBegin(head,val);
  }
  Node* n=new Node(val);
  Node* temp = head;
  for(int i=0;i<pos-1;i++){
    temp=temp->next;
  }
  n->next=temp->next;
  temp->next=n;
}
void display(Node* head){
  Node* temp=head;
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  
}
int main(){
  Node* head=NULL;
  insertAtEnd(head,10);
  insertAtEnd(head,20);
  insertAtEnd(head,30);
  insertAtEnd(head,40);
  display(head);
}